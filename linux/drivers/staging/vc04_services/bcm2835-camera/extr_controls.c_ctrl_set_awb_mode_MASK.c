
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
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ,struct vchiq_mmal_port*,int ,int *,int) ;

__attribute__((used)) static int FUNC_1(struct bm2835_mmal_dev *VAR_11,
        struct v4l2_ctrl *VAR_12,
        const struct bm2835_mmal_v4l2_ctrl *VAR_13)
{
 u32 VAR_14;
 struct vchiq_mmal_port *VAR_15;

 VAR_15 = &VAR_11->component[VAR_0]->control;

 switch (VAR_12->val) {
 case 129:
  VAR_14 = VAR_7;
  break;

 case 137:
  VAR_14 = VAR_1;
  break;

 case 130:
  VAR_14 = VAR_6;
  break;

 case 133:
  VAR_14 = VAR_4;
  break;

 case 132:
  VAR_14 = VAR_10;
  break;

 case 131:
  VAR_14 = VAR_5;
  break;

 case 135:
  VAR_14 = VAR_9;
  break;

 case 134:
  VAR_14 = VAR_3;
  break;

 case 136:
  VAR_14 = VAR_2;
  break;

 case 128:
  VAR_14 = VAR_8;
  break;
 }

 return FUNC_0(VAR_11->instance, VAR_15,
          VAR_13->mmal_id,
          &VAR_14, sizeof(VAR_14));
}
