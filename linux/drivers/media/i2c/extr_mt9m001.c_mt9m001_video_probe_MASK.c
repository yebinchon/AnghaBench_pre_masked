
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mt9m001 {int hdl; int * fmts; int * fmt; void* num_fmts; } ;
struct i2c_client {int dev; } ;
typedef int s32 ;


 void* FUNC_0 (void*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int *,char*,int,char*) ;
 void* VAR_3 ;
 int FUNC_4 (struct i2c_client*) ;
 void* VAR_4 ;
 int FUNC_5 (struct i2c_client*,int ) ;
 int FUNC_6 (struct i2c_client*,int ,int) ;
 struct mt9m001* FUNC_7 (struct i2c_client*) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct i2c_client *VAR_5)
{
 struct mt9m001 *VAR_6 = FUNC_7(VAR_5);
 s32 VAR_7;
 int VAR_8;


 VAR_7 = FUNC_6(VAR_5, VAR_1, 1);
 FUNC_1(&VAR_5->dev, "write: %d\n", VAR_7);


 VAR_7 = FUNC_5(VAR_5, VAR_2);


 switch (VAR_7) {
 case 0x8411:
 case 0x8421:
  VAR_6->fmts = VAR_3;
  VAR_6->num_fmts = FUNC_0(VAR_3);
  break;
 case 0x8431:
  VAR_6->fmts = VAR_4;
  VAR_6->num_fmts = FUNC_0(VAR_4);
  break;
 default:
  FUNC_2(&VAR_5->dev,
   "No MT9M001 chip detected, register read %x\n", VAR_7);
  VAR_8 = -VAR_0;
  goto done;
 }

 VAR_6->fmt = &VAR_6->fmts[0];

 FUNC_3(&VAR_5->dev, "Detected a MT9M001 chip ID %x (%s)\n", VAR_7,
   VAR_7 == 0x8431 ? "C12STM" : "C12ST");

 VAR_8 = FUNC_4(VAR_5);
 if (VAR_8 < 0) {
  FUNC_2(&VAR_5->dev, "Failed to initialise the camera\n");
  goto done;
 }


 VAR_8 = FUNC_8(&VAR_6->hdl);

done:
 return VAR_8;
}
