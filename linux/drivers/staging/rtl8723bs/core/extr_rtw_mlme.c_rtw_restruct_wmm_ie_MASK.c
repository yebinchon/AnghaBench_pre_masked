
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint ;
typedef int u8 ;
struct adapter {int dummy; } ;



int FUNC_0(struct adapter *VAR_0, u8 *VAR_1, u8 *VAR_2, uint VAR_3, uint VAR_4)
{
 unsigned int VAR_5 = 0;
 unsigned int VAR_6, VAR_7;

 VAR_6 = 12;
 while (VAR_6 < VAR_3) {
  VAR_5 = VAR_4;

  if (VAR_1[VAR_6] == 0xDD && VAR_1[VAR_6+2] == 0x00 && VAR_1[VAR_6+3] == 0x50 && VAR_1[VAR_6+4] == 0xF2 && VAR_1[VAR_6+5] == 0x02 && VAR_6+5 < VAR_3) {
   for (VAR_7 = VAR_6; VAR_7 < VAR_6 + 9; VAR_7++) {
     VAR_2[VAR_5] = VAR_1[VAR_7];
     VAR_5++;
   }
   VAR_2[VAR_4 + 1] = 0x07;
   VAR_2[VAR_4 + 6] = 0x00;
   VAR_2[VAR_4 + 8] = 0x00;

   break;
  }

  VAR_6 += (VAR_1[VAR_6+1]+2);
 }

 return VAR_5;

}
