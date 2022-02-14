
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct ixgbe_hw {int dummy; } ;
typedef int s32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct ixgbe_hw*,int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct ixgbe_hw*,char*) ;
 int FUNC_2 (int) ;

__attribute__((used)) static s32 FUNC_3(struct ixgbe_hw *VAR_4, u32 *VAR_5)
{
 u32 VAR_6, VAR_7;





 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  VAR_7 = FUNC_0(VAR_4, VAR_3);
  if (!(VAR_7 & VAR_2))
   break;
  FUNC_2(10);
 }
 if (VAR_5)
  *VAR_5 = VAR_7;
 if (VAR_6 == VAR_1) {
  FUNC_1(VAR_4, "IOSF wait timed out\n");
  return VAR_0;
 }

 return 0;
}
