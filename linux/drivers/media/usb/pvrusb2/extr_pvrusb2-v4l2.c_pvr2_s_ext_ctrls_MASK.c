
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_ext_controls {scalar_t__ which; unsigned int count; unsigned int error_idx; struct v4l2_ext_control* controls; } ;
struct v4l2_ext_control {int value; int id; } ;
struct TYPE_4__ {TYPE_1__* mc_head; } ;
struct pvr2_v4l2_fh {TYPE_2__ channel; } ;
struct pvr2_hdw {int dummy; } ;
struct file {struct pvr2_v4l2_fh* private_data; } ;
struct TYPE_3__ {struct pvr2_hdw* hdw; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct pvr2_hdw*) ;
 int FUNC_2 (struct pvr2_hdw*,int ) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_2, void *VAR_3,
  struct v4l2_ext_controls *VAR_4)
{
 struct pvr2_v4l2_fh *VAR_5 = VAR_2->private_data;
 struct pvr2_hdw *VAR_6 = VAR_5->channel.mc_head->hdw;
 struct v4l2_ext_control *VAR_7;
 unsigned int VAR_8;
 int VAR_9;


 if (VAR_4->which == VAR_1)
  return -VAR_0;

 VAR_9 = 0;
 for (VAR_8 = 0; VAR_8 < VAR_4->count; VAR_8++) {
  VAR_7 = VAR_4->controls + VAR_8;
  VAR_9 = FUNC_0(
    FUNC_2(VAR_6, VAR_7->id),
    VAR_7->value);
  if (VAR_9) {
   VAR_4->error_idx = VAR_8;
   goto commit;
  }
 }
commit:
 FUNC_1(VAR_6);
 return VAR_9;
}
