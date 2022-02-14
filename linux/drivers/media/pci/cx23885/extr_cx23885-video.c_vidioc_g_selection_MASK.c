
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int width; int height; int left; int top; } ;
struct v4l2_selection {scalar_t__ type; int target; TYPE_1__ r; } ;
struct file {int dummy; } ;
struct cx23885_dev {int tvnorm; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;


 int FUNC_0 (int ) ;
 struct cx23885_dev* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_2, void *VAR_3,
         struct v4l2_selection *VAR_4)
{
 struct cx23885_dev *VAR_5 = FUNC_1(VAR_2);

 if (VAR_4->type != VAR_1)
  return -VAR_0;

 switch (VAR_4->target) {
 case 129:
 case 128:
  VAR_4->r.top = 0;
  VAR_4->r.left = 0;
  VAR_4->r.width = 720;
  VAR_4->r.height = FUNC_0(VAR_5->tvnorm);
  break;
 default:
  return -VAR_0;
 }
 return 0;
}
