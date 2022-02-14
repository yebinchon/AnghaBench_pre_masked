
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regulator_dev {int dummy; } ;
struct gpio_regulator_data {int nr_states; int nr_gpios; int state; int * gpiods; TYPE_1__* states; } ;
struct TYPE_2__ {int value; int gpios; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 struct gpio_regulator_data* FUNC_1 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_2(struct regulator_dev *VAR_2,
     int VAR_3, int VAR_4,
     unsigned *VAR_5)
{
 struct gpio_regulator_data *VAR_6 = FUNC_1(VAR_2);
 int VAR_7, VAR_8 = 0, VAR_9, VAR_10 = VAR_1;

 for (VAR_7 = 0; VAR_7 < VAR_6->nr_states; VAR_7++)
  if (VAR_6->states[VAR_7].value < VAR_10 &&
      VAR_6->states[VAR_7].value >= VAR_3 &&
      VAR_6->states[VAR_7].value <= VAR_4) {
   VAR_8 = VAR_6->states[VAR_7].gpios;
   VAR_10 = VAR_6->states[VAR_7].value;
   if (VAR_5)
    *VAR_5 = VAR_7;
  }

 if (VAR_10 == VAR_1)
  return -VAR_0;

 for (VAR_7 = 0; VAR_7 < VAR_6->nr_gpios; VAR_7++) {
  VAR_9 = (VAR_8 & (1 << VAR_7)) >> VAR_7;
  FUNC_0(VAR_6->gpiods[VAR_7], VAR_9);
 }
 VAR_6->state = VAR_8;

 return 0;
}
