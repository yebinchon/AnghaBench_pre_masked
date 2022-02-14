
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regulator_init_data {int dummy; } ;
struct da9063_regulators_pdata {int n_regulators; TYPE_1__* regulator_data; } ;
struct TYPE_2__ {int id; struct regulator_init_data const* initdata; } ;



__attribute__((used)) static const struct regulator_init_data *FUNC_0(
  const struct da9063_regulators_pdata *VAR_0, int VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->n_regulators; VAR_2++) {
  if (VAR_1 == VAR_0->regulator_data[VAR_2].id)
   return VAR_0->regulator_data[VAR_2].initdata;
 }

 return ((void*)0);
}
