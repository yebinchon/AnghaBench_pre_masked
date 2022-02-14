
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ type; } ;
struct ixgbe_hw {TYPE_1__ mac; } ;


 int FUNC_0 (struct ixgbe_hw*) ;
 int VAR_0 ;
 int FUNC_1 (struct ixgbe_hw*,int ) ;
 scalar_t__ VAR_1 ;

bool FUNC_2(struct ixgbe_hw *VAR_2)
{
 u32 VAR_3;

 if (VAR_2->mac.type < VAR_1)
  return 0;

 VAR_3 = FUNC_1(VAR_2, FUNC_0(VAR_2));

 return !!(VAR_3 & VAR_0);
}
