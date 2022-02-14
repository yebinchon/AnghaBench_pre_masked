
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pwm_bl_data {int pwm; int power_supply; scalar_t__ enable_gpio; TYPE_1__* dev; } ;
struct device_node {int phandle; } ;
struct TYPE_2__ {struct device_node* of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(const struct pwm_bl_data *VAR_2)
{
 struct device_node *VAR_3 = VAR_2->dev->of_node;


 if (!VAR_3 || !VAR_3->phandle)
  return VAR_1;
 if (VAR_2->enable_gpio && FUNC_0(VAR_2->enable_gpio) == 0)
  return VAR_0;


 if (!FUNC_2(VAR_2->power_supply))
  return VAR_0;


 if (!FUNC_1(VAR_2->pwm))
  return VAR_0;

 return VAR_1;
}
