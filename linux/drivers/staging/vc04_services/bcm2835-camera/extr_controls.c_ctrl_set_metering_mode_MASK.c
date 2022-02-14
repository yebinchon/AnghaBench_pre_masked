
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32_value ;
typedef int u32 ;
struct vchiq_mmal_port {int dummy; } ;
struct v4l2_ctrl {int val; } ;
struct bm2835_mmal_v4l2_ctrl {int mmal_id; } ;
struct bm2835_mmal_dev {scalar_t__ scene_mode; int instance; TYPE_1__** component; int metering_mode; } ;
struct TYPE_2__ {struct vchiq_mmal_port control; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,struct vchiq_mmal_port*,int ,int *,int) ;

__attribute__((used)) static int FUNC_1(struct bm2835_mmal_dev *VAR_5,
      struct v4l2_ctrl *VAR_6,
      const struct bm2835_mmal_v4l2_ctrl *VAR_7)
{
 switch (VAR_6->val) {
 case 130:
  VAR_5->metering_mode = VAR_1;
  break;

 case 129:
  VAR_5->metering_mode = VAR_2;
  break;

 case 128:
  VAR_5->metering_mode = VAR_3;
  break;






 }

 if (VAR_5->scene_mode == VAR_4) {
  struct vchiq_mmal_port *VAR_8;
  u32 VAR_9 = VAR_5->metering_mode;

  VAR_8 = &VAR_5->component[VAR_0]->control;

  return FUNC_0(VAR_5->instance, VAR_8,
          VAR_7->mmal_id,
          &VAR_9, sizeof(VAR_9));
 } else {
  return 0;
 }
}
