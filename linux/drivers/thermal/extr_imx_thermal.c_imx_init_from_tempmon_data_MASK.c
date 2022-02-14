
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct regmap {int dummy; } ;
struct TYPE_2__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;


 scalar_t__ FUNC_0 (struct regmap*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct regmap*) ;
 int FUNC_2 (TYPE_1__*,char*,int) ;
 int FUNC_3 (struct platform_device*,int ) ;
 int FUNC_4 (struct platform_device*,int ) ;
 int FUNC_5 (struct regmap*,int ,int *) ;
 struct regmap* FUNC_6 (int ,char*) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_2)
{
 struct regmap *VAR_3;
 int VAR_4;
 u32 VAR_5;

 VAR_3 = FUNC_6(VAR_2->dev.of_node,
           "fsl,tempmon-data");
 if (FUNC_0(VAR_3)) {
  VAR_4 = FUNC_1(VAR_3);
  FUNC_2(&VAR_2->dev, "failed to get sensor regmap: %d\n", VAR_4);
  return VAR_4;
 }

 VAR_4 = FUNC_5(VAR_3, VAR_0, &VAR_5);
 if (VAR_4) {
  FUNC_2(&VAR_2->dev, "failed to read sensor data: %d\n", VAR_4);
  return VAR_4;
 }
 VAR_4 = FUNC_3(VAR_2, VAR_5);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_5(VAR_3, VAR_1, &VAR_5);
 if (VAR_4) {
  FUNC_2(&VAR_2->dev, "failed to read sensor data: %d\n", VAR_4);
  return VAR_4;
 }
 FUNC_4(VAR_2, VAR_5);

 return 0;
}
