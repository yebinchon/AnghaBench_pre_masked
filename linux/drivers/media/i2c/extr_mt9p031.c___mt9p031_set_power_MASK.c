
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mt9p031 {int ctrls; int subdev; } ;
struct i2c_client {int dev; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct mt9p031*) ;
 int FUNC_2 (struct mt9p031*) ;
 int FUNC_3 (struct mt9p031*) ;
 int FUNC_4 (int *) ;
 struct i2c_client* FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct mt9p031 *VAR_0, bool VAR_1)
{
 struct i2c_client *VAR_2 = FUNC_5(&VAR_0->subdev);
 int VAR_3;

 if (!VAR_1) {
  FUNC_1(VAR_0);
  return 0;
 }

 VAR_3 = FUNC_2(VAR_0);
 if (VAR_3 < 0)
  return VAR_3;

 VAR_3 = FUNC_3(VAR_0);
 if (VAR_3 < 0) {
  FUNC_0(&VAR_2->dev, "Failed to reset the camera\n");
  return VAR_3;
 }

 return FUNC_4(&VAR_0->ctrls);
}
