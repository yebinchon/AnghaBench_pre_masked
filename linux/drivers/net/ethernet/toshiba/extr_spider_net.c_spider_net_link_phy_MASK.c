
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct mii_phy {int speed; int duplex; int autoneg; TYPE_2__* def; } ;
struct spider_net_card {scalar_t__ aneg_count; int medium; TYPE_3__* netdev; int aneg_timer; struct mii_phy phy; } ;
struct TYPE_6__ {int name; } ;
struct TYPE_5__ {TYPE_1__* ops; } ;
struct TYPE_4__ {int (* read_link ) (struct mii_phy*) ;int (* poll_link ) (struct mii_phy*) ;int (* enable_fiber ) (struct mii_phy*,int) ;} ;





 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct spider_net_card* VAR_6 ;
 struct spider_net_card* FUNC_0 (int ,struct timer_list*,int ) ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*,int ,int,char*,char*) ;
 int FUNC_4 (struct spider_net_card*,int ) ;
 int FUNC_5 (struct spider_net_card*) ;
 int FUNC_6 (struct spider_net_card*,int ,int) ;
 int FUNC_7 (struct mii_phy*,int) ;
 int FUNC_8 (struct mii_phy*,int) ;
 int FUNC_9 (struct mii_phy*) ;
 int FUNC_10 (struct mii_phy*) ;

__attribute__((used)) static void FUNC_11(struct timer_list *VAR_8)
{
 struct spider_net_card *VAR_9 = FUNC_0(VAR_9, VAR_8, VAR_5);
 struct mii_phy *VAR_10 = &VAR_9->phy;


 if (VAR_9->aneg_count > VAR_0) {

  FUNC_2("%s: link is down trying to bring it up\n",
    VAR_9->netdev->name);

  switch (VAR_9->medium) {
  case 130:

   if (VAR_10->def->ops->enable_fiber)
    VAR_10->def->ops->enable_fiber(VAR_10, 1);
   VAR_9->medium = 129;
   break;

  case 129:

   if (VAR_10->def->ops->enable_fiber)
    VAR_10->def->ops->enable_fiber(VAR_10, 0);
   VAR_9->medium = 128;
   break;

  case 128:


   FUNC_5(VAR_9);
   VAR_9->medium = 130;
   break;
  }

  VAR_9->aneg_count = 0;
  FUNC_1(&VAR_9->aneg_timer, VAR_7 + VAR_1);
  return;
 }


 if (!(VAR_10->def->ops->poll_link(VAR_10))) {
  VAR_9->aneg_count++;
  FUNC_1(&VAR_9->aneg_timer, VAR_7 + VAR_1);
  return;
 }


 VAR_10->def->ops->read_link(VAR_10);

 FUNC_6(VAR_9, VAR_4,
        FUNC_4(VAR_9, VAR_4));
 FUNC_6(VAR_9, VAR_2, 0x4);

 if (VAR_10->speed == 1000)
  FUNC_6(VAR_9, VAR_3, 0x00000001);
 else
  FUNC_6(VAR_9, VAR_3, 0);

 VAR_9->aneg_count = 0;

 FUNC_3("%s: link up, %i Mbps, %s-duplex %sautoneg.\n",
  VAR_9->netdev->name, VAR_10->speed,
  VAR_10->duplex == 1 ? "Full" : "Half",
  VAR_10->autoneg == 1 ? "" : "no ");
}
