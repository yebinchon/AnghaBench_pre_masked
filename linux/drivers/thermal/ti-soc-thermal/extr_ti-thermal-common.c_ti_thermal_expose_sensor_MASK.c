
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_thermal_data {int polling_delay; struct ti_thermal_data* ti_thermal; int sensor_id; } ;
struct ti_bandgap {int dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ti_thermal_data*) ;
 int FUNC_1 (struct ti_thermal_data*) ;
 int FUNC_2 (int ,char*) ;
 struct ti_thermal_data* FUNC_3 (int ,int,struct ti_thermal_data*,int *) ;
 struct ti_thermal_data* FUNC_4 (struct ti_bandgap*,int) ;
 int FUNC_5 (struct ti_bandgap*,int,struct ti_thermal_data*) ;
 int FUNC_6 (struct ti_bandgap*,int ,int ) ;
 int VAR_1 ;
 struct ti_thermal_data* FUNC_7 (struct ti_bandgap*,int) ;

int FUNC_8(struct ti_bandgap *VAR_2, int VAR_3,
        char *VAR_4)
{
 struct ti_thermal_data *VAR_5;

 VAR_5 = FUNC_4(VAR_2, VAR_3);

 if (!VAR_5 || FUNC_0(VAR_5))
  VAR_5 = FUNC_7(VAR_2, VAR_3);

 if (!VAR_5)
  return -VAR_0;


 VAR_5->ti_thermal = FUNC_3(VAR_2->dev, VAR_3,
     VAR_5, &VAR_1);
 if (FUNC_0(VAR_5->ti_thermal)) {
  FUNC_2(VAR_2->dev, "thermal zone device is NULL\n");
  return FUNC_1(VAR_5->ti_thermal);
 }

 FUNC_5(VAR_2, VAR_3, VAR_5);
 FUNC_6(VAR_2, VAR_5->sensor_id,
     VAR_5->ti_thermal->polling_delay);

 return 0;
}
