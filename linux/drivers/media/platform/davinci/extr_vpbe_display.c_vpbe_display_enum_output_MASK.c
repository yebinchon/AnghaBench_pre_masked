
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vpbe_layer {TYPE_1__* disp_dev; } ;
struct TYPE_4__ {int (* enum_outputs ) (struct vpbe_device*,struct v4l2_output*) ;} ;
struct vpbe_device {int v4l2_dev; TYPE_2__ ops; } ;
struct v4l2_output {int dummy; } ;
struct file {int dummy; } ;
struct TYPE_3__ {struct vpbe_device* vpbe_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vpbe_device*,struct v4l2_output*) ;
 int FUNC_1 (int,int ,int *,char*) ;
 struct vpbe_layer* FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_2, void *VAR_3,
        struct v4l2_output *VAR_4)
{
 struct vpbe_layer *VAR_5 = FUNC_2(VAR_2);
 struct vpbe_device *VAR_6 = VAR_5->disp_dev->vpbe_dev;
 int VAR_7;

 FUNC_1(1, VAR_1, &VAR_6->v4l2_dev, "VIDIOC_ENUM_OUTPUT\n");


 if (!VAR_6->ops.enum_outputs)
  return -VAR_0;

 VAR_7 = VAR_6->ops.enum_outputs(VAR_6, VAR_4);
 if (VAR_7) {
  FUNC_1(1, VAR_1, &VAR_6->v4l2_dev,
   "Failed to enumerate outputs\n");
  return -VAR_0;
 }

 return 0;
}
