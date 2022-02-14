
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pinctrl_dev {int dummy; } ;
struct bcm281xx_pinctrl_data {unsigned int npins; TYPE_1__* pins; } ;
typedef enum bcm281xx_pin_type { ____Placeholder_bcm281xx_pin_type } bcm281xx_pin_type ;
struct TYPE_2__ {scalar_t__ drv_data; } ;


 int VAR_0 ;
 struct bcm281xx_pinctrl_data* FUNC_0 (struct pinctrl_dev*) ;

__attribute__((used)) static inline enum bcm281xx_pin_type FUNC_1(struct pinctrl_dev *VAR_1,
        unsigned VAR_2)
{
 struct bcm281xx_pinctrl_data *VAR_3 = FUNC_0(VAR_1);

 if (VAR_2 >= VAR_3->npins)
  return VAR_0;

 return *(enum bcm281xx_pin_type *)(VAR_3->pins[VAR_2].drv_data);
}
