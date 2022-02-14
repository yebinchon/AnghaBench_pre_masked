
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u8 ;
typedef int str_count ;
typedef int s32 ;


 int FUNC_0 (char*,int,char*,int) ;
 int FUNC_1 (char*) ;

void FUNC_2(u8 *VAR_0, s32 VAR_1)
{
 int VAR_2, VAR_3, VAR_4;
 char VAR_5[6];

 FUNC_0(VAR_5, sizeof(VAR_5), "~%d", VAR_1);
 VAR_4 = FUNC_1(VAR_5);

 VAR_2 = 0;
 VAR_3 = 0;
 while (VAR_3 <= (8 - VAR_4)) {
  VAR_2 = VAR_3;
  if (VAR_0[VAR_3] == ' ')
   break;
  if (VAR_0[VAR_3] & 0x80)
   VAR_3 += 2;
  else
   VAR_3++;
 }

 for (VAR_3 = 0; VAR_3 < VAR_4; VAR_2++, VAR_3++)
  VAR_0[VAR_2] = (u8)VAR_5[VAR_3];

 if (VAR_2 == 7)
  VAR_0[7] = ' ';
}
