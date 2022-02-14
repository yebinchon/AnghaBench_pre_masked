
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tsens_sensor {char offset; } ;
struct tsens_priv {int num_sensors; int dev; struct tsens_sensor* sensor; } ;
typedef int ssize_t ;


 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (int ,char*) ;

__attribute__((used)) static int FUNC_4(struct tsens_priv *VAR_0)
{
 int VAR_1;
 char *VAR_2;

 ssize_t VAR_3 = VAR_0->num_sensors;
 struct tsens_sensor *VAR_4 = VAR_0->sensor;

 VAR_2 = FUNC_3(VAR_0->dev, "calib");
 if (FUNC_0(VAR_2))
  VAR_2 = FUNC_3(VAR_0->dev, "calib_backup");
 if (FUNC_0(VAR_2))
  return FUNC_1(VAR_2);

 for (VAR_1 = 0; VAR_1 < VAR_3; VAR_1++, VAR_4++)
  VAR_4->offset = VAR_2[VAR_1];

 FUNC_2(VAR_2);

 return 0;
}
