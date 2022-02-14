
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vpbe_layer {int buffer_queue; TYPE_2__* disp_dev; } ;
struct TYPE_3__ {int (* set_output ) (struct vpbe_device*,unsigned int) ;} ;
struct vpbe_device {int v4l2_dev; TYPE_1__ ops; } ;
struct file {int dummy; } ;
struct TYPE_4__ {struct vpbe_device* vpbe_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct vpbe_device*,unsigned int) ;
 int FUNC_1 (int,int ,int *,char*) ;
 int FUNC_2 (int *,char*) ;
 scalar_t__ FUNC_3 (int *) ;
 struct vpbe_layer* FUNC_4 (struct file*) ;

__attribute__((used)) static int FUNC_5(struct file *VAR_3, void *VAR_4,
    unsigned int VAR_5)
{
 struct vpbe_layer *VAR_6 = FUNC_4(VAR_3);
 struct vpbe_device *VAR_7 = VAR_6->disp_dev->vpbe_dev;
 int VAR_8;

 FUNC_1(1, VAR_2, &VAR_7->v4l2_dev, "VIDIOC_S_OUTPUT\n");

 if (FUNC_3(&VAR_6->buffer_queue))
  return -VAR_0;

 if (!VAR_7->ops.set_output)
  return -VAR_1;

 VAR_8 = VAR_7->ops.set_output(VAR_7, VAR_5);
 if (VAR_8) {
  FUNC_2(&VAR_7->v4l2_dev,
   "Failed to set output for sub devices\n");
  return -VAR_1;
 }

 return 0;
}
