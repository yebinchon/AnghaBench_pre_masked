
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct v4l2_subdev {int dummy; } ;
struct ov6650 {int clk; int hdl; } ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int *,char*,scalar_t__,...) ;
 int FUNC_3 (int *,char*,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct i2c_client*) ;
 int FUNC_6 (struct i2c_client*,int ,scalar_t__*) ;
 int FUNC_7 (struct i2c_client*) ;
 int FUNC_8 (struct v4l2_subdev*,int) ;
 struct ov6650* FUNC_9 (struct i2c_client*) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int *) ;
 struct i2c_client* FUNC_13 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_14(struct v4l2_subdev *VAR_7)
{
 struct i2c_client *VAR_8 = FUNC_13(VAR_7);
 struct ov6650 *VAR_9 = FUNC_9(VAR_8);
 u8 VAR_10, VAR_11, VAR_12, VAR_13;
 int VAR_14;

 VAR_9->clk = FUNC_10(&VAR_8->dev, ((void*)0));
 if (FUNC_0(VAR_9->clk)) {
  VAR_14 = FUNC_1(VAR_9->clk);
  FUNC_2(&VAR_8->dev, "v4l2_clk request err: %d\n", VAR_14);
  return VAR_14;
 }

 VAR_14 = FUNC_8(VAR_7, 1);
 if (VAR_14 < 0)
  goto eclkput;

 FUNC_4(20);




 VAR_14 = FUNC_6(VAR_8, VAR_5, &VAR_10);
 if (!VAR_14)
  VAR_14 = FUNC_6(VAR_8, VAR_6, &VAR_11);
 if (!VAR_14)
  VAR_14 = FUNC_6(VAR_8, VAR_3, &VAR_12);
 if (!VAR_14)
  VAR_14 = FUNC_6(VAR_8, VAR_4, &VAR_13);

 if (VAR_14)
  goto done;

 if ((VAR_10 != VAR_1) || (VAR_11 != VAR_2)) {
  FUNC_2(&VAR_8->dev, "Product ID error 0x%02x:0x%02x\n",
    VAR_10, VAR_11);
  VAR_14 = -VAR_0;
  goto done;
 }

 FUNC_3(&VAR_8->dev,
  "ov6650 Product ID 0x%02x:0x%02x Manufacturer ID 0x%02x:0x%02x\n",
  VAR_10, VAR_11, VAR_12, VAR_13);

 VAR_14 = FUNC_7(VAR_8);
 if (!VAR_14)
  VAR_14 = FUNC_5(VAR_8);
 if (!VAR_14)
  VAR_14 = FUNC_12(&VAR_9->hdl);

done:
 FUNC_8(VAR_7, 0);
 if (!VAR_14)
  return 0;
eclkput:
 FUNC_11(VAR_9->clk);

 return VAR_14;
}
