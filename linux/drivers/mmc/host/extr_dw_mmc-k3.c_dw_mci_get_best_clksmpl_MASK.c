
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (unsigned int,int) ;

__attribute__((used)) static int FUNC_2(unsigned int VAR_1)
{
 int VAR_2;
 int VAR_3;
 unsigned int VAR_4;
 unsigned int VAR_5;
 unsigned int VAR_6 = 0;
 unsigned int VAR_7 = 0;
 unsigned int VAR_8 = 0;

 if (!VAR_1)
  return -VAR_0;

 if (~VAR_1 == 0)
  return 0;

 VAR_2 = FUNC_0(VAR_1) - 1;






 while (VAR_2 < 32) {
  VAR_4 = FUNC_1(VAR_1, VAR_2);
  VAR_5 = FUNC_0(~VAR_4) - 1;

  if (VAR_5 > VAR_7) {
   VAR_7 = VAR_5;
   VAR_6 = VAR_2;
  }

  VAR_3 = FUNC_0(VAR_4 >> VAR_5) - 1;
  if (VAR_3 < 0)
   break;

  VAR_2 += VAR_5 + VAR_3;
 }

 VAR_8 = VAR_6 + VAR_7 / 2;
 if (VAR_8 >= 32)
  VAR_8 %= 32;

 return VAR_8;
}
