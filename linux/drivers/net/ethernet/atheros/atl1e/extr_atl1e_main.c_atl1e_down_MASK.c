
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct atl1e_adapter {int link_duplex; int link_speed; int napi; int hw; int flags; struct net_device* netdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct atl1e_adapter*) ;
 int FUNC_1 (struct atl1e_adapter*) ;
 int FUNC_2 (struct atl1e_adapter*) ;
 int FUNC_3 (struct atl1e_adapter*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (int ,int *) ;

void FUNC_10(struct atl1e_adapter *VAR_2)
{
 struct net_device *VAR_3 = VAR_2->netdev;



 FUNC_9(VAR_1, &VAR_2->flags);

 FUNC_8(VAR_3);


 FUNC_4(&VAR_2->hw);
 FUNC_5(1);

 FUNC_6(&VAR_2->napi);
 FUNC_2(VAR_2);
 FUNC_3(VAR_2);

 FUNC_7(VAR_3);
 VAR_2->link_speed = VAR_0;
 VAR_2->link_duplex = -1;
 FUNC_1(VAR_2);
 FUNC_0(VAR_2);
}
