
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct atl1c_adapter {int link_duplex; int link_speed; int hw; int napi; int flags; scalar_t__ work_event; struct net_device* netdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct atl1c_adapter*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct atl1c_adapter*) ;
 int FUNC_3 (struct atl1c_adapter*) ;
 int FUNC_4 (struct atl1c_adapter*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (int ,int *) ;

__attribute__((used)) static void FUNC_10(struct atl1c_adapter *VAR_2)
{
 struct net_device *VAR_3 = VAR_2->netdev;

 FUNC_0(VAR_2);
 VAR_2->work_event = 0;


 FUNC_9(VAR_1, &VAR_2->flags);
 FUNC_8(VAR_3);
 FUNC_7(&VAR_2->napi);
 FUNC_3(VAR_2);
 FUNC_2(VAR_2);

 FUNC_1(&VAR_2->hw);

 FUNC_5(&VAR_2->hw);
 FUNC_6(1);

 VAR_2->link_speed = VAR_0;
 VAR_2->link_duplex = -1;
 FUNC_4(VAR_2);
}
