
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regulator_dev {int dummy; } ;
struct gpio_regulator_data {int nr_states; int nr_gpios; int state; int * gpiods; TYPE_1__* states; } ;
struct TYPE_2__ {int value; int gpios; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 struct gpio_regulator_data* FUNC_1 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_2(struct regulator_dev *VAR_1,
     int VAR_2, int VAR_3)
{
 struct gpio_regulator_data *VAR_4 = FUNC_1(VAR_1);
 int VAR_5, VAR_6 = 0, VAR_7, VAR_8 = 0;

 for (VAR_5 = 0; VAR_5 < VAR_4->nr_states; VAR_5++)
  if (VAR_4->states[VAR_5].value > VAR_8 &&
      VAR_4->states[VAR_5].value >= VAR_2 &&
      VAR_4->states[VAR_5].value <= VAR_3) {
   VAR_6 = VAR_4->states[VAR_5].gpios;
   VAR_8 = VAR_4->states[VAR_5].value;
  }

 if (VAR_8 == 0)
  return -VAR_0;

 for (VAR_5 = 0; VAR_5 < VAR_4->nr_gpios; VAR_5++) {
  VAR_7 = (VAR_6 & (1 << VAR_5)) >> VAR_5;
  FUNC_0(VAR_4->gpiods[VAR_5], VAR_7);
 }
 VAR_4->state = VAR_6;

 return 0;
}
