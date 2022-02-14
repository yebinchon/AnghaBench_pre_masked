
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct vsc8531_private {int nleds; int stats; int nstats; int hw_stats; int supp_led_modes; } ;
struct TYPE_2__ {int dev; } ;
struct phy_device {int phy_id; TYPE_1__ mdio; struct vsc8531_private* priv; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,int ,int,int ) ;
 struct vsc8531_private* FUNC_3 (int *,int,int ) ;
 int VAR_10 ;
 int FUNC_4 (struct phy_device*,int *) ;

__attribute__((used)) static int FUNC_5(struct phy_device *VAR_11)
{
 struct vsc8531_private *VAR_12;
 u32 VAR_13[4] = {VAR_5,
    VAR_6, VAR_7,
    VAR_4};

 if ((VAR_11->phy_id & VAR_3) != VAR_8) {
  FUNC_1(&VAR_11->mdio.dev, "Only VSC8584 revB is supported.\n");
  return -VAR_1;
 }

 VAR_12 = FUNC_3(&VAR_11->mdio.dev, sizeof(*VAR_12), VAR_2);
 if (!VAR_12)
  return -VAR_0;

 VAR_11->priv = VAR_12;

 VAR_12->nleds = 4;
 VAR_12->supp_led_modes = VAR_9;
 VAR_12->hw_stats = VAR_10;
 VAR_12->nstats = FUNC_0(VAR_10);
 VAR_12->stats = FUNC_2(&VAR_11->mdio.dev, VAR_12->nstats,
          sizeof(u64), VAR_2);
 if (!VAR_12->stats)
  return -VAR_0;

 return FUNC_4(VAR_11, VAR_13);
}
