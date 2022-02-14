
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_enable_gpio {int enable_count; int gpiod; } ;
struct regulator_dev {struct regulator_enable_gpio* ena_pin; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;

__attribute__((used)) static int FUNC_1(struct regulator_dev *VAR_1, bool VAR_2)
{
 struct regulator_enable_gpio *VAR_3 = VAR_1->ena_pin;

 if (!VAR_3)
  return -VAR_0;

 if (VAR_2) {

  if (VAR_3->enable_count == 0)
   FUNC_0(VAR_3->gpiod, 1);

  VAR_3->enable_count++;
 } else {
  if (VAR_3->enable_count > 1) {
   VAR_3->enable_count--;
   return 0;
  }


  if (VAR_3->enable_count <= 1) {
   FUNC_0(VAR_3->gpiod, 0);
   VAR_3->enable_count = 0;
  }
 }

 return 0;
}
