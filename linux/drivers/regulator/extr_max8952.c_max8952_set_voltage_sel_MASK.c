
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_dev {int dummy; } ;
struct max8952_data {unsigned int vid0; unsigned int vid1; int vid1_gpiod; int vid0_gpiod; } ;


 int VAR_0 ;
 int FUNC_0 (int ,unsigned int) ;
 struct max8952_data* FUNC_1 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_2(struct regulator_dev *VAR_1,
       unsigned VAR_2)
{
 struct max8952_data *VAR_3 = FUNC_1(VAR_1);

 if (!VAR_3->vid0_gpiod || !VAR_3->vid1_gpiod) {

  return -VAR_0;
 }

 VAR_3->vid0 = VAR_2 & 0x1;
 VAR_3->vid1 = (VAR_2 >> 1) & 0x1;
 FUNC_0(VAR_3->vid0_gpiod, VAR_3->vid0);
 FUNC_0(VAR_3->vid1_gpiod, VAR_3->vid1);

 return 0;
}
