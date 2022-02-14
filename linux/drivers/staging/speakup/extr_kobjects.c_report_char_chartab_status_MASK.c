
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (char*,int,char*,int,...) ;

__attribute__((used)) static void FUNC_2(int VAR_0, int VAR_1, int VAR_2,
           int VAR_3, int VAR_4)
{
 static char const *VAR_5[] = {
  "character class entries",
  "character descriptions",
 };
 int VAR_6;
 char VAR_7[80];

 if (VAR_0) {
  FUNC_0("%s reset to defaults\n", VAR_5[VAR_4]);
 } else if (VAR_1) {
  VAR_6 = FUNC_1(VAR_7, sizeof(VAR_7),
          " updated %d of %d %s\n",
          VAR_2, VAR_1, VAR_5[VAR_4]);
  if (VAR_3)
   FUNC_1(VAR_7 + (VAR_6 - 1), sizeof(VAR_7) - (VAR_6 - 1),
     " with %d reject%s\n",
     VAR_3, VAR_3 > 1 ? "s" : "");
  FUNC_0("%s", VAR_7);
 }
}
