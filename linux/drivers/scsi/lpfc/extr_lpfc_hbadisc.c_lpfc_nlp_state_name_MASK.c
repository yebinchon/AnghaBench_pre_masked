
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;






 int FUNC_0 (char*,size_t,char*,int) ;
 int FUNC_1 (char*,char*,size_t) ;

__attribute__((used)) static char *
FUNC_2(char *VAR_1, size_t VAR_2, int VAR_3)
{
 static char *VAR_4[] = {
  [128] = "UNUSED",
  [132] = "PLOGI",
  [136] = "ADISC",
  [130] = "REGLOGIN",
  [131] = "PRLI",
  [135] = "LOGO",
  [129] = "UNMAPPED",
  [134] = "MAPPED",
  [133] = "NPR",
 };

 if (VAR_3 < VAR_0 && VAR_4[VAR_3])
  FUNC_1(VAR_1, VAR_4[VAR_3], VAR_2);
 else
  FUNC_0(VAR_1, VAR_2, "unknown (%d)", VAR_3);
 return VAR_1;
}
