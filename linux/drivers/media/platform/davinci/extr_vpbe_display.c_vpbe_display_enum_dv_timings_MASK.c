
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vpbe_layer {TYPE_1__* disp_dev; } ;
struct TYPE_4__ {int (* enum_dv_timings ) (struct vpbe_device*,struct v4l2_enum_dv_timings*) ;} ;
struct vpbe_device {int v4l2_dev; TYPE_2__ ops; } ;
struct v4l2_enum_dv_timings {int dummy; } ;
struct file {int dummy; } ;
struct TYPE_3__ {struct vpbe_device* vpbe_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vpbe_device*,struct v4l2_enum_dv_timings*) ;
 int FUNC_1 (int,int ,int *,char*) ;
 int FUNC_2 (int *,char*) ;
 struct vpbe_layer* FUNC_3 (struct file*) ;

__attribute__((used)) static int
FUNC_4(struct file *VAR_2, void *VAR_3,
   struct v4l2_enum_dv_timings *VAR_4)
{
 struct vpbe_layer *VAR_5 = FUNC_3(VAR_2);
 struct vpbe_device *VAR_6 = VAR_5->disp_dev->vpbe_dev;
 int VAR_7;

 FUNC_1(1, VAR_1, &VAR_6->v4l2_dev, "VIDIOC_ENUM_DV_TIMINGS\n");


 if (!VAR_6->ops.enum_dv_timings)
  return -VAR_0;

 VAR_7 = VAR_6->ops.enum_dv_timings(VAR_6, VAR_4);
 if (VAR_7) {
  FUNC_2(&VAR_6->v4l2_dev,
   "Failed to enumerate dv timings info\n");
  return -VAR_0;
 }

 return 0;
}
