
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ resource_size_t ;


 scalar_t__ FUNC_0 (char*,char**,int ) ;
 char* FUNC_1 (char*) ;

__attribute__((used)) static char *FUNC_2(char *VAR_0,
        unsigned long VAR_1,
        resource_size_t *VAR_2,
        resource_size_t *VAR_3,
        unsigned long *VAR_4)
{
 if (VAR_2)
  *VAR_2 = 0;
 if (VAR_3)
  *VAR_3 = 0;
 if (VAR_4)
  *VAR_4 = 0;



 VAR_0 = FUNC_1(VAR_0);
 if (VAR_2) {
  *VAR_2 = FUNC_0(VAR_0, &VAR_0, 0);
  if (VAR_3) {
   VAR_0 = FUNC_1(VAR_0);
   if (*VAR_0 == '-') {
    VAR_0 = FUNC_1(VAR_0 + 1);
    *VAR_3 = FUNC_0(VAR_0, &VAR_0, 0);
   } else
    *VAR_3 = *VAR_2;
  }
 }



 return VAR_0;
}
