
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mt9m111 {int subdev; int hdl; } ;
struct i2c_client {int dev; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (struct mt9m111*) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int ) ;
 struct mt9m111* FUNC_5 (struct i2c_client*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct i2c_client *VAR_2)
{
 struct mt9m111 *VAR_3 = FUNC_5(VAR_2);
 s32 VAR_4;
 int VAR_5;

 VAR_5 = FUNC_3(&VAR_3->subdev, 1);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_4 = FUNC_4(VAR_0);

 switch (VAR_4) {
 case 0x143a:
  FUNC_1(&VAR_2->dev,
   "Detected a MT9M111/MT9M131 chip ID %x\n", VAR_4);
  break;
 case 0x148c:
  FUNC_1(&VAR_2->dev, "Detected a MT9M112 chip ID %x\n", VAR_4);
  break;
 default:
  FUNC_0(&VAR_2->dev,
   "No MT9M111/MT9M112/MT9M131 chip detected register read %x\n",
   VAR_4);
  VAR_5 = -VAR_1;
  goto done;
 }

 VAR_5 = FUNC_2(VAR_3);
 if (VAR_5)
  goto done;

 VAR_5 = FUNC_6(&VAR_3->hdl);

done:
 FUNC_3(&VAR_3->subdev, 0);
 return VAR_5;
}
