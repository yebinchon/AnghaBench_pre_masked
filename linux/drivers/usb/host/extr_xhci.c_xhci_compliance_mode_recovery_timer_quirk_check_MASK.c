
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (char const*,char*) ;

__attribute__((used)) static bool FUNC_2(void)
{
 const char *VAR_2, *VAR_3;

 VAR_2 = FUNC_0(VAR_0);
 VAR_3 = FUNC_0(VAR_1);
 if (!VAR_2 || !VAR_3)
  return 0;

 if (!(FUNC_1(VAR_3, "Hewlett-Packard")))
  return 0;

 if (FUNC_1(VAR_2, "Z420") ||
   FUNC_1(VAR_2, "Z620") ||
   FUNC_1(VAR_2, "Z820") ||
   FUNC_1(VAR_2, "Z1 Workstation"))
  return 1;

 return 0;
}
