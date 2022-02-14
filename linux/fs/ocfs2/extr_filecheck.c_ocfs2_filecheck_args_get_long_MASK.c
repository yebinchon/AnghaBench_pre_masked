
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,int ,unsigned long*) ;
 int FUNC_1 (char*,char const*,size_t) ;

__attribute__((used)) static int
FUNC_2(const char *VAR_1, size_t VAR_2,
         unsigned long *VAR_3)
{
 char VAR_4[VAR_0];

 FUNC_1(VAR_4, VAR_1, VAR_2);
 VAR_4[VAR_2] = '\0';

 if (FUNC_0(VAR_4, 0, VAR_3))
  return 1;

 return 0;
}
