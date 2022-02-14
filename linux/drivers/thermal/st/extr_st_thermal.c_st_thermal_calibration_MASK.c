
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct st_thermal_sensor {TYPE_1__* cdata; int dcorrect; struct device* dev; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int calibration_val; } ;


 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (int ,unsigned int*) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct st_thermal_sensor *VAR_0)
{
 int VAR_1;
 unsigned int VAR_2;
 struct device *VAR_3 = VAR_0->dev;


 VAR_1 = FUNC_1(VAR_0->dcorrect, &VAR_2);
 if (VAR_1) {
  FUNC_0(VAR_3, "failed to read calibration data\n");
  return VAR_1;
 }

 if (!VAR_2) {




  VAR_1 = FUNC_2(VAR_0->dcorrect,
      VAR_0->cdata->calibration_val);
  if (VAR_1)
   FUNC_0(VAR_3, "failed to set calibration data\n");
 }

 return VAR_1;
}
