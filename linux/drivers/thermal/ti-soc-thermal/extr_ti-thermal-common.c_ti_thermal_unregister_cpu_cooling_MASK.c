
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_thermal_data {scalar_t__ policy; int cool_dev; } ;
struct ti_bandgap {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 struct ti_thermal_data* FUNC_2 (struct ti_bandgap*,int) ;

int FUNC_3(struct ti_bandgap *VAR_0, int VAR_1)
{
 struct ti_thermal_data *VAR_2;

 VAR_2 = FUNC_2(VAR_0, VAR_1);

 if (VAR_2) {
  FUNC_0(VAR_2->cool_dev);
  if (VAR_2->policy)
   FUNC_1(VAR_2->policy);
 }

 return 0;
}
