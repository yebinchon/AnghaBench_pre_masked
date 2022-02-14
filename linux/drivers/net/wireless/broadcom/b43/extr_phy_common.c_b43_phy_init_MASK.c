
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct b43_phy {int do_full_init; int channel; struct b43_phy_operations* ops; TYPE_4__* chandef; } ;
struct b43_wldev {TYPE_5__* wl; struct b43_phy phy; } ;
struct b43_phy_operations {int (* init ) (struct b43_wldev*) ;int (* exit ) (struct b43_wldev*) ;int (* switch_analog ) (struct b43_wldev*,int) ;} ;
struct TYPE_10__ {TYPE_2__* hw; } ;
struct TYPE_9__ {TYPE_3__* chan; } ;
struct TYPE_8__ {int hw_value; } ;
struct TYPE_6__ {TYPE_4__ chandef; } ;
struct TYPE_7__ {TYPE_1__ conf; } ;


 int FUNC_0 (struct b43_wldev*,int) ;
 int FUNC_1 (struct b43_wldev*,int ) ;
 int FUNC_2 (TYPE_5__*,char*) ;
 int FUNC_3 (struct b43_wldev*,int) ;
 int FUNC_4 (struct b43_wldev*) ;
 int FUNC_5 (struct b43_wldev*) ;

int FUNC_6(struct b43_wldev *VAR_0)
{
 struct b43_phy *VAR_1 = &VAR_0->phy;
 const struct b43_phy_operations *VAR_2 = VAR_1->ops;
 int VAR_3;




 if (!VAR_1->chandef) {
  VAR_1->chandef = &VAR_0->wl->hw->conf.chandef;
  VAR_1->channel = VAR_1->chandef->chan->hw_value;
 }

 VAR_1->ops->switch_analog(VAR_0, 1);
 FUNC_0(VAR_0, 0);

 VAR_3 = VAR_2->init(VAR_0);
 if (VAR_3) {
  FUNC_2(VAR_0->wl, "PHY init failed\n");
  goto err_block_rf;
 }
 VAR_1->do_full_init = 0;

 VAR_3 = FUNC_1(VAR_0, VAR_1->channel);
 if (VAR_3) {
  FUNC_2(VAR_0->wl, "PHY init: Channel switch to default failed\n");
  goto err_phy_exit;
 }

 return 0;

err_phy_exit:
 VAR_1->do_full_init = 1;
 if (VAR_2->exit)
  VAR_2->exit(VAR_0);
err_block_rf:
 FUNC_0(VAR_0, 1);

 return VAR_3;
}
