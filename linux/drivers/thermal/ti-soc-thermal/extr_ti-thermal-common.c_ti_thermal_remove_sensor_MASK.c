
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_thermal_data {scalar_t__ ti_thermal; scalar_t__ our_zone; } ;
struct ti_bandgap {int dummy; } ;


 int FUNC_0 (scalar_t__) ;
 struct ti_thermal_data* FUNC_1 (struct ti_bandgap*,int) ;

int FUNC_2(struct ti_bandgap *VAR_0, int VAR_1)
{
 struct ti_thermal_data *VAR_2;

 VAR_2 = FUNC_1(VAR_0, VAR_1);

 if (VAR_2 && VAR_2->ti_thermal) {
  if (VAR_2->our_zone)
   FUNC_0(VAR_2->ti_thermal);
 }

 return 0;
}
