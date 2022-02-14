
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vpbe_layer {struct vpbe_display* disp_dev; } ;
struct vpbe_display {struct vpbe_device* vpbe_dev; } ;
struct vpbe_device {int v4l2_dev; } ;
struct v4l2_pix_format {int dummy; } ;
struct TYPE_2__ {struct v4l2_pix_format pix; } ;
struct v4l2_format {scalar_t__ type; TYPE_1__ fmt; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ,int *,char*) ;
 int FUNC_1 (int *,char*) ;
 struct vpbe_layer* FUNC_2 (struct file*) ;
 int FUNC_3 (struct vpbe_display*,struct v4l2_pix_format*,int ) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_3, void *VAR_4,
      struct v4l2_format *VAR_5)
{
 struct vpbe_layer *VAR_6 = FUNC_2(VAR_3);
 struct vpbe_display *VAR_7 = VAR_6->disp_dev;
 struct vpbe_device *VAR_8 = VAR_6->disp_dev->vpbe_dev;
 struct v4l2_pix_format *VAR_9 = &VAR_5->fmt.pix;

 FUNC_0(1, VAR_2, &VAR_8->v4l2_dev, "VIDIOC_TRY_FMT\n");

 if (VAR_1 != VAR_5->type) {
  FUNC_1(&VAR_8->v4l2_dev, "invalid type\n");
  return -VAR_0;
 }


 return FUNC_3(VAR_7, VAR_9, 0);

}
