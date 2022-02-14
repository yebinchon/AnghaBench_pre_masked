
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_querymenu {int dummy; } ;
struct uvc_video_chain {int dummy; } ;
struct uvc_fh {struct uvc_video_chain* chain; } ;
struct file {int dummy; } ;


 int FUNC_0 (struct uvc_video_chain*,struct v4l2_querymenu*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_0, void *VAR_1,
          struct v4l2_querymenu *VAR_2)
{
 struct uvc_fh *VAR_3 = VAR_1;
 struct uvc_video_chain *VAR_4 = VAR_3->chain;

 return FUNC_0(VAR_4, VAR_2);
}
