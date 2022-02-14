
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regulator_init_data {int dummy; } ;
struct lp872x_platform_data {TYPE_1__* regulator_data; } ;
struct lp872x {int num_regulators; struct lp872x_platform_data* pdata; } ;
struct TYPE_2__ {int id; struct regulator_init_data* init_data; } ;



__attribute__((used)) static struct regulator_init_data
*FUNC_0(int VAR_0, struct lp872x *VAR_1)
{
 struct lp872x_platform_data *VAR_2 = VAR_1->pdata;
 int VAR_3;

 if (!VAR_2)
  return ((void*)0);

 for (VAR_3 = 0; VAR_3 < VAR_1->num_regulators; VAR_3++) {
  if (VAR_2->regulator_data[VAR_3].id == VAR_0)
   return VAR_2->regulator_data[VAR_3].init_data;
 }

 return ((void*)0);
}
