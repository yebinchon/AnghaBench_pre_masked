
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ixgbe_hw {int dummy; } ;
struct ixgbe_adapter {int flags; struct ixgbe_hw hw; } ;


 int VAR_0 ;
 int FUNC_0 (struct ixgbe_hw*) ;
 int VAR_1 ;
 int FUNC_1 (struct ixgbe_hw*,int ,int) ;
 int FUNC_2 (int ,char*) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_3(struct ixgbe_adapter *VAR_3, u32 VAR_4)
{
 struct ixgbe_hw *VAR_5 = &VAR_3->hw;

 if ((VAR_3->flags & VAR_1) &&
     (VAR_4 & FUNC_0(VAR_5))) {
  FUNC_2(VAR_2, "Fan has stopped, replace the adapter\n");

  FUNC_1(VAR_5, VAR_0, FUNC_0(VAR_5));
 }
}
