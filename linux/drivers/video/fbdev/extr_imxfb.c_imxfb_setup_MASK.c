
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,char**) ;
 char* VAR_1 ;
 char* FUNC_1 (char**,char*) ;

__attribute__((used)) static int FUNC_2(void)
{
 char *VAR_2, *VAR_3 = ((void*)0);

 if (FUNC_0("imxfb", &VAR_3))
  return -VAR_0;

 if (!VAR_3 || !*VAR_3)
  return 0;

 while ((VAR_2 = FUNC_1(&VAR_3, ",")) != ((void*)0)) {
  if (!*VAR_2)
   continue;
  else
   VAR_1 = VAR_2;
 }

 return 0;
}
