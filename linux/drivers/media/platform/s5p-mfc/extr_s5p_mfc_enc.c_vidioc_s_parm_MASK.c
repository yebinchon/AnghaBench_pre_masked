
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int numerator; int denominator; } ;
struct TYPE_8__ {TYPE_2__ timeperframe; } ;
struct TYPE_7__ {TYPE_4__ output; } ;
struct v4l2_streamparm {scalar_t__ type; TYPE_3__ parm; } ;
struct TYPE_5__ {int rc_framerate_denom; int rc_framerate_num; } ;
struct s5p_mfc_ctx {TYPE_1__ enc_params; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct s5p_mfc_ctx* FUNC_0 (void*) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_2, void *VAR_3,
    struct v4l2_streamparm *VAR_4)
{
 struct s5p_mfc_ctx *VAR_5 = FUNC_0(VAR_3);

 if (VAR_4->type == VAR_1) {
  VAR_5->enc_params.rc_framerate_num =
     VAR_4->parm.output.timeperframe.denominator;
  VAR_5->enc_params.rc_framerate_denom =
     VAR_4->parm.output.timeperframe.numerator;
 } else {
  FUNC_1("Setting FPS is only possible for the output queue\n");
  return -VAR_0;
 }
 return 0;
}
