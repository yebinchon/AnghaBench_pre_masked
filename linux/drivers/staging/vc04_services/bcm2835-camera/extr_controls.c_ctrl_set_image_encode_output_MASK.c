
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
struct TYPE_2__ {struct vchiq_mmal_port* output; } ;


 size_t VAR_0 ;
 int FUNC_0 (int ,struct vchiq_mmal_port*,int ,int *,int) ;

__attribute__((used)) static int FUNC_1(struct bm2835_mmal_dev *VAR_1,
     struct v4l2_ctrl *VAR_2,
     const struct bm2835_mmal_v4l2_ctrl *VAR_3)
{
 u32 VAR_4;
 struct vchiq_mmal_port *VAR_5;

 VAR_5 = &VAR_1->component[VAR_0]->output[0];

 VAR_4 = VAR_2->val;

 return FUNC_0(VAR_1->instance, VAR_5,
          VAR_3->mmal_id,
          &VAR_4, sizeof(VAR_4));
}
