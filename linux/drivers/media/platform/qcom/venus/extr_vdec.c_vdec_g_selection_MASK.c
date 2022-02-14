
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct venus_inst {int out_height; int out_width; int height; int width; } ;
struct TYPE_2__ {scalar_t__ left; scalar_t__ top; int height; int width; } ;
struct v4l2_selection {scalar_t__ type; int target; TYPE_1__ r; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;







 struct venus_inst* FUNC_0 (struct file*) ;

__attribute__((used)) static int
FUNC_1(struct file *VAR_3, void *VAR_4, struct v4l2_selection *VAR_5)
{
 struct venus_inst *VAR_6 = FUNC_0(VAR_3);

 if (VAR_5->type != VAR_1 &&
     VAR_5->type != VAR_2)
  return -VAR_0;

 switch (VAR_5->target) {
 case 129:
 case 128:
 case 130:
  if (VAR_5->type != VAR_2)
   return -VAR_0;
  VAR_5->r.width = VAR_6->out_width;
  VAR_5->r.height = VAR_6->out_height;
  break;
 case 133:
 case 131:
  if (VAR_5->type != VAR_1)
   return -VAR_0;
  VAR_5->r.width = VAR_6->width;
  VAR_5->r.height = VAR_6->height;
  break;
 case 132:
 case 134:
  if (VAR_5->type != VAR_1)
   return -VAR_0;
  VAR_5->r.width = VAR_6->out_width;
  VAR_5->r.height = VAR_6->out_height;
  break;
 default:
  return -VAR_0;
 }

 VAR_5->r.top = 0;
 VAR_5->r.left = 0;

 return 0;
}
