
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SiS_Private {unsigned char* VirtualRomBase; scalar_t__ ChipType; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

bool
FUNC_0(struct SiS_Private *VAR_4)
{
   unsigned char *VAR_5 = VAR_4->VirtualRomBase;
   unsigned short VAR_6, VAR_7 = 1, VAR_8 = 0;

   if(VAR_4->ChipType >= VAR_3) {

      return 0;
   } else if(VAR_4->ChipType >= VAR_2) {

      return 1;
   } else if(VAR_4->ChipType >= VAR_1) {
      if((VAR_5[0x1a] == 'N') &&
  (VAR_5[0x1b] == 'e') &&
  (VAR_5[0x1c] == 'w') &&
  (VAR_5[0x1d] == 'V')) {
  return 1;
      }
      VAR_6 = VAR_5[0x16] | (VAR_5[0x17] << 8);
      if(VAR_6) {
  if((VAR_5[VAR_6+1] == '.') || (VAR_5[VAR_6+4] == '.')) {
     VAR_7 = VAR_5[VAR_6] - '0';
     VAR_8 = ((VAR_5[VAR_6+2] -'0') * 10) + (VAR_5[VAR_6+3] - '0');
  }
      }
      if((VAR_7 != 0) || (VAR_8 >= 92)) {
  return 1;
      }
   } else if(VAR_0) {
      if((VAR_5[0x1a] == 'N') &&
  (VAR_5[0x1b] == 'e') &&
  (VAR_5[0x1c] == 'w') &&
  (VAR_5[0x1d] == 'V')) {
  return 1;
      }
   }
   return 0;
}
