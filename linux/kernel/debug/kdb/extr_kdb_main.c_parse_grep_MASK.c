
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (char) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char*) ;
 char* FUNC_3 (char*,char) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void FUNC_6(const char *VAR_5)
{
 int VAR_6;
 char *VAR_7 = (char *)VAR_5, *VAR_8;


 if (*VAR_7 != '|')
  return;
 VAR_7++;
 while (FUNC_0(*VAR_7))
  VAR_7++;
 if (!FUNC_2(VAR_7, "grep ")) {
  FUNC_1("invalid 'pipe', see grephelp\n");
  return;
 }
 VAR_7 += 5;
 while (FUNC_0(*VAR_7))
  VAR_7++;
 VAR_8 = FUNC_3(VAR_7, '\n');
 if (VAR_8)
  *VAR_8 = '\0';
 VAR_6 = FUNC_5(VAR_7);
 if (VAR_6 == 0) {
  FUNC_1("invalid 'pipe', see grephelp\n");
  return;
 }

 if (*VAR_7 == '"') {


  VAR_7++;
  VAR_8 = FUNC_3(VAR_7, '"');
  if (!VAR_8) {
   FUNC_1("invalid quoted string, see grephelp\n");
   return;
  }
  *VAR_8 = '\0';
 }
 VAR_1 = 0;
 if (*VAR_7 == '^') {
  VAR_1 = 1;
  VAR_7++;
 }
 VAR_6 = FUNC_5(VAR_7);
 VAR_3 = 0;
 if (*(VAR_7+VAR_6-1) == '$') {
  VAR_3 = 1;
  *(VAR_7+VAR_6-1) = '\0';
 }
 VAR_6 = FUNC_5(VAR_7);
 if (!VAR_6)
  return;
 if (VAR_6 >= VAR_0) {
  FUNC_1("search string too long\n");
  return;
 }
 FUNC_4(VAR_2, VAR_7);
 VAR_4++;
 return;
}
