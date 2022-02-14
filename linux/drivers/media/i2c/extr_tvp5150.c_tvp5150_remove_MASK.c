
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dev; } ;
struct tvp5150 {int hdl; } ;
struct i2c_client {int addr; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int ,char*,int) ;
 struct v4l2_subdev* FUNC_1 (struct i2c_client*) ;
 struct tvp5150* FUNC_2 (struct v4l2_subdev*) ;
 int FUNC_3 (struct v4l2_subdev*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_1)
{
 struct v4l2_subdev *VAR_2 = FUNC_1(VAR_1);
 struct tvp5150 *VAR_3 = FUNC_2(VAR_2);

 FUNC_0(VAR_2->dev, 1, VAR_0,
  "tvp5150.c: removing tvp5150 adapter on address 0x%x\n",
  VAR_1->addr << 1);

 FUNC_3(VAR_2);
 FUNC_4(&VAR_3->hdl);
 return 0;
}
