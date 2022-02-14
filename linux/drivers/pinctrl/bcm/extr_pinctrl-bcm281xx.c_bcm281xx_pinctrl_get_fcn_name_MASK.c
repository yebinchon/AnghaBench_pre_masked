
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pinctrl_dev {int dummy; } ;
struct bcm281xx_pinctrl_data {TYPE_1__* functions; } ;
struct TYPE_2__ {char const* name; } ;


 struct bcm281xx_pinctrl_data* FUNC_0 (struct pinctrl_dev*) ;

__attribute__((used)) static const char *FUNC_1(struct pinctrl_dev *VAR_0,
       unsigned VAR_1)
{
 struct bcm281xx_pinctrl_data *VAR_2 = FUNC_0(VAR_0);

 return VAR_2->functions[VAR_1].name;
}
