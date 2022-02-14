
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int autotry_restart; } ;
struct ixgbe_hw {TYPE_1__ mac; } ;


 scalar_t__ FUNC_0 (struct ixgbe_hw*) ;
 int FUNC_1 (struct ixgbe_hw*) ;
 int FUNC_2 (struct ixgbe_hw*) ;

__attribute__((used)) static void FUNC_3(struct ixgbe_hw *VAR_0)
{

 if (FUNC_0(VAR_0))
  return;

 if (VAR_0->mac.autotry_restart) {
  FUNC_1(VAR_0);
  FUNC_2(VAR_0);
  VAR_0->mac.autotry_restart = 0;
 }
}
