
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt2880_priv {unsigned int group_count; char const** group_names; } ;
struct pinctrl_dev {int dummy; } ;


 struct rt2880_priv* FUNC_0 (struct pinctrl_dev*) ;

__attribute__((used)) static const char *FUNC_1(struct pinctrl_dev *VAR_0,
      unsigned int VAR_1)
{
 struct rt2880_priv *VAR_2 = FUNC_0(VAR_0);

 return (VAR_1 >= VAR_2->group_count) ? ((void*)0) : VAR_2->group_names[VAR_1];
}
