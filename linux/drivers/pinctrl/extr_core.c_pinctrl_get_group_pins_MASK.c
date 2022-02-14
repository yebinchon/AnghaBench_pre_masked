
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pinctrl_ops {int (* get_group_pins ) (struct pinctrl_dev*,int,unsigned int const**,unsigned int*) ;} ;
struct pinctrl_dev {TYPE_1__* desc; } ;
struct TYPE_2__ {struct pinctrl_ops* pctlops; } ;


 int VAR_0 ;
 int FUNC_0 (struct pinctrl_dev*,char const*) ;
 int FUNC_1 (struct pinctrl_dev*,int,unsigned int const**,unsigned int*) ;

int FUNC_2(struct pinctrl_dev *VAR_1, const char *VAR_2,
    const unsigned **VAR_3, unsigned *VAR_4)
{
 const struct pinctrl_ops *VAR_5 = VAR_1->desc->pctlops;
 int VAR_6;

 if (!VAR_5->get_group_pins)
  return -VAR_0;

 VAR_6 = FUNC_0(VAR_1, VAR_2);
 if (VAR_6 < 0)
  return VAR_6;

 return VAR_5->get_group_pins(VAR_1, VAR_6, VAR_3, VAR_4);
}
