
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regulator_dev {TYPE_1__* desc; } ;
struct TYPE_2__ {int* volt_table; unsigned int n_voltages; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;

int FUNC_1(struct regulator_dev *VAR_1,
     unsigned int VAR_2)
{
 if (!VAR_1->desc->volt_table) {
  FUNC_0(!VAR_1->desc->volt_table);
  return -VAR_0;
 }

 if (VAR_2 >= VAR_1->desc->n_voltages)
  return -VAR_0;

 return VAR_1->desc->volt_table[VAR_2];
}
