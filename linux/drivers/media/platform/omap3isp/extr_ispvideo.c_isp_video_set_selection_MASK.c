
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct v4l2_subdev_selection {int target; int r; int pad; int flags; int which; } ;
struct v4l2_subdev {int dummy; } ;
struct v4l2_selection {int target; int r; int flags; } ;
struct isp_video {int mutex; int type; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 int VAR_5 ;
 struct v4l2_subdev* FUNC_0 (struct isp_video*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_6 ;
 int FUNC_3 (struct v4l2_subdev*,int ,int ,int *,struct v4l2_subdev_selection*) ;
 struct isp_video* FUNC_4 (struct file*) ;

__attribute__((used)) static int
FUNC_5(struct file *VAR_7, void *VAR_8, struct v4l2_selection *VAR_9)
{
 struct isp_video *VAR_10 = FUNC_4(VAR_7);
 struct v4l2_subdev *VAR_11;
 struct v4l2_subdev_selection VAR_12 = {
  .which = VAR_5,
  .target = VAR_9->target,
  .flags = VAR_9->flags,
  .r = VAR_9->r,
 };
 u32 VAR_13;
 int VAR_14;

 switch (VAR_9->target) {
 case 128:
  if (VAR_10->type == VAR_4)
   return -VAR_0;
  break;
 case 129:
  if (VAR_10->type == VAR_3)
   return -VAR_0;
  break;
 default:
  return -VAR_0;
 }
 VAR_11 = FUNC_0(VAR_10, &VAR_13);
 if (VAR_11 == ((void*)0))
  return -VAR_0;

 VAR_12.pad = VAR_13;
 FUNC_1(&VAR_10->mutex);
 VAR_14 = FUNC_3(VAR_11, VAR_13, VAR_6, ((void*)0), &VAR_12);
 FUNC_2(&VAR_10->mutex);
 if (!VAR_14)
  VAR_9->r = VAR_12.r;

 return VAR_14 == -VAR_1 ? -VAR_2 : VAR_14;
}
