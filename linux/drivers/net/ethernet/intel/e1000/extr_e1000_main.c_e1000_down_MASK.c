
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct e1000_hw {int dummy; } ;
struct e1000_adapter {scalar_t__ link_duplex; scalar_t__ link_speed; int napi; struct net_device* netdev; struct e1000_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct e1000_adapter*) ;
 int FUNC_2 (struct e1000_adapter*) ;
 int FUNC_3 (struct e1000_adapter*) ;
 int FUNC_4 (struct e1000_adapter*) ;
 int FUNC_5 (struct e1000_adapter*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct net_device*) ;
 int FUNC_11 (struct net_device*) ;

void FUNC_12(struct e1000_adapter *VAR_4)
{
 struct e1000_hw *VAR_5 = &VAR_4->hw;
 struct net_device *VAR_6 = VAR_4->netdev;
 u32 VAR_7, VAR_8;


 VAR_7 = FUNC_6(VAR_2);
 FUNC_7(VAR_2, VAR_7 & ~VAR_0);


 FUNC_11(VAR_6);


 VAR_8 = FUNC_6(VAR_3);
 VAR_8 &= ~VAR_1;
 FUNC_7(VAR_3, VAR_8);

 FUNC_0();
 FUNC_8(10);
 FUNC_10(VAR_6);

 FUNC_9(&VAR_4->napi);

 FUNC_4(VAR_4);





 FUNC_3(VAR_4);

 VAR_4->link_speed = 0;
 VAR_4->link_duplex = 0;

 FUNC_5(VAR_4);
 FUNC_2(VAR_4);
 FUNC_1(VAR_4);
}
