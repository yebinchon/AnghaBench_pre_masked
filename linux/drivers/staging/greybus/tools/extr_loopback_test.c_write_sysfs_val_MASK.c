
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int FUNC_2 (int ,char*,char const*,char const*,int ) ;
 int FUNC_3 (char const*,char const*,int ) ;
 int FUNC_4 (char*,int,char*,int) ;
 int VAR_3 ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int,char*,int) ;

void FUNC_7(const char *VAR_4, const char *VAR_5, int VAR_6)
{
 int VAR_7, VAR_8;
 char VAR_9[VAR_1];

 VAR_7 = FUNC_3(VAR_4, VAR_5, VAR_0);
 VAR_8 = FUNC_4(VAR_9, sizeof(VAR_9), "%d", VAR_6);
 if (FUNC_6(VAR_7, VAR_9, VAR_8) < 0) {
  FUNC_2(VAR_3, "unable to write to %s%s %d\n", VAR_4, VAR_5,
   FUNC_5(VAR_2));
  FUNC_1(VAR_7);
  FUNC_0();
 }
 FUNC_1(VAR_7);
}
