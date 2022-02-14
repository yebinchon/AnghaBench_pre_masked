
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char) ;

__attribute__((used)) static int FUNC_1(char **VAR_0, unsigned int *VAR_1, int VAR_2,
      int VAR_3, int VAR_4)
{
 int VAR_5;

 VAR_5 = 0;
 *VAR_1 = 0;

 while (VAR_5 <= VAR_3) {
  int VAR_6 = FUNC_0(**VAR_0);

  if (VAR_6 < 0)
   break;
  *VAR_1 = *VAR_1 * 16 + VAR_6;
  (*VAR_0)++;
  VAR_5++;
 }

 if ((VAR_5 < VAR_2) || (VAR_5 > VAR_3) || (*VAR_1 > VAR_4))
  return 1;

 return 0;
}
