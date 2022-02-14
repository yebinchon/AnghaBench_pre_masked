
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct armada_thermal_data {int hyst_mask; } ;


 int FUNC_0 (unsigned int*) ;
 unsigned int* VAR_0 ;

__attribute__((used)) static unsigned int FUNC_1(struct armada_thermal_data *VAR_1,
       unsigned int VAR_2)
{
 int VAR_3;






 for (VAR_3 = FUNC_0(VAR_0) - 1; VAR_3 > 0; VAR_3--)
  if (VAR_2 >= VAR_0[VAR_3])
   break;

 return VAR_3 & VAR_1->hyst_mask;
}
