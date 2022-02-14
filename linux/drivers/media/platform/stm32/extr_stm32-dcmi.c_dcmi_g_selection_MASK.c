
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int height; int width; int left; int top; } ;
struct v4l2_selection {scalar_t__ type; int target; TYPE_1__ r; } ;
struct TYPE_6__ {int height; int width; } ;
struct TYPE_7__ {TYPE_2__ pix; } ;
struct TYPE_8__ {TYPE_3__ fmt; } ;
struct stm32_dcmi {TYPE_4__ fmt; TYPE_1__ crop; int do_crop; TYPE_1__ sd_bounds; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;



 struct stm32_dcmi* FUNC_0 (struct file*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_2, void *VAR_3,
       struct v4l2_selection *VAR_4)
{
 struct stm32_dcmi *VAR_5 = FUNC_0(VAR_2);

 if (VAR_4->type != VAR_1)
  return -VAR_0;

 switch (VAR_4->target) {
 case 128:
 case 129:
  VAR_4->r = VAR_5->sd_bounds;
  return 0;
 case 130:
  if (VAR_5->do_crop) {
   VAR_4->r = VAR_5->crop;
  } else {
   VAR_4->r.top = 0;
   VAR_4->r.left = 0;
   VAR_4->r.width = VAR_5->fmt.fmt.pix.width;
   VAR_4->r.height = VAR_5->fmt.fmt.pix.height;
  }
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
