
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char**,char*) ;
 char* FUNC_3 (char*) ;

__attribute__((used)) static int FUNC_4(char **VAR_1, char *VAR_2, char **VAR_3, char **VAR_4)
{
 char *VAR_5 = *VAR_1;
 char *VAR_6, *VAR_7;

 while (VAR_5 < VAR_2 && *VAR_5 == '\0')
  VAR_5++;
 if (VAR_5 == VAR_2)
  return 0;

 if (VAR_2[-1] != '\0') {
  FUNC_0("info not properly terminated\n");
  return -VAR_0;
 }

 VAR_6 = VAR_7 = VAR_5;
 VAR_5 += FUNC_1(VAR_5);

 if (VAR_4) {
  FUNC_2(&VAR_7, "=");
  if (!VAR_7)
   VAR_7 = VAR_6 + FUNC_1(VAR_6);
  VAR_6 = FUNC_3(VAR_6);
  VAR_7 = FUNC_3(VAR_7);
 } else
  VAR_6 = FUNC_3(VAR_6);

 if (!FUNC_1(VAR_6)) {
  FUNC_0("zero length info key specified\n");
  return -VAR_0;
 }

 *VAR_1 = VAR_5;
 *VAR_3 = VAR_6;
 if (VAR_4)
  *VAR_4 = VAR_7;

 return 1;
}
