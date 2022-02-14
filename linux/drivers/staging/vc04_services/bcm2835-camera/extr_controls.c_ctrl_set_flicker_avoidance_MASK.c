
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
struct bm2835_mmal_dev {int instance; TYPE_1__** component; } ;
struct TYPE_2__ {struct vchiq_mmal_port control; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;




 int FUNC_0 (int ,struct vchiq_mmal_port*,int ,int *,int) ;

__attribute__((used)) static int FUNC_1(struct bm2835_mmal_dev *VAR_5,
          struct v4l2_ctrl *VAR_6,
          const struct bm2835_mmal_v4l2_ctrl *VAR_7)
{
 u32 VAR_8;
 struct vchiq_mmal_port *VAR_9;

 VAR_9 = &VAR_5->component[VAR_0]->control;

 switch (VAR_6->val) {
 case 128:
  VAR_8 = VAR_4;
  break;
 case 131:
  VAR_8 = VAR_1;
  break;
 case 130:
  VAR_8 = VAR_2;
  break;
 case 129:
  VAR_8 = VAR_3;
  break;
 }

 return FUNC_0(VAR_5->instance, VAR_9,
          VAR_7->mmal_id,
          &VAR_8, sizeof(VAR_8));
}
