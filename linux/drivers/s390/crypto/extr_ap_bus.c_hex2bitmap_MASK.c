
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char const) ;
 scalar_t__ FUNC_1 (char const) ;
 int FUNC_2 (int,unsigned long*) ;

__attribute__((used)) static int FUNC_3(const char *VAR_1, unsigned long *VAR_2, int VAR_3)
{
 int VAR_4, VAR_5, VAR_6;


 if (VAR_3 & 0x07)
  return -VAR_0;

 if (VAR_1[0] == '0' && VAR_1[1] == 'x')
  VAR_1++;
 if (*VAR_1 == 'x')
  VAR_1++;

 for (VAR_4 = 0; FUNC_1(*VAR_1) && VAR_4 < VAR_3; VAR_1++) {
  VAR_6 = FUNC_0(*VAR_1);
  for (VAR_5 = 0; VAR_5 < 4; VAR_5++)
   if (VAR_6 & (0x08 >> VAR_5))
    FUNC_2(VAR_4 + VAR_5, VAR_2);
  VAR_4 += 4;
 }

 if (*VAR_1 == '\n')
  VAR_1++;
 if (*VAR_1)
  return -VAR_0;
 return 0;
}
