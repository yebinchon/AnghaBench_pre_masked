
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int height; int width; } ;
struct v4l2_selection {scalar_t__ type; int flags; int target; TYPE_4__ r; } ;
struct gsc_variant {int dummy; } ;
struct gsc_frame {TYPE_4__ crop; } ;
struct TYPE_8__ {TYPE_2__* rotate; } ;
struct gsc_ctx {int out_path; TYPE_3__ gsc_ctrls; struct gsc_frame s_frame; struct gsc_frame d_frame; TYPE_1__* gsc_dev; } ;
struct file {int dummy; } ;
struct TYPE_7__ {int val; } ;
struct TYPE_6__ {struct gsc_variant* variant; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;






 struct gsc_ctx* FUNC_0 (void*) ;
 int FUNC_1 (struct gsc_variant*,int ,int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_2 (int,struct gsc_ctx*) ;
 int FUNC_3 (int ,struct gsc_ctx*) ;
 int FUNC_4 (struct gsc_ctx*,struct v4l2_selection*) ;
 int FUNC_5 (TYPE_4__*,TYPE_4__*) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static int FUNC_7(struct file *VAR_10, void *VAR_11,
    struct v4l2_selection *VAR_12)
{
 struct gsc_frame *VAR_13;
 struct gsc_ctx *VAR_14 = FUNC_0(VAR_11);
 struct gsc_variant *VAR_15 = VAR_14->gsc_dev->variant;
 struct v4l2_selection VAR_16 = *VAR_12;
 int VAR_17;

 if ((VAR_12->type != VAR_5) &&
     (VAR_12->type != VAR_6))
  return -VAR_0;

 VAR_17 = FUNC_4(VAR_14, &VAR_16);
 if (VAR_17)
  return VAR_17;

 if (VAR_12->flags & VAR_9 &&
     !FUNC_5(&VAR_16.r, &VAR_12->r))
  return -VAR_1;

 if (VAR_12->flags & VAR_8 &&
     !FUNC_5(&VAR_12->r, &VAR_16.r))
  return -VAR_1;

 VAR_12->r = VAR_16.r;

 switch (VAR_12->target) {
 case 132:
 case 131:
 case 133:
  VAR_13 = &VAR_14->s_frame;
  break;

 case 129:
 case 130:
 case 128:
  VAR_13 = &VAR_14->d_frame;
  break;

 default:
  return -VAR_0;
 }


 if (FUNC_2(VAR_2 | VAR_4, VAR_14)) {
  if (VAR_12->type == VAR_7) {
   VAR_17 = FUNC_1(VAR_15, VAR_16.r.width,
    VAR_16.r.height, VAR_14->d_frame.crop.width,
    VAR_14->d_frame.crop.height,
    VAR_14->gsc_ctrls.rotate->val, VAR_14->out_path);
  } else {
   VAR_17 = FUNC_1(VAR_15,
    VAR_14->s_frame.crop.width,
    VAR_14->s_frame.crop.height, VAR_16.r.width,
    VAR_16.r.height, VAR_14->gsc_ctrls.rotate->val,
    VAR_14->out_path);
  }

  if (VAR_17) {
   FUNC_6("Out of scaler range");
   return -VAR_0;
  }
 }

 VAR_13->crop = VAR_16.r;

 FUNC_3(VAR_3, VAR_14);
 return 0;
}
