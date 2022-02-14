
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int width; int height; } ;
struct v4l2_selection {scalar_t__ type; int target; TYPE_1__ r; } ;
struct v4l2_pix_format {int width; int height; } ;
struct omap_vout_device {int fbuf; struct v4l2_pix_format pix; TYPE_1__ crop; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;



 int FUNC_0 (struct v4l2_pix_format*,int *,TYPE_1__*) ;
 struct omap_vout_device* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_2, void *VAR_3, struct v4l2_selection *VAR_4)
{
 struct omap_vout_device *VAR_5 = FUNC_1(VAR_2);
 struct v4l2_pix_format *VAR_6 = &VAR_5->pix;

 if (VAR_4->type != VAR_1)
  return -VAR_0;

 switch (VAR_4->target) {
 case 130:
  VAR_4->r = VAR_5->crop;
  break;
 case 128:
  FUNC_0(&VAR_5->pix, &VAR_5->fbuf, &VAR_4->r);
  break;
 case 129:

  VAR_4->r.width = VAR_6->width & ~1;
  VAR_4->r.height = VAR_6->height & ~1;
  break;
 default:
  return -VAR_0;
 }
 return 0;
}
