
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_ctrl {scalar_t__ id; int val; } ;
struct mmal_parameter_video_profile {int level; int profile; } ;
struct bm2835_mmal_v4l2_ctrl {int mmal_id; } ;
struct TYPE_3__ {int enc_profile; int enc_level; } ;
struct bm2835_mmal_dev {TYPE_2__** component; int instance; TYPE_1__ capture; } ;
typedef int param ;
struct TYPE_4__ {int * output; } ;


 size_t VAR_0 ;
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
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 int FUNC_0 (int ,int *,int ,struct mmal_parameter_video_profile*,int) ;

__attribute__((used)) static int FUNC_1(struct bm2835_mmal_dev *VAR_20,
            struct v4l2_ctrl *VAR_21,
            const struct bm2835_mmal_v4l2_ctrl *VAR_22)
{
 struct mmal_parameter_video_profile VAR_23;
 int VAR_24 = 0;

 if (VAR_21->id == VAR_19) {
  switch (VAR_21->val) {
  case 131:
  case 130:
  case 128:
  case 129:
   VAR_20->capture.enc_profile = VAR_21->val;
   break;
  default:
   VAR_24 = -VAR_1;
   break;
  }
 } else if (VAR_21->id == VAR_18) {
  switch (VAR_21->val) {
  case 142:
  case 143:
  case 141:
  case 140:
  case 139:
  case 138:
  case 137:
  case 136:
  case 135:
  case 134:
  case 133:
  case 132:
   VAR_20->capture.enc_level = VAR_21->val;
   break;
  default:
   VAR_24 = -VAR_1;
   break;
  }
 }

 if (!VAR_24) {
  switch (VAR_20->capture.enc_profile) {
  case 131:
   VAR_23.profile = VAR_14;
   break;
  case 130:
   VAR_23.profile =
    VAR_15;
   break;
  case 128:
   VAR_23.profile = VAR_17;
   break;
  case 129:
   VAR_23.profile = VAR_16;
   break;
  default:

   break;
  }

  switch (VAR_20->capture.enc_level) {
  case 142:
   VAR_23.level = VAR_2;
   break;
  case 143:
   VAR_23.level = VAR_6;
   break;
  case 141:
   VAR_23.level = VAR_3;
   break;
  case 140:
   VAR_23.level = VAR_4;
   break;
  case 139:
   VAR_23.level = VAR_5;
   break;
  case 138:
   VAR_23.level = VAR_7;
   break;
  case 137:
   VAR_23.level = VAR_8;
   break;
  case 136:
   VAR_23.level = VAR_9;
   break;
  case 135:
   VAR_23.level = VAR_10;
   break;
  case 134:
   VAR_23.level = VAR_11;
   break;
  case 133:
   VAR_23.level = VAR_12;
   break;
  case 132:
   VAR_23.level = VAR_13;
   break;
  default:

   break;
  }

  VAR_24 = FUNC_0(VAR_20->instance,
          &VAR_20->component[VAR_0]->output[0],
   VAR_22->mmal_id,
   &VAR_23, sizeof(VAR_23));
 }
 return VAR_24;
}
