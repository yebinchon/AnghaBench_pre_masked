
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;
struct platform_device {int dev; } ;
struct of_device_id {int data; } ;
typedef enum vexpress_reset_func { ____Placeholder_vexpress_reset_func } vexpress_reset_func ;


 int VAR_0 ;



 scalar_t__ FUNC_0 (struct regmap*) ;
 int FUNC_1 (struct regmap*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,struct regmap*) ;
 struct regmap* FUNC_4 (int *) ;
 struct of_device_id* FUNC_5 (int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_6)
{
 const struct of_device_id *VAR_7 =
   FUNC_5(VAR_4, &VAR_6->dev);
 struct regmap *VAR_8;
 int VAR_9 = 0;

 if (!VAR_7)
  return -VAR_0;

 VAR_8 = FUNC_4(&VAR_6->dev);
 if (FUNC_0(VAR_8))
  return FUNC_1(VAR_8);
 FUNC_3(&VAR_6->dev, VAR_8);

 switch ((enum vexpress_reset_func)VAR_7->data) {
 case 128:
  VAR_3 = &VAR_6->dev;
  VAR_1 = VAR_2;
  break;
 case 129:
  if (!VAR_5)
   VAR_9 = FUNC_2(&VAR_6->dev);
  break;
 case 130:
  VAR_9 = FUNC_2(&VAR_6->dev);
  break;
 };

 return VAR_9;
}
