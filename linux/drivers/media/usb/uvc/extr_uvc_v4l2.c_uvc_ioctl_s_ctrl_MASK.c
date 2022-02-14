
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xctrl ;
struct v4l2_ext_control {int value; int id; } ;
struct v4l2_control {int value; int id; } ;
struct uvc_video_chain {int dummy; } ;
struct uvc_fh {struct uvc_video_chain* chain; } ;
struct file {int dummy; } ;


 int FUNC_0 (struct v4l2_ext_control*,int ,int) ;
 int FUNC_1 (struct uvc_video_chain*) ;
 int FUNC_2 (struct uvc_fh*,struct v4l2_ext_control*,int) ;
 int FUNC_3 (struct uvc_fh*) ;
 int FUNC_4 (struct uvc_fh*,struct v4l2_ext_control*) ;

__attribute__((used)) static int FUNC_5(struct file *VAR_0, void *VAR_1,
       struct v4l2_control *VAR_2)
{
 struct uvc_fh *VAR_3 = VAR_1;
 struct uvc_video_chain *VAR_4 = VAR_3->chain;
 struct v4l2_ext_control VAR_5;
 int VAR_6;

 FUNC_0(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.id = VAR_2->id;
 VAR_5.value = VAR_2->value;

 VAR_6 = FUNC_1(VAR_4);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_6 = FUNC_4(VAR_3, &VAR_5);
 if (VAR_6 < 0) {
  FUNC_3(VAR_3);
  return VAR_6;
 }

 VAR_6 = FUNC_2(VAR_3, &VAR_5, 1);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_2->value = VAR_5.value;
 return 0;
}
