
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int height; int width; int top; int left; } ;
struct v4l2_selection {scalar_t__ type; int target; TYPE_1__ r; } ;
struct sh_vou_device {int std; TYPE_1__ rect; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 struct sh_vou_device* FUNC_0 (struct file*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_4, void *VAR_5,
         struct v4l2_selection *VAR_6)
{
 struct sh_vou_device *VAR_7 = FUNC_0(VAR_4);

 if (VAR_6->type != VAR_1)
  return -VAR_0;
 switch (VAR_6->target) {
 case 130:
  VAR_6->r = VAR_7->rect;
  break;
 case 128:
 case 129:
  VAR_6->r.left = 0;
  VAR_6->r.top = 0;
  VAR_6->r.width = VAR_3;
  if (VAR_7->std & VAR_2)
   VAR_6->r.height = 480;
  else
   VAR_6->r.height = 576;
  break;
 default:
  return -VAR_0;
 }
 return 0;
}
