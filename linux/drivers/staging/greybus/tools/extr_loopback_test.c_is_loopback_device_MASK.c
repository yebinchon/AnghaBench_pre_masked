
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,int,char*,char const*,char const*) ;

int FUNC_2(const char *VAR_2, const char *VAR_3)
{
 char VAR_4[VAR_1];

 FUNC_1(VAR_4, VAR_1, "%s%s/iteration_count", VAR_2, VAR_3);
 if (FUNC_0(VAR_4, VAR_0) == 0)
  return 1;
 return 0;
}
