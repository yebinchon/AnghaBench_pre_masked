
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct hisi_thermal_sensor {int dummy; } ;
struct hisi_thermal_data {int nr_sensors; TYPE_1__* ops; struct hisi_thermal_sensor* sensor; } ;
struct TYPE_2__ {int (* disable_sensor ) (struct hisi_thermal_sensor*) ;} ;


 int FUNC_0 (struct hisi_thermal_sensor*,int) ;
 struct hisi_thermal_data* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (struct hisi_thermal_sensor*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_0)
{
 struct hisi_thermal_data *VAR_1 = FUNC_1(VAR_0);
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->nr_sensors; VAR_2++) {
  struct hisi_thermal_sensor *VAR_3 = &VAR_1->sensor[VAR_2];

  FUNC_0(VAR_3, 0);
  VAR_1->ops->disable_sensor(VAR_3);
 }

 return 0;
}
