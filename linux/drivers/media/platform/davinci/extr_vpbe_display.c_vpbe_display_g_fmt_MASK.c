
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vpbe_layer {int pix_fmt; int device_id; TYPE_2__* disp_dev; } ;
struct vpbe_device {int v4l2_dev; } ;
struct TYPE_3__ {int pix; } ;
struct v4l2_format {scalar_t__ type; TYPE_1__ fmt; } ;
struct file {int dummy; } ;
struct TYPE_4__ {struct vpbe_device* vpbe_dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ,int *,char*,int ) ;
 int FUNC_1 (int *,char*) ;
 struct vpbe_layer* FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_3, void *VAR_4,
    struct v4l2_format *VAR_5)
{
 struct vpbe_layer *VAR_6 = FUNC_2(VAR_3);
 struct vpbe_device *VAR_7 = VAR_6->disp_dev->vpbe_dev;

 FUNC_0(1, VAR_2, &VAR_7->v4l2_dev,
   "VIDIOC_G_FMT, layer id = %d\n",
   VAR_6->device_id);


 if (VAR_1 != VAR_5->type) {
  FUNC_1(&VAR_7->v4l2_dev, "invalid type\n");
  return -VAR_0;
 }

 VAR_5->fmt.pix = VAR_6->pix_fmt;

 return 0;
}
