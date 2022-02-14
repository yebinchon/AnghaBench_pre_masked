
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


union v4l2_ctrl_ptr {int * p_s32; int * p_s64; } ;
struct video_device {int dummy; } ;
struct v4l2_ext_controls {unsigned int error_idx; unsigned int count; TYPE_2__* controls; } ;
struct v4l2_ctrl_helper {TYPE_1__* ref; } ;
struct v4l2_ctrl {int flags; scalar_t__ type; scalar_t__ is_ptr; int id; } ;
struct TYPE_4__ {int value; int value64; } ;
struct TYPE_3__ {struct v4l2_ctrl* ctrl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct video_device*,char*,int ) ;
 int FUNC_1 (struct v4l2_ctrl*,union v4l2_ctrl_ptr) ;

__attribute__((used)) static int FUNC_2(struct v4l2_ext_controls *VAR_5,
     struct v4l2_ctrl_helper *VAR_6,
     struct video_device *VAR_7,
     bool VAR_8)
{
 unsigned VAR_9;
 int VAR_10 = 0;

 VAR_5->error_idx = VAR_5->count;
 for (VAR_9 = 0; VAR_9 < VAR_5->count; VAR_9++) {
  struct v4l2_ctrl *VAR_11 = VAR_6[VAR_9].ref->ctrl;
  union v4l2_ctrl_ptr VAR_12;

  VAR_5->error_idx = VAR_9;

  if (VAR_11->flags & VAR_3) {
   FUNC_0(VAR_7,
    "control id 0x%x is read-only\n",
    VAR_11->id);
   return -VAR_0;
  }






  if (VAR_8 && (VAR_11->flags & VAR_2)) {
   FUNC_0(VAR_7,
    "control id 0x%x is grabbed, cannot set\n",
    VAR_11->id);
   return -VAR_1;
  }




  if (VAR_11->is_ptr)
   continue;
  if (VAR_11->type == VAR_4)
   VAR_12.p_s64 = &VAR_5->controls[VAR_9].value64;
  else
   VAR_12.p_s32 = &VAR_5->controls[VAR_9].value;
  VAR_10 = FUNC_1(VAR_11, VAR_12);
  if (VAR_10)
   return VAR_10;
 }
 return 0;
}
