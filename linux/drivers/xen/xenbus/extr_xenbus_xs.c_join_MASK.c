
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_1 (int,char*,char const*,...) ;
 scalar_t__ FUNC_2 (char const*) ;

__attribute__((used)) static char *FUNC_3(const char *VAR_3, const char *VAR_4)
{
 char *VAR_5;

 if (FUNC_2(VAR_4) == 0)
  VAR_5 = FUNC_1(VAR_1 | VAR_2, "%s", VAR_3);
 else
  VAR_5 = FUNC_1(VAR_1 | VAR_2, "%s/%s", VAR_3, VAR_4);
 return (!VAR_5) ? FUNC_0(-VAR_0) : VAR_5;
}
