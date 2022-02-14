
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct e1000_hw {int dummy; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (struct e1000_hw*,scalar_t__,int,scalar_t__*) ;
 scalar_t__ FUNC_1 (struct e1000_hw*,scalar_t__,int,scalar_t__*) ;
 int FUNC_2 (char*) ;

s32 FUNC_3(struct e1000_hw *VAR_4)
{
 u16 VAR_5 = 0;
 u16 VAR_6, VAR_7;

 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  if (FUNC_0(VAR_4, VAR_6, 1, &VAR_7) < 0) {
   FUNC_2("EEPROM Read Error\n");
   return -VAR_0;
  }
  VAR_5 += VAR_7;
 }
 VAR_5 = (u16)VAR_3 - VAR_5;
 if (FUNC_1(VAR_4, VAR_2, 1, &VAR_5) < 0) {
  FUNC_2("EEPROM Write Error\n");
  return -VAR_0;
 }
 return VAR_1;
}
