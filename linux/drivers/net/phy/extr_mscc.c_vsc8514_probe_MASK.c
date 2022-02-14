
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct vsc8531_private {int nleds; int stats; int nstats; int hw_stats; int supp_led_modes; } ;
struct TYPE_2__ {int dev; } ;
struct phy_device {TYPE_1__ mdio; struct vsc8531_private* priv; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,int ,int,int ) ;
 struct vsc8531_private* FUNC_2 (int *,int,int ) ;
 int FUNC_3 (struct phy_device*,int *) ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_4(struct phy_device *VAR_8)
{
 struct vsc8531_private *VAR_9;
 u32 VAR_10[4] = {VAR_3,
    VAR_4, VAR_5,
    VAR_2};

 VAR_9 = FUNC_2(&VAR_8->mdio.dev, sizeof(*VAR_9), VAR_1);
 if (!VAR_9)
  return -VAR_0;

 VAR_8->priv = VAR_9;

 VAR_9->nleds = 4;
 VAR_9->supp_led_modes = VAR_6;
 VAR_9->hw_stats = VAR_7;
 VAR_9->nstats = FUNC_0(VAR_7);
 VAR_9->stats = FUNC_1(&VAR_8->mdio.dev, VAR_9->nstats,
          sizeof(u64), VAR_1);
 if (!VAR_9->stats)
  return -VAR_0;

 return FUNC_3(VAR_8, VAR_10);
}
