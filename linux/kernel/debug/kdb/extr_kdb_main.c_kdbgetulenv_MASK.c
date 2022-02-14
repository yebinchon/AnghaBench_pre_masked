
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (char const*) ;
 unsigned long FUNC_1 (char*,int *,int ) ;
 scalar_t__ FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(const char *VAR_2, unsigned long *VAR_3)
{
 char *VAR_4;

 VAR_4 = FUNC_0(VAR_2);
 if (!VAR_4)
  return VAR_1;
 if (FUNC_2(VAR_4) == 0)
  return VAR_0;

 *VAR_3 = FUNC_1(VAR_4, ((void*)0), 0);

 return 0;
}
