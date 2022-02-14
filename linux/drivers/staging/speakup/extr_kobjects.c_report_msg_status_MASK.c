
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,int,char*,int,...) ;

__attribute__((used)) static void FUNC_2(int VAR_0, int VAR_1, int VAR_2,
         int VAR_3, char *VAR_4)
{
 int VAR_5;
 char VAR_6[160];

 if (VAR_0) {
  FUNC_0("i18n messages from group %s reset to defaults\n",
   VAR_4);
 } else if (VAR_1) {
  VAR_5 = FUNC_1(VAR_6, sizeof(VAR_6),
          " updated %d of %d i18n messages from group %s\n",
           VAR_2, VAR_1, VAR_4);
  if (VAR_3)
   FUNC_1(VAR_6 + (VAR_5 - 1), sizeof(VAR_6) - (VAR_5 - 1),
     " with %d reject%s\n",
     VAR_3, VAR_3 > 1 ? "s" : "");
  FUNC_0("%s", VAR_6);
 }
}
