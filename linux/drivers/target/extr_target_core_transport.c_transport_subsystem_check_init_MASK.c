
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*) ;

void FUNC_3(void)
{
 int VAR_4;
 static int VAR_5;

 if (VAR_5)
  return;

 VAR_4 = FUNC_0(VAR_1) && FUNC_2("target_core_iblock");
 if (VAR_4 != 0)
  FUNC_1("Unable to load target_core_iblock\n");

 VAR_4 = FUNC_0(VAR_0) && FUNC_2("target_core_file");
 if (VAR_4 != 0)
  FUNC_1("Unable to load target_core_file\n");

 VAR_4 = FUNC_0(VAR_2) && FUNC_2("target_core_pscsi");
 if (VAR_4 != 0)
  FUNC_1("Unable to load target_core_pscsi\n");

 VAR_4 = FUNC_0(VAR_3) && FUNC_2("target_core_user");
 if (VAR_4 != 0)
  FUNC_1("Unable to load target_core_user\n");

 VAR_5 = 1;
}
