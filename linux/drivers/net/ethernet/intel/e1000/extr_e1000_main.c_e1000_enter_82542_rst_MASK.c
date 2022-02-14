
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct e1000_hw {int dummy; } ;
struct e1000_adapter {struct net_device* netdev; struct e1000_hw hw; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int FUNC_1 (struct e1000_adapter*) ;
 int FUNC_2 (struct e1000_hw*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (struct net_device*) ;

__attribute__((used)) static void FUNC_7(struct e1000_adapter *VAR_2)
{
 struct e1000_hw *VAR_3 = &VAR_2->hw;
 struct net_device *VAR_4 = VAR_2->netdev;
 u32 VAR_5;

 FUNC_2(VAR_3);

 VAR_5 = FUNC_3(VAR_1);
 VAR_5 |= VAR_0;
 FUNC_4(VAR_1, VAR_5);
 FUNC_0();
 FUNC_5(5);

 if (FUNC_6(VAR_4))
  FUNC_1(VAR_2);
}
