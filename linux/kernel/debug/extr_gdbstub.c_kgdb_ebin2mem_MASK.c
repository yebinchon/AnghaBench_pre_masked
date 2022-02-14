
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,int) ;

__attribute__((used)) static int FUNC_1(char *VAR_0, char *VAR_1, int VAR_2)
{
 int VAR_3 = 0;
 char *VAR_4 = VAR_0;

 while (VAR_2-- > 0) {
  VAR_4[VAR_3] = *VAR_0++;
  if (VAR_4[VAR_3] == 0x7d)
   VAR_4[VAR_3] = *VAR_0++ ^ 0x20;
  VAR_3++;
 }

 return FUNC_0(VAR_1, VAR_4, VAR_3);
}
