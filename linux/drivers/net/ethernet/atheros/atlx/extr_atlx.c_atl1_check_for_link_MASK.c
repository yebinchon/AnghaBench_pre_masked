
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct net_device {int name; } ;
struct atlx_adapter {int phy_timer_pending; int link_chg_task; int link_speed; TYPE_1__* pdev; int lock; int hw; struct net_device* netdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int*) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct net_device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct atlx_adapter *VAR_3)
{
 struct net_device *VAR_4 = VAR_3->netdev;
 u16 VAR_5 = 0;

 FUNC_5(&VAR_3->lock);
 VAR_3->phy_timer_pending = 0;
 FUNC_0(&VAR_3->hw, VAR_1, &VAR_5);
 FUNC_0(&VAR_3->hw, VAR_1, &VAR_5);
 FUNC_6(&VAR_3->lock);


 if (!(VAR_5 & VAR_0)) {

  if (FUNC_3(VAR_4)) {

   FUNC_1(&VAR_3->pdev->dev, "%s link is down\n",
    VAR_4->name);
   VAR_3->link_speed = VAR_2;
   FUNC_2(VAR_4);
  }
 }
 FUNC_4(&VAR_3->link_chg_task);
}
