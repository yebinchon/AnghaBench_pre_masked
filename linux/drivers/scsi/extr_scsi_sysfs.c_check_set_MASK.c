
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long long VAR_0 ;
 unsigned long long FUNC_0 (char*,char**,int ) ;
 scalar_t__ FUNC_1 (char*,char*) ;

__attribute__((used)) static int FUNC_2(unsigned long long *VAR_1, char *VAR_2)
{
 char *VAR_3;

 if (FUNC_1(VAR_2, "-") == 0) {
  *VAR_1 = VAR_0;
 } else {



  *VAR_1 = FUNC_0(VAR_2, &VAR_3, 0);
  if (*VAR_3 != '\0')
   return 1;
 }
 return 0;
}
