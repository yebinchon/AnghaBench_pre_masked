
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct e1000_hw {int dummy; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (char*,scalar_t__,...) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static s32 FUNC_6(struct e1000_hw *VAR_8, u8 VAR_9, u16 *VAR_10)
{
 s32 VAR_11 = -VAR_0;
 u32 VAR_12;
 u16 VAR_13;
 u8 VAR_14, VAR_15;

 for (VAR_13 = 0; VAR_13 < VAR_5; VAR_13++) {
  VAR_12 = FUNC_5(FUNC_0(VAR_13));

  VAR_14 = FUNC_1(VAR_12);
  if (VAR_14 == VAR_6)
   break;
  if (VAR_14 == VAR_2)
   VAR_13 += VAR_1;
  if (VAR_14 == VAR_4)
   VAR_13 += VAR_3;
  if (VAR_14 == VAR_7) {
   VAR_15 = FUNC_2(VAR_12);
   if (VAR_15 == VAR_9) {
    *VAR_10 = FUNC_3(VAR_12);
    FUNC_4("Read INVM Word 0x%02x = %x\n",
       VAR_9, *VAR_10);
    VAR_11 = 0;
    break;
   }
  }
 }
 if (VAR_11)
  FUNC_4("Requested word 0x%02x not found in OTP\n", VAR_9);
 return VAR_11;
}
