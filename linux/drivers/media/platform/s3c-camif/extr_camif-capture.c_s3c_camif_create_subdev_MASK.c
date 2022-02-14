
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_subdev {struct v4l2_ctrl_handler* ctrl_handler; int entity; int name; int flags; } ;
struct v4l2_ctrl_handler {int error; } ;
struct camif_dev {int ctrl_colorfx; TYPE_1__* variant; int ctrl_colorfx_cbcr; int ctrl_test_pattern; TYPE_2__* pads; struct v4l2_subdev subdev; struct v4l2_ctrl_handler ctrl_handler; } ;
struct TYPE_4__ {void* flags; } ;
struct TYPE_3__ {scalar_t__ has_img_effect; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,TYPE_2__*) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int,int *,int ,int) ;
 int FUNC_5 (struct v4l2_ctrl_handler*) ;
 int FUNC_6 (struct v4l2_ctrl_handler*,int) ;
 int FUNC_7 (struct v4l2_ctrl_handler*,int *,int ,int ,int,int,int ) ;
 int FUNC_8 (struct v4l2_ctrl_handler*,int *,int ,int ,int,int ) ;
 int FUNC_9 (struct v4l2_ctrl_handler*,int *,int ,scalar_t__,int ,int ,int ) ;
 int FUNC_10 (struct v4l2_subdev*,struct camif_dev*) ;
 int FUNC_11 (struct v4l2_subdev*,int *) ;

int FUNC_12(struct camif_dev *VAR_15)
{
 struct v4l2_ctrl_handler *VAR_16 = &VAR_15->ctrl_handler;
 struct v4l2_subdev *VAR_17 = &VAR_15->subdev;
 int VAR_18;

 FUNC_11(VAR_17, &VAR_13);
 VAR_17->flags |= VAR_11;
 FUNC_3(VAR_17->name, "S3C-CAMIF", sizeof(VAR_17->name));

 VAR_15->pads[VAR_1].flags = VAR_4;
 VAR_15->pads[VAR_2].flags = VAR_5;
 VAR_15->pads[VAR_3].flags = VAR_5;

 VAR_18 = FUNC_2(&VAR_17->entity, VAR_0,
    VAR_15->pads);
 if (VAR_18)
  return VAR_18;

 FUNC_6(VAR_16, 3);
 VAR_15->ctrl_test_pattern = FUNC_9(VAR_16,
   &VAR_12, VAR_8,
   FUNC_0(VAR_14) - 1, 0, 0,
   VAR_14);

 if (VAR_15->variant->has_img_effect) {
  VAR_15->ctrl_colorfx = FUNC_8(VAR_16,
    &VAR_12,
    VAR_6, VAR_10,
    ~0x981f, VAR_9);

  VAR_15->ctrl_colorfx_cbcr = FUNC_7(VAR_16,
    &VAR_12,
    VAR_7, 0, 0xffff, 1, 0);
 }

 if (VAR_16->error) {
  FUNC_5(VAR_16);
  FUNC_1(&VAR_17->entity);
  return VAR_16->error;
 }

 if (VAR_15->variant->has_img_effect)
  FUNC_4(2, &VAR_15->ctrl_colorfx,
          VAR_10, 0);

 VAR_17->ctrl_handler = VAR_16;
 FUNC_10(VAR_17, VAR_15);

 return 0;
}
