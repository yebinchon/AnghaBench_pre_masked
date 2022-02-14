
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct ixgbe_hw {int dummy; } ;
typedef int s32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (struct ixgbe_hw*,int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static s32 FUNC_2(struct ixgbe_hw *VAR_6, u32 VAR_7)
{
 u32 VAR_8;
 u32 VAR_9;

 for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
  if (VAR_7 == VAR_5)
   VAR_9 = FUNC_0(VAR_6, VAR_1);
  else
   VAR_9 = FUNC_0(VAR_6, VAR_3);

  if (VAR_9 & VAR_0) {
   return 0;
  }
  FUNC_1(5);
 }
 return VAR_4;
}
