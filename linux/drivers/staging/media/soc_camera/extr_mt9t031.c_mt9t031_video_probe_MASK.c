
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mt9t031 {int subdev; int hdl; } ;
struct i2c_client {int dev; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (struct i2c_client*) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (struct i2c_client*,int ) ;
 struct mt9t031* FUNC_5 (struct i2c_client*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct i2c_client *VAR_2)
{
 struct mt9t031 *VAR_3 = FUNC_5(VAR_2);
 s32 VAR_4;
 int VAR_5;

 VAR_5 = FUNC_3(&VAR_3->subdev, 1);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_5 = FUNC_2(VAR_2);
 if (VAR_5 < 0) {
  FUNC_0(&VAR_2->dev, "Failed to initialise the camera\n");
  goto done;
 }


 VAR_4 = FUNC_4(VAR_2, VAR_1);

 switch (VAR_4) {
 case 0x1621:
  break;
 default:
  FUNC_0(&VAR_2->dev,
   "No MT9T031 chip detected, register read %x\n", VAR_4);
  VAR_5 = -VAR_0;
  goto done;
 }

 FUNC_1(&VAR_2->dev, "Detected a MT9T031 chip ID %x\n", VAR_4);

 VAR_5 = FUNC_6(&VAR_3->hdl);

done:
 FUNC_3(&VAR_3->subdev, 0);

 return VAR_5;
}
