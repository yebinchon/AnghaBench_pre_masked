
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_bulk_data {char* supply; } ;



void FUNC_0(struct regulator_bulk_data *VAR_0,
         const char *const *VAR_1,
         unsigned int VAR_2)
{
 unsigned int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
  VAR_0[VAR_3].supply = VAR_1[VAR_3];
}
