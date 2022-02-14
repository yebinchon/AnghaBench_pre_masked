
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct vchiq_mmal_port {int dummy; } ;
struct v4l2_ctrl {int val; } ;
struct bm2835_mmal_v4l2_ctrl {int mmal_id; } ;
struct TYPE_4__ {int encode_bitrate_mode; } ;
struct bm2835_mmal_dev {int instance; TYPE_2__ capture; TYPE_1__** component; } ;
typedef int bitrate_mode ;
struct TYPE_3__ {struct vchiq_mmal_port* output; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int FUNC_0 (int ,struct vchiq_mmal_port*,int ,int *,int) ;

__attribute__((used)) static int FUNC_1(struct bm2835_mmal_dev *VAR_3,
     struct v4l2_ctrl *VAR_4,
     const struct bm2835_mmal_v4l2_ctrl *VAR_5)
{
 u32 VAR_6;
 struct vchiq_mmal_port *VAR_7;

 VAR_7 = &VAR_3->component[VAR_0]->output[0];

 VAR_3->capture.encode_bitrate_mode = VAR_4->val;
 switch (VAR_4->val) {
 default:
 case 128:
  VAR_6 = VAR_2;
  break;
 case 129:
  VAR_6 = VAR_1;
  break;
 }

 FUNC_0(VAR_3->instance, VAR_7,
          VAR_5->mmal_id,
          &VAR_6,
          sizeof(VAR_6));
 return 0;
}
