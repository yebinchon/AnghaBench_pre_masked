
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct e1000_hw {int dummy; } ;
typedef int s32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int) ;
 int FUNC_3 (scalar_t__,scalar_t__) ;

s32 FUNC_4(struct e1000_hw *VAR_4, u32 VAR_5,
         u32 VAR_6, u8 VAR_7)
{
 u32 VAR_8, VAR_9 = 0;
 s32 VAR_10 = 0;


 VAR_9 = ((u32)VAR_7) | (VAR_6 << VAR_1);
 FUNC_3(VAR_5, VAR_9);


 for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
  FUNC_2(5);
  VAR_9 = FUNC_1(VAR_5);
  if (VAR_9 & VAR_2)
   break;
 }
 if (!(VAR_9 & VAR_2)) {
  FUNC_0("Reg %08x did not indicate ready\n", VAR_5);
  VAR_10 = -VAR_0;
  goto out;
 }

out:
 return VAR_10;
}
