
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct vsc8531_private {int rate_magic; int nleds; int stats; int nstats; int hw_stats; int supp_led_modes; } ;
struct TYPE_2__ {int dev; } ;
struct phy_device {TYPE_1__ mdio; struct vsc8531_private* priv; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,int ,int,int ) ;
 struct vsc8531_private* FUNC_2 (int *,int,int ) ;
 int FUNC_3 (struct phy_device*,int *) ;
 int FUNC_4 (struct phy_device*) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_5(struct phy_device *VAR_6)
{
 struct vsc8531_private *VAR_7;
 int VAR_8;
 u32 VAR_9[2] = {VAR_2,
    VAR_3};

 VAR_8 = FUNC_4(VAR_6);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_7 = FUNC_2(&VAR_6->mdio.dev, sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_6->priv = VAR_7;

 VAR_7->rate_magic = VAR_8;
 VAR_7->nleds = 2;
 VAR_7->supp_led_modes = VAR_4;
 VAR_7->hw_stats = VAR_5;
 VAR_7->nstats = FUNC_0(VAR_5);
 VAR_7->stats = FUNC_1(&VAR_6->mdio.dev, VAR_7->nstats,
          sizeof(u64), VAR_1);
 if (!VAR_7->stats)
  return -VAR_0;

 return FUNC_3(VAR_6, VAR_9);
}
