
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct act8865_regulator_data {int id; } ;
struct act8865_platform_data {int num_regulators; struct act8865_regulator_data* regulators; } ;



__attribute__((used)) static struct act8865_regulator_data *FUNC_0(
  int VAR_0, struct act8865_platform_data *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->num_regulators; VAR_2++) {
  if (VAR_1->regulators[VAR_2].id == VAR_0)
   return &VAR_1->regulators[VAR_2];
 }

 return ((void*)0);
}
