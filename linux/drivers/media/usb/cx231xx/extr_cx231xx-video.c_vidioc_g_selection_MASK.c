
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int height; int width; int top; int left; } ;
struct v4l2_selection {scalar_t__ type; int target; TYPE_1__ r; } ;
struct file {int dummy; } ;
struct cx231xx_fh {struct cx231xx* dev; } ;
struct cx231xx {int height; int width; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;



__attribute__((used)) static int FUNC_0(struct file *VAR_2, void *VAR_3,
         struct v4l2_selection *VAR_4)
{
 struct cx231xx_fh *VAR_5 = VAR_3;
 struct cx231xx *VAR_6 = VAR_5->dev;

 if (VAR_4->type != VAR_1)
  return -VAR_0;

 switch (VAR_4->target) {
 case 129:
 case 128:
  VAR_4->r.left = 0;
  VAR_4->r.top = 0;
  VAR_4->r.width = VAR_6->width;
  VAR_4->r.height = VAR_6->height;
  break;
 default:
  return -VAR_0;
 }
 return 0;
}
