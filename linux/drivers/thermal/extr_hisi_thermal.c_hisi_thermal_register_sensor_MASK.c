
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thermal_trip {scalar_t__ type; int temperature; } ;
struct platform_device {int dev; } ;
struct hisi_thermal_sensor {int thres_temp; int * tzd; int id; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int *,char*,int ,int) ;
 int * FUNC_3 (int *,int ,struct hisi_thermal_sensor*,int *) ;
 int VAR_1 ;
 int FUNC_4 (int *) ;
 struct thermal_trip* FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_2,
     struct hisi_thermal_sensor *VAR_3)
{
 int VAR_4, VAR_5;
 const struct thermal_trip *VAR_6;

 VAR_3->tzd = FUNC_3(&VAR_2->dev,
          VAR_3->id, VAR_3,
          &VAR_1);
 if (FUNC_0(VAR_3->tzd)) {
  VAR_4 = FUNC_1(VAR_3->tzd);
  VAR_3->tzd = ((void*)0);
  FUNC_2(&VAR_2->dev, "failed to register sensor id %d: %d\n",
   VAR_3->id, VAR_4);
  return VAR_4;
 }

 VAR_6 = FUNC_5(VAR_3->tzd);

 for (VAR_5 = 0; VAR_5 < FUNC_4(VAR_3->tzd); VAR_5++) {
  if (VAR_6[VAR_5].type == VAR_0) {
   VAR_3->thres_temp = VAR_6[VAR_5].temperature;
   break;
  }
 }

 return 0;
}
