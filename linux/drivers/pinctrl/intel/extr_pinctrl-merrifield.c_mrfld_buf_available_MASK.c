
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mrfld_pinctrl {int dummy; } ;
struct mrfld_family {int protected; } ;


 struct mrfld_family* FUNC_0 (struct mrfld_pinctrl*,unsigned int) ;

__attribute__((used)) static bool FUNC_1(struct mrfld_pinctrl *VAR_0, unsigned int VAR_1)
{
 const struct mrfld_family *VAR_2;

 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (!VAR_2)
  return 0;

 return !VAR_2->protected;
}
