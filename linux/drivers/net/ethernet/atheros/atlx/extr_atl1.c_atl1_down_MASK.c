
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_5__ {TYPE_1__* cmb; } ;
struct atl1_adapter {int phy_timer_pending; int link_duplex; int link_speed; TYPE_2__ cmb; int hw; TYPE_3__* pdev; int phy_config_timer; int napi; struct net_device* netdev; } ;
struct TYPE_6__ {int irq; } ;
struct TYPE_4__ {scalar_t__ int_stats; } ;


 int VAR_0 ;
 int FUNC_0 (struct atl1_adapter*) ;
 int FUNC_1 (struct atl1_adapter*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct atl1_adapter*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,struct net_device*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_10(struct atl1_adapter *VAR_1)
{
 struct net_device *VAR_2 = VAR_1->netdev;

 FUNC_6(&VAR_1->napi);
 FUNC_8(VAR_2);
 FUNC_4(&VAR_1->phy_config_timer);
 VAR_1->phy_timer_pending = 0;

 FUNC_3(VAR_1);
 FUNC_5(VAR_1->pdev->irq, VAR_2);
 FUNC_9(VAR_1->pdev);
 FUNC_2(&VAR_1->hw);
 VAR_1->cmb.cmb->int_stats = 0;

 VAR_1->link_speed = VAR_0;
 VAR_1->link_duplex = -1;
 FUNC_7(VAR_2);

 FUNC_1(VAR_1);
 FUNC_0(VAR_1);
}
