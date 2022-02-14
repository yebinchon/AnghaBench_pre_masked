
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ type; } ;
struct ixgbe_hw {TYPE_1__ mac; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ixgbe_hw*,int ) ;
 int FUNC_1 (struct ixgbe_hw*,char*) ;
 scalar_t__ VAR_2 ;

bool FUNC_2(struct ixgbe_hw *VAR_3)
{
 u32 VAR_4;


 if (VAR_3->mac.type == VAR_2)
  return 0;

 VAR_4 = FUNC_0(VAR_3, VAR_0);
 if (VAR_4 & VAR_1) {
  FUNC_1(VAR_3, "MNG_VETO bit detected.\n");
  return 1;
 }

 return 0;
}
