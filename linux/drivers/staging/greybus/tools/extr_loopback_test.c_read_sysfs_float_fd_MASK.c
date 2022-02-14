
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 int VAR_0 ;
 int FUNC_0 () ;
 float FUNC_1 (char*) ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 int FUNC_3 (int ,char*,char const*,char const*,int ) ;
 scalar_t__ FUNC_4 (int,char*,int) ;
 int VAR_2 ;
 int FUNC_5 (int ) ;

float FUNC_6(int VAR_3, const char *VAR_4, const char *VAR_5)
{
 char VAR_6[VAR_0];

 if (FUNC_4(VAR_3, VAR_6, sizeof(VAR_6)) < 0) {

  FUNC_3(VAR_2, "unable to read from %s%s %d\n", VAR_4, VAR_5,
   FUNC_5(VAR_1));
  FUNC_2(VAR_3);
  FUNC_0();
 }
 return FUNC_1(VAR_6);
}
