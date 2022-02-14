
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_ext_control {int value; int id; } ;
struct uvc_video_chain {int dummy; } ;
struct uvc_control_mapping {int dummy; } ;
struct uvc_control {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct uvc_video_chain*,struct uvc_control*,struct uvc_control_mapping*,int *) ;
 struct uvc_control* FUNC_1 (struct uvc_video_chain*,int ,struct uvc_control_mapping**) ;

int FUNC_2(struct uvc_video_chain *VAR_1,
 struct v4l2_ext_control *VAR_2)
{
 struct uvc_control *VAR_3;
 struct uvc_control_mapping *VAR_4;

 VAR_3 = FUNC_1(VAR_1, VAR_2->id, &VAR_4);
 if (VAR_3 == ((void*)0))
  return -VAR_0;

 return FUNC_0(VAR_1, VAR_3, VAR_4, &VAR_2->value);
}
