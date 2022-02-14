
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sprd_pinctrl_soc_info {TYPE_1__* groups; } ;
struct sprd_pinctrl {struct sprd_pinctrl_soc_info* info; } ;
struct pinctrl_dev {int dummy; } ;
struct TYPE_2__ {char const* name; } ;


 struct sprd_pinctrl* FUNC_0 (struct pinctrl_dev*) ;

__attribute__((used)) static const char *FUNC_1(struct pinctrl_dev *VAR_0,
      unsigned int VAR_1)
{
 struct sprd_pinctrl *VAR_2 = FUNC_0(VAR_0);
 struct sprd_pinctrl_soc_info *VAR_3 = VAR_2->info;

 return VAR_3->groups[VAR_1].name;
}
