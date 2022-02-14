
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*,char) ;

char *FUNC_1(char *VAR_0, const char *VAR_1, const char *VAR_2)
{
 while (VAR_0 <= VAR_1) {
  char VAR_3 = *VAR_1++;
  if (!VAR_3) {
   return VAR_0;
  } else if (!FUNC_0(VAR_2, VAR_3)) {
   *VAR_0++ = VAR_3;
  } else if (VAR_0 + 4 > VAR_1) {
   break;
  } else {
   *VAR_0++ = '\\';
   *VAR_0++ = '0' + ((VAR_3 & 0300) >> 6);
   *VAR_0++ = '0' + ((VAR_3 & 070) >> 3);
   *VAR_0++ = '0' + (VAR_3 & 07);
  }
 }
 return ((void*)0);
}
