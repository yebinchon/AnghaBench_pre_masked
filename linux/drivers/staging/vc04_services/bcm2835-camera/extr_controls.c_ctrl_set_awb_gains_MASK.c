
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vchiq_mmal_port {int dummy; } ;
struct v4l2_ctrl {scalar_t__ id; int val; } ;
struct TYPE_6__ {int den; int num; } ;
struct TYPE_5__ {int den; int num; } ;
struct mmal_parameter_awbgains {TYPE_3__ b_gain; TYPE_2__ r_gain; } ;
struct bm2835_mmal_v4l2_ctrl {int mmal_id; } ;
struct bm2835_mmal_dev {int instance; int blue_gain; int red_gain; TYPE_1__** component; } ;
typedef int gains ;
struct TYPE_4__ {struct vchiq_mmal_port control; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,struct vchiq_mmal_port*,int ,struct mmal_parameter_awbgains*,int) ;

__attribute__((used)) static int FUNC_1(struct bm2835_mmal_dev *VAR_3,
         struct v4l2_ctrl *VAR_4,
         const struct bm2835_mmal_v4l2_ctrl *VAR_5)
{
 struct vchiq_mmal_port *VAR_6;
 struct mmal_parameter_awbgains VAR_7;

 VAR_6 = &VAR_3->component[VAR_0]->control;

 if (VAR_4->id == VAR_2)
  VAR_3->red_gain = VAR_4->val;
 else if (VAR_4->id == VAR_1)
  VAR_3->blue_gain = VAR_4->val;

 VAR_7.r_gain.num = VAR_3->red_gain;
 VAR_7.b_gain.num = VAR_3->blue_gain;
 VAR_7.r_gain.den = VAR_7.b_gain.den = 1000;

 return FUNC_0(VAR_3->instance, VAR_6,
          VAR_5->mmal_id,
          &VAR_7, sizeof(VAR_7));
}
