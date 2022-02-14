
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct v4l2_ctrl_ops {int dummy; } ;
struct v4l2_ctrl_handler {int error; } ;
struct s5c73m3_ctrls {void* focus_auto; TYPE_1__* af_status; TYPE_3__* auto_iso; TYPE_3__* auto_exposure; void* aaa_lock; void* scene_mode; void* jpeg_quality; void* stabilization; void* wdr; void* colorfx; void* zoom; void* sharpness; void* saturation; void* contrast; void* iso; void* af_distance; void* af_stop; void* af_start; void* exposure_metering; void* exposure_bias; void* auto_wb; struct v4l2_ctrl_handler handler; } ;
struct TYPE_5__ {struct v4l2_ctrl_handler* ctrl_handler; } ;
struct s5c73m3 {TYPE_2__ sensor_sd; struct s5c73m3_ctrls ctrls; } ;
struct TYPE_6__ {int flags; } ;
struct TYPE_4__ {int flags; } ;


 int FUNC_0 (int ) ;
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
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 struct v4l2_ctrl_ops VAR_41 ;
 int FUNC_1 (int,TYPE_3__**,int ,int) ;
 int FUNC_2 (int,void**) ;
 int FUNC_3 (struct v4l2_ctrl_handler*) ;
 int FUNC_4 (struct v4l2_ctrl_handler*,int) ;
 void* FUNC_5 (struct v4l2_ctrl_handler*,struct v4l2_ctrl_ops const*,int ,int,int,int ) ;
 void* FUNC_6 (struct v4l2_ctrl_handler*,struct v4l2_ctrl_ops const*,int ,int,int,int,int) ;
 void* FUNC_7 (struct v4l2_ctrl_handler*,struct v4l2_ctrl_ops const*,int ,int,int,int) ;

int FUNC_8(struct s5c73m3 *VAR_42)
{
 const struct v4l2_ctrl_ops *VAR_43 = &VAR_41;
 struct s5c73m3_ctrls *VAR_44 = &VAR_42->ctrls;
 struct v4l2_ctrl_handler *VAR_45 = &VAR_44->handler;

 int VAR_46 = FUNC_4(VAR_45, 22);
 if (VAR_46)
  return VAR_46;


 VAR_44->auto_wb = FUNC_7(VAR_45, VAR_43,
   VAR_12,
   9, ~0x15e, VAR_38);


 VAR_44->auto_exposure = FUNC_7(VAR_45, VAR_43,
   VAR_15, 0, ~0x01, VAR_33);

 VAR_44->exposure_bias = FUNC_5(VAR_45, VAR_43,
   VAR_7,
   FUNC_0(VAR_39) - 1,
   FUNC_0(VAR_39)/2 - 1,
   VAR_39);

 VAR_44->exposure_metering = FUNC_7(VAR_45, VAR_43,
   VAR_16,
   2, ~0x7, VAR_34);


 VAR_44->focus_auto = FUNC_6(VAR_45, VAR_43,
   VAR_17, 0, 1, 1, 0);

 VAR_44->af_start = FUNC_6(VAR_45, VAR_43,
   VAR_9, 0, 1, 1, 0);

 VAR_44->af_stop = FUNC_6(VAR_45, VAR_43,
   VAR_11, 0, 1, 1, 0);

 VAR_44->af_status = FUNC_6(VAR_45, VAR_43,
   VAR_10, 0,
   (VAR_2 |
    VAR_5 |
    VAR_3),
   0, VAR_4);

 VAR_44->af_distance = FUNC_7(VAR_45, VAR_43,
   VAR_8,
   VAR_0,
   ~(1 << VAR_1 |
     1 << VAR_0),
   VAR_1);

 VAR_44->auto_iso = FUNC_7(VAR_45, VAR_43,
   VAR_20, 1, 0,
   VAR_35);

 VAR_44->iso = FUNC_5(VAR_45, VAR_43,
   VAR_19, FUNC_0(VAR_40) - 1,
   FUNC_0(VAR_40)/2 - 1, VAR_40);

 VAR_44->contrast = FUNC_6(VAR_45, VAR_43,
   VAR_14, -2, 2, 1, 0);

 VAR_44->saturation = FUNC_6(VAR_45, VAR_43,
   VAR_24, -2, 2, 1, 0);

 VAR_44->sharpness = FUNC_6(VAR_45, VAR_43,
   VAR_26, -2, 2, 1, 0);

 VAR_44->zoom = FUNC_6(VAR_45, VAR_43,
   VAR_28, 0, 30, 1, 0);

 VAR_44->colorfx = FUNC_7(VAR_45, VAR_43, VAR_13,
   VAR_29, ~0x40f, VAR_30);

 VAR_44->wdr = FUNC_6(VAR_45, VAR_43,
   VAR_27, 0, 1, 1, 0);

 VAR_44->stabilization = FUNC_6(VAR_45, VAR_43,
   VAR_18, 0, 1, 1, 0);

 FUNC_7(VAR_45, VAR_43, VAR_22,
          VAR_23, 0,
          VAR_23);

 VAR_44->jpeg_quality = FUNC_6(VAR_45, VAR_43,
   VAR_21, 1, 100, 1, 80);

 VAR_44->scene_mode = FUNC_7(VAR_45, VAR_43,
   VAR_25, VAR_37, ~0x3fff,
   VAR_36);

 VAR_44->aaa_lock = FUNC_6(VAR_45, VAR_43,
   VAR_6, 0, 0x7, 0, 0);

 if (VAR_45->error) {
  VAR_46 = VAR_45->error;
  FUNC_3(VAR_45);
  return VAR_46;
 }

 FUNC_1(3, &VAR_44->auto_exposure, 0, 0);
 VAR_44->auto_iso->flags |= VAR_32 |
    VAR_31;
 FUNC_1(2, &VAR_44->auto_iso, 0, 0);
 VAR_44->af_status->flags |= VAR_32;
 FUNC_2(6, &VAR_44->focus_auto);

 VAR_42->sensor_sd.ctrl_handler = VAR_45;

 return 0;
}
