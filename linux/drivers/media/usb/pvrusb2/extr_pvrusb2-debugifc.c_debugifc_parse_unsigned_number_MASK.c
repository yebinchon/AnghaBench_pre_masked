
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(const char *VAR_1,unsigned int VAR_2,
       u32 *VAR_3)
{
 u32 VAR_4 = 0;
 int VAR_5 = 10;
 if ((VAR_2 >= 2) && (VAR_1[0] == '0') &&
     ((VAR_1[1] == 'x') || (VAR_1[1] == 'X'))) {
  VAR_5 = 16;
  VAR_2 -= 2;
  VAR_1 += 2;
 } else if ((VAR_2 >= 1) && (VAR_1[0] == '0')) {
  VAR_5 = 8;
 }

 while (VAR_2--) {
  int VAR_6 = FUNC_0(*VAR_1++);
  if (VAR_6 < 0 || VAR_6 >= VAR_5)
   return -VAR_0;
  VAR_4 *= VAR_5;
  VAR_4 += VAR_6;
 }
 *VAR_3 = VAR_4;
 return 0;
}
