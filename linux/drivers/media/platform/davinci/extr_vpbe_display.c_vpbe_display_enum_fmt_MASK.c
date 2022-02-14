
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vpbe_layer {int device_id; TYPE_1__* disp_dev; } ;
struct vpbe_device {int v4l2_dev; } ;
struct v4l2_fmtdesc {int index; int pixelformat; } ;
struct file {int dummy; } ;
struct TYPE_2__ {struct vpbe_device* vpbe_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int ,int *,char*,int ) ;
 int FUNC_1 (int *,char*) ;
 struct vpbe_layer* FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_4, void *VAR_5,
       struct v4l2_fmtdesc *VAR_6)
{
 struct vpbe_layer *VAR_7 = FUNC_2(VAR_4);
 struct vpbe_device *VAR_8 = VAR_7->disp_dev->vpbe_dev;

 FUNC_0(1, VAR_3, &VAR_8->v4l2_dev,
    "VIDIOC_ENUM_FMT, layer id = %d\n",
    VAR_7->device_id);
 if (VAR_6->index > 1) {
  FUNC_1(&VAR_8->v4l2_dev, "Invalid format index\n");
  return -VAR_0;
 }


 if (VAR_6->index == 0)
  VAR_6->pixelformat = VAR_2;
 else
  VAR_6->pixelformat = VAR_1;

 return 0;
}
