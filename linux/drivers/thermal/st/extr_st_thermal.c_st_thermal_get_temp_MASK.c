
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thermal_zone_device {struct st_thermal_sensor* devdata; } ;
struct st_thermal_sensor {TYPE_1__* cdata; int temp_data; int overflow; struct device* dev; } ;
struct device {int dummy; } ;
struct TYPE_2__ {scalar_t__ temp_adjust_val; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,unsigned int) ;
 unsigned int FUNC_1 (unsigned int) ;
 int FUNC_2 (int ,unsigned int*) ;

__attribute__((used)) static int FUNC_3(struct thermal_zone_device *VAR_1, int *VAR_2)
{
 struct st_thermal_sensor *VAR_3 = VAR_1->devdata;
 struct device *VAR_4 = VAR_3->dev;
 unsigned int VAR_5;
 unsigned int VAR_6;
 int VAR_7;

 VAR_7 = FUNC_2(VAR_3->overflow, &VAR_6);
 if (VAR_7)
  return VAR_7;
 if (VAR_6)
  return -VAR_0;

 VAR_7 = FUNC_2(VAR_3->temp_data, &VAR_5);
 if (VAR_7)
  return VAR_7;

 VAR_5 += VAR_3->cdata->temp_adjust_val;
 VAR_5 = FUNC_1(VAR_5);

 FUNC_0(VAR_4, "temperature: %d\n", VAR_5);

 *VAR_2 = VAR_5;

 return 0;
}
