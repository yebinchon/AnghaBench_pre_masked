
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_queryctrl {int id; } ;
struct uvc_video_chain {int ctrl_mutex; } ;
struct uvc_control_mapping {int dummy; } ;
struct uvc_control {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct uvc_video_chain*,struct uvc_control*,struct uvc_control_mapping*,struct v4l2_queryctrl*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct uvc_control* FUNC_3 (struct uvc_video_chain*,int ,struct uvc_control_mapping**) ;

int FUNC_4(struct uvc_video_chain *VAR_2,
 struct v4l2_queryctrl *VAR_3)
{
 struct uvc_control *VAR_4;
 struct uvc_control_mapping *VAR_5;
 int VAR_6;

 VAR_6 = FUNC_1(&VAR_2->ctrl_mutex);
 if (VAR_6 < 0)
  return -VAR_1;

 VAR_4 = FUNC_3(VAR_2, VAR_3->id, &VAR_5);
 if (VAR_4 == ((void*)0)) {
  VAR_6 = -VAR_0;
  goto done;
 }

 VAR_6 = FUNC_0(VAR_2, VAR_4, VAR_5, VAR_3);
done:
 FUNC_2(&VAR_2->ctrl_mutex);
 return VAR_6;
}
