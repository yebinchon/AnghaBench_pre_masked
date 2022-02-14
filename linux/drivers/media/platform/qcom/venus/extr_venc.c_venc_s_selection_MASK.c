
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct venus_inst {int out_height; int out_width; } ;
struct TYPE_2__ {int left; int top; int height; int width; } ;
struct v4l2_selection {scalar_t__ type; int target; TYPE_1__ r; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

 struct venus_inst* FUNC_0 (struct file*) ;

__attribute__((used)) static int
FUNC_1(struct file *VAR_2, void *VAR_3, struct v4l2_selection *VAR_4)
{
 struct venus_inst *VAR_5 = FUNC_0(VAR_2);

 if (VAR_4->type != VAR_1)
  return -VAR_0;

 switch (VAR_4->target) {
 case 128:
  if (VAR_4->r.width != VAR_5->out_width ||
      VAR_4->r.height != VAR_5->out_height ||
      VAR_4->r.top != 0 || VAR_4->r.left != 0)
   return -VAR_0;
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
