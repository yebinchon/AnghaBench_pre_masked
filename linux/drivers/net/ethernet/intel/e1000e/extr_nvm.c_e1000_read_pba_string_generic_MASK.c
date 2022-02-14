
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct e1000_hw {int dummy; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct e1000_hw*,int,int,int*) ;
 int FUNC_1 (char*) ;

s32 FUNC_2(struct e1000_hw *VAR_7, u8 *VAR_8,
      u32 VAR_9)
{
 s32 VAR_10;
 u16 VAR_11;
 u16 VAR_12;
 u16 VAR_13;
 u16 VAR_14;

 if (VAR_8 == ((void*)0)) {
  FUNC_1("PBA string buffer was null\n");
  return -VAR_0;
 }

 VAR_10 = FUNC_0(VAR_7, VAR_4, 1, &VAR_11);
 if (VAR_10) {
  FUNC_1("NVM Read Error\n");
  return VAR_10;
 }

 VAR_10 = FUNC_0(VAR_7, VAR_5, 1, &VAR_12);
 if (VAR_10) {
  FUNC_1("NVM Read Error\n");
  return VAR_10;
 }





 if (VAR_11 != VAR_6) {
  FUNC_1("NVM PBA number is not stored as string\n");


  if (VAR_9 < VAR_3) {
   FUNC_1("PBA string buffer too small\n");
   return VAR_1;
  }


  VAR_8[0] = (VAR_11 >> 12) & 0xF;
  VAR_8[1] = (VAR_11 >> 8) & 0xF;
  VAR_8[2] = (VAR_11 >> 4) & 0xF;
  VAR_8[3] = VAR_11 & 0xF;
  VAR_8[4] = (VAR_12 >> 12) & 0xF;
  VAR_8[5] = (VAR_12 >> 8) & 0xF;
  VAR_8[6] = '-';
  VAR_8[7] = 0;
  VAR_8[8] = (VAR_12 >> 4) & 0xF;
  VAR_8[9] = VAR_12 & 0xF;


  VAR_8[10] = '\0';


  for (VAR_13 = 0; VAR_13 < 10; VAR_13++) {
   if (VAR_8[VAR_13] < 0xA)
    VAR_8[VAR_13] += '0';
   else if (VAR_8[VAR_13] < 0x10)
    VAR_8[VAR_13] += 'A' - 0xA;
  }

  return 0;
 }

 VAR_10 = FUNC_0(VAR_7, VAR_12, 1, &VAR_14);
 if (VAR_10) {
  FUNC_1("NVM Read Error\n");
  return VAR_10;
 }

 if (VAR_14 == 0xFFFF || VAR_14 == 0) {
  FUNC_1("NVM PBA number section invalid length\n");
  return -VAR_2;
 }

 if (VAR_9 < (((u32)VAR_14 * 2) - 1)) {
  FUNC_1("PBA string buffer too small\n");
  return -VAR_1;
 }


 VAR_12++;
 VAR_14--;

 for (VAR_13 = 0; VAR_13 < VAR_14; VAR_13++) {
  VAR_10 = FUNC_0(VAR_7, VAR_12 + VAR_13, 1, &VAR_11);
  if (VAR_10) {
   FUNC_1("NVM Read Error\n");
   return VAR_10;
  }
  VAR_8[VAR_13 * 2] = (u8)(VAR_11 >> 8);
  VAR_8[(VAR_13 * 2) + 1] = (u8)(VAR_11 & 0xFF);
 }
 VAR_8[VAR_13 * 2] = '\0';

 return 0;
}
