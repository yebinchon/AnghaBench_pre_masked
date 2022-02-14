
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int path ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (char*,int,char*,char const*,char const*) ;
 int VAR_1 ;

int FUNC_4(const char *VAR_2, const char *VAR_3, int VAR_4)
{
 int VAR_5;
 char VAR_6[VAR_0];

 FUNC_3(VAR_6, sizeof(VAR_6), "%s%s", VAR_2, VAR_3);
 VAR_5 = FUNC_2(VAR_6, VAR_4);
 if (VAR_5 < 0) {
  FUNC_1(VAR_1, "unable to open %s\n", VAR_6);
  FUNC_0();
 }
 return VAR_5;
}
