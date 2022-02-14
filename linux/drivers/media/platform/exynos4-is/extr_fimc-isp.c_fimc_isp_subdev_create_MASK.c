
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * ops; int function; } ;
struct v4l2_subdev {TYPE_1__ entity; int * internal_ops; struct v4l2_ctrl_handler* ctrl_handler; int name; int flags; int grp_id; int owner; } ;
struct v4l2_ctrl_ops {int dummy; } ;
struct v4l2_ctrl_handler {int error; } ;
struct fimc_isp_ctrls {void* auto_iso; void* colorfx; void* aewb_lock; int iso; void* exp_metering; void* exposure; void* auto_wb; void* hue; void* sharpness; void* contrast; void* brightness; void* saturation; struct v4l2_ctrl_handler handler; } ;
struct fimc_isp {TYPE_2__* subdev_pads; int subdev_lock; struct fimc_isp_ctrls ctrls; struct v4l2_subdev subdev; } ;
struct TYPE_5__ {void* flags; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
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
 int VAR_29 ;
 int FUNC_1 (struct fimc_isp*) ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 struct v4l2_ctrl_ops VAR_33 ;
 int VAR_34 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ,TYPE_2__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int,char*) ;
 int FUNC_6 (int,void**,int ,int) ;
 int FUNC_7 (struct v4l2_ctrl_handler*,int) ;
 int FUNC_8 (struct v4l2_ctrl_handler*,struct v4l2_ctrl_ops const*,int ,int,int,int ) ;
 void* FUNC_9 (struct v4l2_ctrl_handler*,struct v4l2_ctrl_ops const*,int ,int,int,int,int ) ;
 void* FUNC_10 (struct v4l2_ctrl_handler*,struct v4l2_ctrl_ops const*,int ,int,int,int) ;
 int FUNC_11 (struct v4l2_subdev*,struct fimc_isp*) ;
 int FUNC_12 (struct v4l2_subdev*,int *) ;

int FUNC_13(struct fimc_isp *VAR_35)
{
 const struct v4l2_ctrl_ops *VAR_36 = &VAR_33;
 struct v4l2_ctrl_handler *VAR_37 = &VAR_35->ctrls.handler;
 struct v4l2_subdev *VAR_38 = &VAR_35->subdev;
 struct fimc_isp_ctrls *VAR_39 = &VAR_35->ctrls;
 int VAR_40;

 FUNC_4(&VAR_35->subdev_lock);

 FUNC_12(VAR_38, &VAR_32);

 VAR_38->owner = VAR_8;
 VAR_38->grp_id = VAR_4;
 VAR_38->flags |= VAR_28;
 FUNC_5(VAR_38->name, sizeof(VAR_38->name), "FIMC-IS-ISP");

 VAR_38->entity.function = VAR_5;
 VAR_35->subdev_pads[VAR_1].flags = VAR_6;
 VAR_35->subdev_pads[VAR_3].flags = VAR_7;
 VAR_35->subdev_pads[VAR_2].flags = VAR_7;
 VAR_40 = FUNC_3(&VAR_38->entity, VAR_0,
    VAR_35->subdev_pads);
 if (VAR_40)
  return VAR_40;

 FUNC_7(VAR_37, 20);

 VAR_39->saturation = FUNC_9(VAR_37, VAR_36, VAR_21,
      -2, 2, 1, 0);
 VAR_39->brightness = FUNC_9(VAR_37, VAR_36, VAR_11,
      -4, 4, 1, 0);
 VAR_39->contrast = FUNC_9(VAR_37, VAR_36, VAR_13,
      -2, 2, 1, 0);
 VAR_39->sharpness = FUNC_9(VAR_37, VAR_36, VAR_22,
      -2, 2, 1, 0);
 VAR_39->hue = FUNC_9(VAR_37, VAR_36, VAR_16,
      -2, 2, 1, 0);

 VAR_39->auto_wb = FUNC_10(VAR_37, VAR_36,
     VAR_10,
     8, ~0x14e, VAR_29);

 VAR_39->exposure = FUNC_9(VAR_37, VAR_36,
     VAR_14,
     -4, 4, 1, 0);

 VAR_39->exp_metering = FUNC_10(VAR_37, VAR_36,
     VAR_15, 3,
     ~0xf, VAR_25);

 FUNC_10(VAR_37, VAR_36, VAR_19,
     VAR_20, 0,
     VAR_20);

 VAR_39->auto_iso = FUNC_10(VAR_37, VAR_36,
   VAR_18, 1, 0,
   VAR_26);

 VAR_39->iso = FUNC_8(VAR_37, VAR_36,
   VAR_17, FUNC_0(VAR_34) - 1,
   FUNC_0(VAR_34)/2 - 1, VAR_34);

 VAR_39->aewb_lock = FUNC_9(VAR_37, VAR_36,
     VAR_9, 0, 0x3, 0, 0);


 VAR_39->colorfx = FUNC_10(VAR_37, VAR_36, VAR_12,
   VAR_24 + 1, ~0x1000f, VAR_23);

 if (VAR_37->error) {
  FUNC_2(&VAR_38->entity);
  return VAR_37->error;
 }

 FUNC_6(2, &VAR_39->auto_iso,
   VAR_27, 0);

 VAR_38->ctrl_handler = VAR_37;
 VAR_38->internal_ops = &VAR_30;
 VAR_38->entity.ops = &VAR_31;
 FUNC_11(VAR_38, VAR_35);

 FUNC_1(VAR_35);

 return 0;
}
