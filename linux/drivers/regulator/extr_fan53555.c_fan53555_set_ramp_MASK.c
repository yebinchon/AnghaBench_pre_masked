
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_dev {int regmap; } ;
struct fan53555_device_info {int dev; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char*,int) ;
 struct fan53555_device_info* FUNC_2 (struct regulator_dev*) ;
 int FUNC_3 (int ,int ,int ,int) ;
 int* VAR_4 ;

__attribute__((used)) static int FUNC_4(struct regulator_dev *VAR_5, int VAR_6)
{
 struct fan53555_device_info *VAR_7 = FUNC_2(VAR_5);
 int VAR_8 = -1, VAR_9;

 for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_4); VAR_9++) {
  if (VAR_6 <= VAR_4[VAR_9])
   VAR_8 = VAR_9;
  else
   break;
 }

 if (VAR_8 < 0) {
  FUNC_1(VAR_7->dev, "unsupported ramp value %d\n", VAR_6);
  return -VAR_2;
 }

 return FUNC_3(VAR_5->regmap, VAR_3,
      VAR_0, VAR_8 << VAR_1);
}
