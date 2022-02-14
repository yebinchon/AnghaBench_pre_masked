
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u32 ;
struct TYPE_4__ {int height; int width; } ;
struct TYPE_3__ {int height; int width; scalar_t__ top; scalar_t__ left; } ;
struct v4l2_subdev_selection {int target; TYPE_2__ format; int which; void* pad; TYPE_1__ r; } ;
struct v4l2_subdev_format {int target; TYPE_2__ format; int which; void* pad; TYPE_1__ r; } ;
struct v4l2_subdev {int dummy; } ;
struct v4l2_selection {int target; TYPE_1__ r; } ;
struct iss_video {int type; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;






 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct v4l2_subdev* FUNC_0 (struct iss_video*,void**) ;
 int FUNC_1 (struct v4l2_subdev*,void*,int ,int *,struct v4l2_subdev_selection*) ;
 struct iss_video* FUNC_2 (struct file*) ;

__attribute__((used)) static int
FUNC_3(struct file *VAR_8, void *VAR_9, struct v4l2_selection *VAR_10)
{
 struct iss_video *VAR_11 = FUNC_2(VAR_8);
 struct v4l2_subdev_format VAR_12;
 struct v4l2_subdev *VAR_13;
 struct v4l2_subdev_selection VAR_14 = {
  .which = VAR_5,
  .target = VAR_10->target,
 };
 u32 VAR_15;
 int VAR_16;

 switch (VAR_10->target) {
 case 130:
 case 129:
 case 128:
  if (VAR_11->type == VAR_4)
   return -VAR_0;
  break;
 case 133:
 case 132:
 case 131:
  if (VAR_11->type == VAR_3)
   return -VAR_0;
  break;
 default:
  return -VAR_0;
 }
 VAR_13 = FUNC_0(VAR_11, &VAR_15);
 if (VAR_13 == ((void*)0))
  return -VAR_0;





 VAR_14.pad = VAR_15;
 VAR_16 = FUNC_1(VAR_13, VAR_15, VAR_7, ((void*)0), &VAR_14);
 if (!VAR_16)
  VAR_10->r = VAR_14.r;
 if (VAR_16 != -VAR_1)
  return VAR_16;

 VAR_12.pad = VAR_15;
 VAR_12.which = VAR_5;
 VAR_16 = FUNC_1(VAR_13, VAR_15, VAR_6, ((void*)0), &VAR_12);
 if (VAR_16 < 0)
  return VAR_16 == -VAR_1 ? -VAR_2 : VAR_16;

 VAR_10->r.left = 0;
 VAR_10->r.top = 0;
 VAR_10->r.width = VAR_12.format.width;
 VAR_10->r.height = VAR_12.format.height;

 return 0;
}
