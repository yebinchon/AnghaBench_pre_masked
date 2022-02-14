
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_queryctrl {int default_value; int id; } ;
struct v4l2_ext_controls {scalar_t__ which; unsigned int count; unsigned int error_idx; struct v4l2_ext_control* controls; } ;
struct v4l2_ext_control {int value; int id; } ;
struct uvc_video_chain {int dummy; } ;
struct uvc_fh {struct uvc_video_chain* chain; } ;
struct file {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct uvc_video_chain*) ;
 int FUNC_1 (struct uvc_video_chain*,struct v4l2_ext_control*) ;
 int FUNC_2 (struct uvc_fh*) ;
 int FUNC_3 (struct uvc_video_chain*,struct v4l2_queryctrl*) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_1, void *VAR_2,
     struct v4l2_ext_controls *VAR_3)
{
 struct uvc_fh *VAR_4 = VAR_2;
 struct uvc_video_chain *VAR_5 = VAR_4->chain;
 struct v4l2_ext_control *VAR_6 = VAR_3->controls;
 unsigned int VAR_7;
 int VAR_8;

 if (VAR_3->which == VAR_0) {
  for (VAR_7 = 0; VAR_7 < VAR_3->count; ++VAR_6, ++VAR_7) {
   struct v4l2_queryctrl VAR_9 = { .id = VAR_6->id };

   VAR_8 = FUNC_3(VAR_5, &VAR_9);
   if (VAR_8 < 0) {
    VAR_3->error_idx = VAR_7;
    return VAR_8;
   }

   VAR_6->value = VAR_9.default_value;
  }

  return 0;
 }

 VAR_8 = FUNC_0(VAR_5);
 if (VAR_8 < 0)
  return VAR_8;

 for (VAR_7 = 0; VAR_7 < VAR_3->count; ++VAR_6, ++VAR_7) {
  VAR_8 = FUNC_1(VAR_5, VAR_6);
  if (VAR_8 < 0) {
   FUNC_2(VAR_4);
   VAR_3->error_idx = VAR_7;
   return VAR_8;
  }
 }

 VAR_3->error_idx = 0;

 return FUNC_2(VAR_4);
}
