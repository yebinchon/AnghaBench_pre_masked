
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_ext_controls {unsigned int count; unsigned int error_idx; struct v4l2_ext_control* controls; } ;
struct v4l2_ext_control {int id; } ;
struct TYPE_4__ {TYPE_1__* mc_head; } ;
struct pvr2_v4l2_fh {TYPE_2__ channel; } ;
struct pvr2_hdw {int dummy; } ;
struct pvr2_ctrl {int dummy; } ;
struct file {struct pvr2_v4l2_fh* private_data; } ;
struct TYPE_3__ {struct pvr2_hdw* hdw; } ;


 int VAR_0 ;
 struct pvr2_ctrl* FUNC_0 (struct pvr2_hdw*,int ) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_1, void *VAR_2,
  struct v4l2_ext_controls *VAR_3)
{
 struct pvr2_v4l2_fh *VAR_4 = VAR_1->private_data;
 struct pvr2_hdw *VAR_5 = VAR_4->channel.mc_head->hdw;
 struct v4l2_ext_control *VAR_6;
 struct pvr2_ctrl *VAR_7;
 unsigned int VAR_8;



 for (VAR_8 = 0; VAR_8 < VAR_3->count; VAR_8++) {
  VAR_6 = VAR_3->controls + VAR_8;
  VAR_7 = FUNC_0(VAR_5, VAR_6->id);
  if (!VAR_7) {
   VAR_3->error_idx = VAR_8;
   return -VAR_0;
  }
 }
 return 0;
}
