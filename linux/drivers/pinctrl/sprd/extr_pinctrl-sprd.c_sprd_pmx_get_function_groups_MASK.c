
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sprd_pinctrl_soc_info {char** grp_names; unsigned int ngroups; } ;
struct sprd_pinctrl {struct sprd_pinctrl_soc_info* info; } ;
struct pinctrl_dev {int dummy; } ;


 struct sprd_pinctrl* FUNC_0 (struct pinctrl_dev*) ;

__attribute__((used)) static int FUNC_1(struct pinctrl_dev *VAR_0,
     unsigned int VAR_1,
     const char * const **VAR_2,
     unsigned int * const VAR_3)
{
 struct sprd_pinctrl *VAR_4 = FUNC_0(VAR_0);
 struct sprd_pinctrl_soc_info *VAR_5 = VAR_4->info;

 *VAR_2 = VAR_5->grp_names;
 *VAR_3 = VAR_5->ngroups;

 return 0;
}
