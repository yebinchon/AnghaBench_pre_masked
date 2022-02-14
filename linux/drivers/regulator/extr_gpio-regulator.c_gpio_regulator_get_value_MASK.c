
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regulator_dev {int dummy; } ;
struct gpio_regulator_data {int nr_states; scalar_t__ state; TYPE_1__* states; } ;
struct TYPE_2__ {scalar_t__ gpios; int value; } ;


 int VAR_0 ;
 struct gpio_regulator_data* FUNC_0 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_1(struct regulator_dev *VAR_1)
{
 struct gpio_regulator_data *VAR_2 = FUNC_0(VAR_1);
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2->nr_states; VAR_3++)
  if (VAR_2->states[VAR_3].gpios == VAR_2->state)
   return VAR_2->states[VAR_3].value;

 return -VAR_0;
}
