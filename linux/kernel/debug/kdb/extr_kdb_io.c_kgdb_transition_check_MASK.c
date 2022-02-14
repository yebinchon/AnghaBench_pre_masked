
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int FUNC_5(char *VAR_2)
{
 if (VAR_2[0] != '+' && VAR_2[0] != '$') {
  FUNC_0(VAR_1);
  FUNC_2("%s", VAR_2);
 } else {
  int VAR_3 = FUNC_4(VAR_2);
  if (VAR_3 > 3 && VAR_2[VAR_3 - 3] == '#') {
   FUNC_1(VAR_2);
   FUNC_3(VAR_2, "kgdb");
   FUNC_0(VAR_0);
   return 1;
  }
 }
 return 0;
}
