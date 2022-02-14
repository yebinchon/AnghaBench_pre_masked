
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ requested_mode; } ;
struct ixgbe_hw {TYPE_1__ fc; } ;
typedef int s32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct ixgbe_hw*) ;

__attribute__((used)) static s32 FUNC_1(struct ixgbe_hw *VAR_2)
{
 if (VAR_2->fc.requested_mode == VAR_0)
  VAR_2->fc.requested_mode = VAR_1;

 return FUNC_0(VAR_2);
}
