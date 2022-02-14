
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_ext_controls {unsigned int count; scalar_t__ which; unsigned int error_idx; struct v4l2_ext_control* controls; } ;
struct v4l2_ext_control {int value; scalar_t__ value64; int id; } ;
struct TYPE_4__ {TYPE_1__* mc_head; } ;
struct pvr2_v4l2_fh {TYPE_2__ channel; } ;
struct pvr2_hdw {int dummy; } ;
struct pvr2_ctrl {int dummy; } ;
struct file {struct pvr2_v4l2_fh* private_data; } ;
struct TYPE_3__ {struct pvr2_hdw* hdw; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct pvr2_ctrl*,int*) ;
 int FUNC_1 (struct pvr2_ctrl*,int*) ;
 struct pvr2_ctrl* FUNC_2 (struct pvr2_hdw*,int ) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_2, void *VAR_3,
     struct v4l2_ext_controls *VAR_4)
{
 struct pvr2_v4l2_fh *VAR_5 = VAR_2->private_data;
 struct pvr2_hdw *VAR_6 = VAR_5->channel.mc_head->hdw;
 struct v4l2_ext_control *VAR_7;
 struct pvr2_ctrl *VAR_8;
 unsigned int VAR_9;
 int VAR_10;
 int VAR_11;

 VAR_11 = 0;
 for (VAR_9 = 0; VAR_9 < VAR_4->count; VAR_9++) {
  VAR_7 = VAR_4->controls + VAR_9;
  VAR_8 = FUNC_2(VAR_6, VAR_7->id);
  if (VAR_8) {
   if (VAR_4->which == VAR_1)
    FUNC_0(VAR_8, &VAR_10);
   else
    VAR_11 = FUNC_1(VAR_8, &VAR_10);
  } else
   VAR_11 = -VAR_0;

  if (VAR_11) {
   VAR_4->error_idx = VAR_9;
   return VAR_11;
  }


  VAR_7->value64 = 0;
  VAR_7->value = VAR_10;
 }
 return 0;
}
