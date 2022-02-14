
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct ov5647 {int power_count; int lock; int xclk; } ;
struct i2c_client {int dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct v4l2_subdev*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct v4l2_subdev*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_10 (struct v4l2_subdev*,int) ;
 struct ov5647* FUNC_11 (struct v4l2_subdev*) ;
 struct i2c_client* FUNC_12 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_13(struct v4l2_subdev *VAR_2, int VAR_3)
{
 int VAR_4 = 0;
 struct ov5647 *VAR_5 = FUNC_11(VAR_2);
 struct i2c_client *VAR_6 = FUNC_12(VAR_2);

 FUNC_7(&VAR_5->lock);

 if (VAR_3 && !VAR_5->power_count) {
  FUNC_5(&VAR_6->dev, "OV5647 power on\n");

  VAR_4 = FUNC_4(VAR_5->xclk);
  if (VAR_4 < 0) {
   FUNC_6(&VAR_6->dev, "clk prepare enable failed\n");
   goto out;
  }

  VAR_4 = FUNC_9(VAR_2, VAR_1,
    FUNC_0(VAR_1));
  if (VAR_4 < 0) {
   FUNC_3(VAR_5->xclk);
   FUNC_6(&VAR_6->dev,
    "write sensor_oe_enable_regs error\n");
   goto out;
  }

  VAR_4 = FUNC_2(VAR_2);
  if (VAR_4 < 0) {
   FUNC_3(VAR_5->xclk);
   FUNC_6(&VAR_6->dev,
    "Camera not available, check Power\n");
   goto out;
  }
 } else if (!VAR_3 && VAR_5->power_count == 1) {
  FUNC_5(&VAR_6->dev, "OV5647 power off\n");

  VAR_4 = FUNC_9(VAR_2, VAR_0,
    FUNC_0(VAR_0));

  if (VAR_4 < 0)
   FUNC_5(&VAR_6->dev, "disable oe failed\n");

  VAR_4 = FUNC_10(VAR_2, 1);

  if (VAR_4 < 0)
   FUNC_5(&VAR_6->dev, "soft stby failed\n");

  FUNC_3(VAR_5->xclk);
 }


 VAR_5->power_count += VAR_3 ? 1 : -1;
 FUNC_1(VAR_5->power_count < 0);

out:
 FUNC_8(&VAR_5->lock);

 return VAR_4;
}
