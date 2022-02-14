
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct armada_37xx_pmx_func {int ngroups; char const* name; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char const*,char const*) ;

__attribute__((used)) static int FUNC_1(struct armada_37xx_pmx_func *VAR_2,
        int *VAR_3, const char *VAR_4)
{
 int VAR_5 = 0;

 if (*VAR_3 <= 0)
  return -VAR_1;

 while (VAR_2->ngroups) {

  if (FUNC_0(VAR_2->name, VAR_4) == 0) {
   VAR_2->ngroups++;

   return -VAR_0;
  }
  VAR_2++;
  VAR_5++;
 }


 VAR_2->name = VAR_4;
 VAR_2->ngroups = 1;
 (*VAR_3)--;

 return 0;
}
