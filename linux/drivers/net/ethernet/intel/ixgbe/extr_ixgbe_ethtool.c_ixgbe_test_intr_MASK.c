
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ixgbe_adapter {int hw; int test_icr; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 struct ixgbe_adapter* FUNC_1 (struct net_device*) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_2, void *VAR_3)
{
 struct net_device *VAR_4 = (struct net_device *) VAR_3;
 struct ixgbe_adapter *VAR_5 = FUNC_1(VAR_4);

 VAR_5->test_icr |= FUNC_0(&VAR_5->hw, VAR_1);

 return VAR_0;
}
