
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct e1000_hw {int dummy; } ;
struct e1000_adapter {int test_icr; struct e1000_hw hw; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 struct e1000_adapter* FUNC_1 (struct net_device*) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_2, void *VAR_3)
{
 struct net_device *VAR_4 = (struct net_device *)VAR_3;
 struct e1000_adapter *VAR_5 = FUNC_1(VAR_4);
 struct e1000_hw *VAR_6 = &VAR_5->hw;

 VAR_5->test_icr |= FUNC_0(VAR_0);

 return VAR_1;
}
