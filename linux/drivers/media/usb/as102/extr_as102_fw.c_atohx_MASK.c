
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char FUNC_0 (char) ;

__attribute__((used)) static unsigned char FUNC_1(unsigned char *VAR_0, char *VAR_1)
{
 unsigned char VAR_2 = 0;

 char VAR_3 = FUNC_0(*VAR_1) - '0';
 char VAR_4 = FUNC_0(*(VAR_1 + 1)) - '0';

 if (VAR_3 > 9)
  VAR_3 -= 7;
 if (VAR_4 > 9)
  VAR_4 -= 7;

 *VAR_0 = VAR_2 = ((VAR_3 & 0xF) << 4) | (VAR_4 & 0xF);
 return VAR_2;
}
