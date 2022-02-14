
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ixgbe_hw {int dummy; } ;
struct ixgbe_adapter {int * rss_key; struct ixgbe_hw hw; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct ixgbe_hw*,int ,int ) ;

void FUNC_2(struct ixgbe_adapter *VAR_0)
{
 struct ixgbe_hw *VAR_1 = &VAR_0->hw;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < 10; VAR_2++)
  FUNC_1(VAR_1, FUNC_0(VAR_2), VAR_0->rss_key[VAR_2]);
}
