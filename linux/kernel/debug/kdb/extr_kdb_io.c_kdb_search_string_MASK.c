
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 char* FUNC_0 (char*,char) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char*,int) ;

__attribute__((used)) static int FUNC_3(char *VAR_2, char *VAR_3)
{
 char VAR_4, *VAR_5;
 int VAR_6, VAR_7;


 VAR_6 = FUNC_1(VAR_2)-1;
 VAR_7 = FUNC_1(VAR_3);
 if (VAR_6 < VAR_7)
  return 0;
 if (VAR_0 && VAR_1 && VAR_6 != VAR_7)
  return 0;
 if (VAR_0) {
  if (!FUNC_2(VAR_2, VAR_3, VAR_7))
   return 1;
 } else if (VAR_1) {
  if (!FUNC_2(VAR_2+VAR_6-VAR_7, VAR_3, VAR_7))
   return 1;
 } else {
  VAR_4 = *VAR_3;
  VAR_5 = VAR_2;
  while ((VAR_5 = FUNC_0(VAR_5, VAR_4))) {
   if (!FUNC_2(VAR_5, VAR_3, VAR_7))
    return 1;
   VAR_5++;
  }
 }
 return 0;
}
