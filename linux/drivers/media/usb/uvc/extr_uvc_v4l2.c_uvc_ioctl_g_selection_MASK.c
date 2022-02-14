
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int height; int width; scalar_t__ top; scalar_t__ left; } ;
struct v4l2_selection {scalar_t__ type; int target; TYPE_1__ r; } ;
struct uvc_streaming {scalar_t__ type; int mutex; TYPE_2__* cur_frame; } ;
struct uvc_fh {struct uvc_streaming* stream; } ;
struct file {int dummy; } ;
struct TYPE_4__ {int wHeight; int wWidth; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;




 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_3, void *VAR_4,
     struct v4l2_selection *VAR_5)
{
 struct uvc_fh *VAR_6 = VAR_4;
 struct uvc_streaming *VAR_7 = VAR_6->stream;

 if (VAR_5->type != VAR_7->type)
  return -VAR_0;

 switch (VAR_5->target) {
 case 128:
 case 129:
  if (VAR_7->type != VAR_1)
   return -VAR_0;
  break;
 case 130:
 case 131:
  if (VAR_7->type != VAR_2)
   return -VAR_0;
  break;
 default:
  return -VAR_0;
 }

 VAR_5->r.left = 0;
 VAR_5->r.top = 0;
 FUNC_0(&VAR_7->mutex);
 VAR_5->r.width = VAR_7->cur_frame->wWidth;
 VAR_5->r.height = VAR_7->cur_frame->wHeight;
 FUNC_1(&VAR_7->mutex);

 return 0;
}
