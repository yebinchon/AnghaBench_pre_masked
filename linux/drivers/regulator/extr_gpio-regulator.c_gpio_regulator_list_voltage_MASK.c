
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regulator_dev {int dummy; } ;
struct gpio_regulator_data {unsigned int nr_states; TYPE_1__* states; } ;
struct TYPE_2__ {int value; } ;


 int VAR_0 ;
 struct gpio_regulator_data* FUNC_0 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_1(struct regulator_dev *VAR_1,
          unsigned VAR_2)
{
 struct gpio_regulator_data *VAR_3 = FUNC_0(VAR_1);

 if (VAR_2 >= VAR_3->nr_states)
  return -VAR_0;

 return VAR_3->states[VAR_2].value;
}
