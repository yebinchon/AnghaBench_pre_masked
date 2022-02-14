
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct vchiq_mmal_port {int dummy; } ;
struct v4l2_ctrl {int val; } ;
struct bm2835_mmal_v4l2_ctrl {scalar_t__ mmal_id; scalar_t__ id; } ;
struct bm2835_mmal_dev {int exposure_mode_user; int manual_shutter_speed; int exposure_mode_v4l2_user; int exp_auto_priority; scalar_t__ scene_mode; int exposure_mode_active; int instance; TYPE_1__** component; } ;
typedef int shutter_speed ;
typedef enum mmal_parameter_exposuremode { ____Placeholder_mmal_parameter_exposuremode } mmal_parameter_exposuremode ;
struct TYPE_2__ {struct vchiq_mmal_port control; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;


 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (struct bm2835_mmal_dev*) ;
 int FUNC_1 (int ,struct vchiq_mmal_port*,scalar_t__,int*,int) ;

__attribute__((used)) static int FUNC_2(struct bm2835_mmal_dev *VAR_7,
        struct v4l2_ctrl *VAR_8,
        const struct bm2835_mmal_v4l2_ctrl *VAR_9)
{
 enum mmal_parameter_exposuremode VAR_10 = VAR_7->exposure_mode_user;
 u32 VAR_11 = 0;
 struct vchiq_mmal_port *VAR_12;
 int VAR_13 = 0;

 VAR_12 = &VAR_7->component[VAR_0]->control;

 if (VAR_9->mmal_id == VAR_2) {



  VAR_7->manual_shutter_speed = VAR_8->val * 100;
 } else if (VAR_9->mmal_id == VAR_1) {
  switch (VAR_8->val) {
  case 129:
   VAR_10 = VAR_3;
   break;

  case 128:
   VAR_10 = VAR_4;
   break;
  }
  VAR_7->exposure_mode_user = VAR_10;
  VAR_7->exposure_mode_v4l2_user = VAR_8->val;
 } else if (VAR_9->id == VAR_5) {
  VAR_7->exp_auto_priority = VAR_8->val;
 }

 if (VAR_7->scene_mode == VAR_6) {
  if (VAR_10 == VAR_4)
   VAR_11 = VAR_7->manual_shutter_speed;

  VAR_13 = FUNC_1(VAR_7->instance,
          VAR_12,
          VAR_2,
          &VAR_11,
          sizeof(VAR_11));
  VAR_13 += FUNC_1(VAR_7->instance,
           VAR_12,
           VAR_1,
           &VAR_10,
           sizeof(u32));
  VAR_7->exposure_mode_active = VAR_10;
 }



 VAR_13 += FUNC_0(VAR_7);

 return VAR_13;
}
