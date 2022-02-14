
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int
FUNC_0(const unsigned char *VAR_3, int VAR_4, bool VAR_5)
{
 int VAR_6;

 if (VAR_4 > VAR_0) {
  if (VAR_5)
   return -VAR_2;
  VAR_4 = VAR_0;
 }
 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
  if (VAR_3[VAR_6] < ' ' || VAR_3[VAR_6] == ':'
      || (VAR_3[VAR_6] > 0x7e && VAR_3[VAR_6] < 0xa0))
   return -VAR_1;
 }

 return 0;
}
