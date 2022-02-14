
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int error; } ;
struct TYPE_9__ {int * internal_ops; TYPE_3__* ctrl_handler; } ;
struct TYPE_8__ {int left; int top; int height; int width; } ;
struct ov6650 {int half_scale; TYPE_3__ hdl; TYPE_2__ subdev; int colorspace; int code; TYPE_1__ rect; void* autoexposure; void* autowb; void* autogain; void* exposure; void* red; void* blue; void* gain; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; } ;


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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 struct ov6650* FUNC_0 (int *,int,int ) ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int,void**,int ,int) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*,int) ;
 void* FUNC_5 (TYPE_3__*,int *,int ,int ,int,int,int) ;
 void* FUNC_6 (TYPE_3__*,int *,int ,int ,int ,int ) ;
 int FUNC_7 (TYPE_2__*,struct i2c_client*,int *) ;

__attribute__((used)) static int FUNC_8(struct i2c_client *VAR_32,
   const struct i2c_device_id *VAR_33)
{
 struct ov6650 *VAR_34;
 int VAR_35;

 VAR_34 = FUNC_0(&VAR_32->dev, sizeof(*VAR_34), VAR_8);
 if (!VAR_34)
  return -VAR_7;

 FUNC_7(&VAR_34->subdev, VAR_32, &VAR_31);
 FUNC_4(&VAR_34->hdl, 13);
 FUNC_5(&VAR_34->hdl, &VAR_29,
   VAR_24, 0, 1, 1, 0);
 FUNC_5(&VAR_34->hdl, &VAR_29,
   VAR_20, 0, 1, 1, 0);
 VAR_34->autogain = FUNC_5(&VAR_34->hdl, &VAR_29,
   VAR_12, 0, 1, 1, 1);
 VAR_34->gain = FUNC_5(&VAR_34->hdl, &VAR_29,
   VAR_18, 0, 0x3f, 1, VAR_2);
 VAR_34->autowb = FUNC_5(&VAR_34->hdl, &VAR_29,
   VAR_13, 0, 1, 1, 1);
 VAR_34->blue = FUNC_5(&VAR_34->hdl, &VAR_29,
   VAR_14, 0, 0xff, 1, VAR_1);
 VAR_34->red = FUNC_5(&VAR_34->hdl, &VAR_29,
   VAR_22, 0, 0xff, 1, VAR_5);
 FUNC_5(&VAR_34->hdl, &VAR_29,
   VAR_23, 0, 0xf, 1, 0x8);
 FUNC_5(&VAR_34->hdl, &VAR_29,
   VAR_21, 0, VAR_9, 1, VAR_4);
 FUNC_5(&VAR_34->hdl, &VAR_29,
   VAR_15, 0, 0xff, 1, 0x80);
 VAR_34->autoexposure = FUNC_6(&VAR_34->hdl,
   &VAR_29, VAR_17,
   VAR_27, 0, VAR_26);
 VAR_34->exposure = FUNC_5(&VAR_34->hdl, &VAR_29,
   VAR_16, 0, 0xff, 1, VAR_0);
 FUNC_5(&VAR_34->hdl, &VAR_29,
   VAR_19, 0, 0xff, 1, 0x12);

 VAR_34->subdev.ctrl_handler = &VAR_34->hdl;
 if (VAR_34->hdl.error)
  return VAR_34->hdl.error;

 FUNC_2(2, &VAR_34->autogain, 0, 1);
 FUNC_2(3, &VAR_34->autowb, 0, 1);
 FUNC_2(2, &VAR_34->autoexposure,
    VAR_27, 1);

 VAR_34->rect.left = VAR_3 << 1;
 VAR_34->rect.top = VAR_6 << 1;
 VAR_34->rect.width = VAR_28;
 VAR_34->rect.height = VAR_10;
 VAR_34->half_scale = 0;
 VAR_34->code = VAR_11;
 VAR_34->colorspace = VAR_25;

 VAR_34->subdev.internal_ops = &VAR_30;

 VAR_35 = FUNC_1(&VAR_34->subdev);
 if (VAR_35)
  FUNC_3(&VAR_34->hdl);

 return VAR_35;
}
