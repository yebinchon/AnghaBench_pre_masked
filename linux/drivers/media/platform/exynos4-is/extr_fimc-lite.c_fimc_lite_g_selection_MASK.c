
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int height; int width; int top; int left; } ;
struct v4l2_selection {scalar_t__ type; int target; TYPE_1__ r; } ;
struct flite_frame {TYPE_1__ rect; int f_height; int f_width; } ;
struct fimc_lite {struct flite_frame out_frame; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;



 struct fimc_lite* FUNC_0 (struct file*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_2, void *VAR_3,
     struct v4l2_selection *VAR_4)
{
 struct fimc_lite *VAR_5 = FUNC_0(VAR_2);
 struct flite_frame *VAR_6 = &VAR_5->out_frame;

 if (VAR_4->type != VAR_1)
  return -VAR_0;

 switch (VAR_4->target) {
 case 129:
 case 128:
  VAR_4->r.left = 0;
  VAR_4->r.top = 0;
  VAR_4->r.width = VAR_6->f_width;
  VAR_4->r.height = VAR_6->f_height;
  return 0;

 case 130:
  VAR_4->r = VAR_6->rect;
  return 0;
 }

 return -VAR_0;
}
