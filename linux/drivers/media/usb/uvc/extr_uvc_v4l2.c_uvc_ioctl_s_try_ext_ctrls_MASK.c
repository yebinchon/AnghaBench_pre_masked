
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_ext_controls {scalar_t__ which; unsigned int count; unsigned int error_idx; struct v4l2_ext_control* controls; } ;
struct v4l2_ext_control {int dummy; } ;
struct uvc_video_chain {int dummy; } ;
struct uvc_fh {struct uvc_video_chain* chain; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct uvc_video_chain*) ;
 int FUNC_1 (struct uvc_fh*,struct v4l2_ext_control*,unsigned int) ;
 int FUNC_2 (struct uvc_fh*) ;
 int FUNC_3 (struct uvc_fh*,struct v4l2_ext_control*) ;

__attribute__((used)) static int FUNC_4(struct uvc_fh *VAR_2,
         struct v4l2_ext_controls *VAR_3,
         bool VAR_4)
{
 struct v4l2_ext_control *VAR_5 = VAR_3->controls;
 struct uvc_video_chain *VAR_6 = VAR_2->chain;
 unsigned int VAR_7;
 int VAR_8;


 if (VAR_3->which == VAR_1)
  return -VAR_0;

 VAR_8 = FUNC_0(VAR_6);
 if (VAR_8 < 0)
  return VAR_8;

 for (VAR_7 = 0; VAR_7 < VAR_3->count; ++VAR_5, ++VAR_7) {
  VAR_8 = FUNC_3(VAR_2, VAR_5);
  if (VAR_8 < 0) {
   FUNC_2(VAR_2);
   VAR_3->error_idx = VAR_4 ? VAR_3->count : VAR_7;
   return VAR_8;
  }
 }

 VAR_3->error_idx = 0;

 if (VAR_4)
  return FUNC_1(VAR_2, VAR_3->controls, VAR_3->count);
 else
  return FUNC_2(VAR_2);
}
