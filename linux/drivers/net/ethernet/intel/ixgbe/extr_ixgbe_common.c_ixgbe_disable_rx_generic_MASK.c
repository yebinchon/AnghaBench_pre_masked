
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ type; int set_lben; } ;
struct ixgbe_hw {TYPE_1__ mac; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ixgbe_hw*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct ixgbe_hw*,int ,int) ;
 scalar_t__ VAR_4 ;

void FUNC_2(struct ixgbe_hw *VAR_5)
{
 u32 VAR_6;

 VAR_6 = FUNC_0(VAR_5, VAR_2);
 if (VAR_6 & VAR_3) {
  if (VAR_5->mac.type != VAR_4) {
   u32 VAR_7;

   VAR_7 = FUNC_0(VAR_5, VAR_0);
   if (VAR_7 & VAR_1) {
    VAR_7 &= ~VAR_1;
    FUNC_1(VAR_5, VAR_0, VAR_7);
    VAR_5->mac.set_lben = 1;
   } else {
    VAR_5->mac.set_lben = 0;
   }
  }
  VAR_6 &= ~VAR_3;
  FUNC_1(VAR_5, VAR_2, VAR_6);
 }
}
