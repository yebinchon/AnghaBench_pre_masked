
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct e1000_hw {int dummy; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct e1000_hw*,scalar_t__,int,scalar_t__*) ;
 int FUNC_1 (char*) ;

s32 FUNC_2(struct e1000_hw *VAR_3)
{
 s32 VAR_4;
 u16 VAR_5 = 0;
 u16 VAR_6, VAR_7;

 for (VAR_6 = 0; VAR_6 < (VAR_1 + 1); VAR_6++) {
  VAR_4 = FUNC_0(VAR_3, VAR_6, 1, &VAR_7);
  if (VAR_4) {
   FUNC_1("NVM Read Error\n");
   return VAR_4;
  }
  VAR_5 += VAR_7;
 }

 if (VAR_5 != (u16)VAR_2) {
  FUNC_1("NVM Checksum Invalid\n");
  return -VAR_0;
 }

 return 0;
}
