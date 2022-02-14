
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int numerator; int denominator; } ;
struct TYPE_7__ {int capability; TYPE_2__ timeperframe; } ;
struct TYPE_8__ {TYPE_3__ output; } ;
struct v4l2_streamparm {scalar_t__ type; TYPE_4__ parm; } ;
struct TYPE_5__ {int framerate_denom; int framerate_num; } ;
struct mtk_vcodec_ctx {int param_change; TYPE_1__ enc_params; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 struct mtk_vcodec_ctx* FUNC_0 (void*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_4, void *VAR_5,
         struct v4l2_streamparm *VAR_6)
{
 struct mtk_vcodec_ctx *VAR_7 = FUNC_0(VAR_5);

 if (VAR_6->type != VAR_2)
  return -VAR_0;

 VAR_7->enc_params.framerate_num =
   VAR_6->parm.output.timeperframe.denominator;
 VAR_7->enc_params.framerate_denom =
   VAR_6->parm.output.timeperframe.numerator;
 VAR_7->param_change |= VAR_1;

 VAR_6->parm.output.capability = VAR_3;

 return 0;
}
