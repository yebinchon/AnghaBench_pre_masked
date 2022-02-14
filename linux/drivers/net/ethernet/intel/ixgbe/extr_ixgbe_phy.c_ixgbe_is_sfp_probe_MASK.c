
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_2__ {scalar_t__ sfp_type; } ;
struct ixgbe_hw {TYPE_1__ phy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static bool FUNC_0(struct ixgbe_hw *VAR_3, u8 VAR_4, u8 VAR_5)
{
 if (VAR_5 == VAR_0 &&
     VAR_4 == VAR_1 &&
     VAR_3->phy.sfp_type == VAR_2)
  return 1;
 return 0;
}
