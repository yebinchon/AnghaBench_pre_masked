
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct v4l2_ctrl_handler {int error; } ;
struct v4l2_ctrl_config {char* name; int step; int def; int max; int min; int type; int id; int * ops; } ;
struct TYPE_8__ {int device_caps; int * v4l2_dev; struct v4l2_ctrl_handler* ctrl_handler; int * lock; } ;
struct TYPE_6__ {scalar_t__ device_type; int product; } ;
struct TYPE_7__ {TYPE_1__ pnp_id; } ;
struct camera_data {TYPE_3__ vdev; int v4l2_dev; int v4l2_lock; void* top_light; void* bottom_light; TYPE_2__ params; int usb_alt; struct v4l2_ctrl_handler hdl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;
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
 TYPE_3__ VAR_27 ;
 int FUNC_1 (struct camera_data*) ;
 int FUNC_2 (int,void**) ;
 int FUNC_3 (struct v4l2_ctrl_handler*) ;
 int FUNC_4 (struct v4l2_ctrl_handler*,int) ;
 int FUNC_5 (struct v4l2_ctrl_handler*,struct v4l2_ctrl_config*,int *) ;
 void* FUNC_6 (struct v4l2_ctrl_handler*,int *,int ,int,int,int,int) ;
 int FUNC_7 (struct v4l2_ctrl_handler*,int *,int ,int ,int ,int ) ;
 int VAR_28 ;
 scalar_t__ FUNC_8 (TYPE_3__*,int ,int ) ;
 int FUNC_9 (TYPE_3__*,struct camera_data*) ;

int FUNC_10(struct camera_data *VAR_29)
{
 struct v4l2_ctrl_handler *VAR_30 = &VAR_29->hdl;
 struct v4l2_ctrl_config VAR_31 = {
  .ops = &VAR_26,
  .id = VAR_0,
  .name = "USB Alternate",
  .type = VAR_22,
  .min = VAR_6,
  .max = VAR_7,
  .step = 1,
 };
 int VAR_32;

 FUNC_4(VAR_30, 12);
 FUNC_6(VAR_30, &VAR_26,
   VAR_11,
   VAR_29->params.pnp_id.device_type == VAR_4 ? 1 : 0,
   255, 1, VAR_1);
 FUNC_6(VAR_30, &VAR_26,
   VAR_12, 0, 255, 1, VAR_2);
 FUNC_6(VAR_30, &VAR_26,
   VAR_20, 0, 255, 1, VAR_3);
 FUNC_6(VAR_30, &VAR_26,
   VAR_13, 0, 1, 1, 0);
 FUNC_6(VAR_30, &VAR_26,
   VAR_16, 0,
   VAR_23, 0,
   VAR_23);
 FUNC_6(VAR_30, &VAR_26,
   VAR_17, 1,
   100, 1, 100);
 VAR_31.def = VAR_25;
 VAR_29->usb_alt = FUNC_5(VAR_30, &VAR_31, ((void*)0));

 if (VAR_29->params.pnp_id.device_type != VAR_4)
  FUNC_6(VAR_30, &VAR_26,
   VAR_21, 0, 1, 1, 0);

 if (VAR_29->params.pnp_id.device_type == VAR_4)
  FUNC_7(VAR_30, &VAR_26,
   VAR_18,
   VAR_19, 0, 0);

 if (VAR_29->params.pnp_id.product == 0x151) {
  VAR_29->top_light = FUNC_6(VAR_30, &VAR_26,
    VAR_14, 0, 1, 1, 0);
  VAR_29->bottom_light = FUNC_6(VAR_30, &VAR_26,
    VAR_15, 0, 1, 1, 0);
  FUNC_2(2, &VAR_29->top_light);
 }

 if (VAR_30->error) {
  VAR_32 = VAR_30->error;
  FUNC_3(VAR_30);
  return VAR_32;
 }

 VAR_29->vdev = VAR_27;
 FUNC_9(&VAR_29->vdev, VAR_29);
 VAR_29->vdev.lock = &VAR_29->v4l2_lock;
 VAR_29->vdev.ctrl_handler = VAR_30;
 VAR_29->vdev.v4l2_dev = &VAR_29->v4l2_dev;
 VAR_29->vdev.device_caps = VAR_10 | VAR_8 |
    VAR_9;

 FUNC_1(VAR_29);


 if (FUNC_8(&VAR_29->vdev, VAR_24, VAR_28) < 0) {
  FUNC_0("video_register_device failed\n");
  return -VAR_5;
 }

 return 0;
}
