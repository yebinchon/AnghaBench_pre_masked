
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ixgbe_hw {int dummy; } ;
struct ixgbe_adapter {int state; int link_check_timeout; int flags; int lsc_int; struct ixgbe_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ixgbe_hw*) ;
 int FUNC_1 (struct ixgbe_hw*,int ,int ) ;
 int VAR_3 ;
 int FUNC_2 (struct ixgbe_adapter*) ;
 int VAR_4 ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(struct ixgbe_adapter *VAR_5)
{
 struct ixgbe_hw *VAR_6 = &VAR_5->hw;

 VAR_5->lsc_int++;
 VAR_5->flags |= VAR_2;
 VAR_5->link_check_timeout = VAR_4;
 if (!FUNC_3(VAR_3, &VAR_5->state)) {
  FUNC_1(VAR_6, VAR_0, VAR_1);
  FUNC_0(VAR_6);
  FUNC_2(VAR_5);
 }
}
