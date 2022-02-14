
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int width; int height; int left; int top; } ;
struct v4l2_selection {scalar_t__ type; int target; TYPE_1__ r; } ;
struct file {int dummy; } ;
struct cx18 {int is_50hz; } ;
struct TYPE_4__ {struct cx18* cx; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;


 TYPE_2__* FUNC_0 (void*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_2, void *VAR_3,
       struct v4l2_selection *VAR_4)
{
 struct cx18 *VAR_5 = FUNC_0(VAR_3)->cx;

 if (VAR_4->type != VAR_1)
  return -VAR_0;
 switch (VAR_4->target) {
 case 129:
 case 128:
  VAR_4->r.top = VAR_4->r.left = 0;
  VAR_4->r.width = 720;
  VAR_4->r.height = VAR_5->is_50hz ? 576 : 480;
  break;
 default:
  return -VAR_0;
 }
 return 0;
}
