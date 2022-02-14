
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mvebu_pinctrl_function {int num_groups; char const* name; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char const*,char const*) ;

__attribute__((used)) static int FUNC_1(struct mvebu_pinctrl_function *VAR_2, int *VAR_3,
   const char *VAR_4)
{
 if (*VAR_3 <= 0)
  return -VAR_1;

 while (VAR_2->num_groups) {

  if (FUNC_0(VAR_2->name, VAR_4) == 0) {
   VAR_2->num_groups++;
   return -VAR_0;
  }
  VAR_2++;
 }


 VAR_2->name = VAR_4;
 VAR_2->num_groups = 1;
 (*VAR_3)--;

 return 0;
}
