
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* VAR_1 ;

__attribute__((used)) static int FUNC_0(const char *VAR_2, unsigned int VAR_3,
          unsigned long *VAR_4)
{
 const char *VAR_5 = VAR_2;
 char *VAR_6 = VAR_1;
 int VAR_7 = VAR_0;

 while (VAR_3--) {
  if (*VAR_2 == '\n') {
   if (VAR_7 < 2)
    break;
   *VAR_6++ = '\r';
   VAR_7--;
  } else if (VAR_7 < 1)
   break;
  *VAR_6++ = *VAR_2++;
  VAR_7--;
 }
 *VAR_4 = VAR_6 - VAR_1;
 return VAR_2 - VAR_5;
}
