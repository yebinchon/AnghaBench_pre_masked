
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_subdev {struct v4l2_ctrl_handler* ctrl_handler; } ;
struct v4l2_ctrl_handler {int error; } ;
struct sr030pc30_platform_data {int dummy; } ;
struct sr030pc30_info {int i2c_reg_page; int hflip; void* autoexp; void* awb; void* exp; void* blue; void* red; struct v4l2_ctrl_handler hdl; struct sr030pc30_platform_data* pdata; struct v4l2_subdev sd; } ;
struct i2c_device_id {int dummy; } ;
struct TYPE_3__ {struct sr030pc30_platform_data* platform_data; } ;
struct i2c_client {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 struct sr030pc30_info* FUNC_1 (TYPE_1__*,int,int ) ;
 int VAR_11 ;
 int FUNC_2 (struct i2c_client*) ;
 int VAR_12 ;
 int FUNC_3 (int,void**,int ,int) ;
 int FUNC_4 (struct v4l2_ctrl_handler*) ;
 int FUNC_5 (struct v4l2_ctrl_handler*,int) ;
 int FUNC_6 (struct v4l2_ctrl_handler*) ;
 void* FUNC_7 (struct v4l2_ctrl_handler*,int *,int ,int ,int,int,int) ;
 int FUNC_8 (struct v4l2_subdev*,struct i2c_client*,int *) ;

__attribute__((used)) static int FUNC_9(struct i2c_client *VAR_13,
      const struct i2c_device_id *VAR_14)
{
 struct sr030pc30_info *VAR_15;
 struct v4l2_subdev *VAR_16;
 struct v4l2_ctrl_handler *VAR_17;
 const struct sr030pc30_platform_data *VAR_18
  = VAR_13->dev.platform_data;
 int VAR_19;

 if (!VAR_18) {
  FUNC_0(&VAR_13->dev, "No platform data!");
  return -VAR_0;
 }

 VAR_19 = FUNC_2(VAR_13);
 if (VAR_19)
  return VAR_19;

 VAR_15 = FUNC_1(&VAR_13->dev, sizeof(*VAR_15), VAR_4);
 if (!VAR_15)
  return -VAR_1;

 VAR_16 = &VAR_15->sd;
 VAR_15->pdata = VAR_13->dev.platform_data;

 FUNC_8(VAR_16, VAR_13, &VAR_12);

 VAR_17 = &VAR_15->hdl;
 FUNC_5(VAR_17, 6);
 VAR_15->awb = FUNC_7(VAR_17, &VAR_11,
   VAR_5, 0, 1, 1, 1);
 VAR_15->red = FUNC_7(VAR_17, &VAR_11,
   VAR_9, 0, 127, 1, 64);
 VAR_15->blue = FUNC_7(VAR_17, &VAR_11,
   VAR_6, 0, 127, 1, 64);
 VAR_15->autoexp = FUNC_7(VAR_17, &VAR_11,
   VAR_8, 0, 1, 1, 1);
 VAR_15->exp = FUNC_7(VAR_17, &VAR_11,
   VAR_7, VAR_3, VAR_2, 1, 30);
 VAR_16->ctrl_handler = VAR_17;
 if (VAR_17->error) {
  int VAR_20 = VAR_17->error;

  FUNC_4(VAR_17);
  return VAR_20;
 }
 FUNC_3(3, &VAR_15->awb, 0, 0);
 FUNC_3(2, &VAR_15->autoexp, VAR_10, 0);
 FUNC_6(VAR_17);

 VAR_15->i2c_reg_page = -1;
 VAR_15->hflip = 1;

 return 0;
}
