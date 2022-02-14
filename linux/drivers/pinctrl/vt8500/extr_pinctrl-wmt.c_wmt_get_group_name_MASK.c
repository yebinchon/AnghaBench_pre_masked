
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wmt_pinctrl_data {char const** groups; } ;
struct pinctrl_dev {int dummy; } ;


 struct wmt_pinctrl_data* FUNC_0 (struct pinctrl_dev*) ;

__attribute__((used)) static const char *FUNC_1(struct pinctrl_dev *VAR_0,
          unsigned VAR_1)
{
 struct wmt_pinctrl_data *VAR_2 = FUNC_0(VAR_0);

 return VAR_2->groups[VAR_1];
}
