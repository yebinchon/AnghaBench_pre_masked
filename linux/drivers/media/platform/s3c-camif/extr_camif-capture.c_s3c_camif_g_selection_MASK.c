
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int height; int width; int top; int left; } ;
struct v4l2_selection {scalar_t__ type; int target; TYPE_2__ r; } ;
struct file {int dummy; } ;
struct TYPE_3__ {TYPE_2__ rect; int f_height; int f_width; } ;
struct camif_vp {TYPE_1__ out_frame; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;



 struct camif_vp* FUNC_0 (struct file*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_2, void *VAR_3,
     struct v4l2_selection *VAR_4)
{
 struct camif_vp *VAR_5 = FUNC_0(VAR_2);

 if (VAR_4->type != VAR_1)
  return -VAR_0;

 switch (VAR_4->target) {
 case 129:
 case 128:
  VAR_4->r.left = 0;
  VAR_4->r.top = 0;
  VAR_4->r.width = VAR_5->out_frame.f_width;
  VAR_4->r.height = VAR_5->out_frame.f_height;
  return 0;

 case 130:
  VAR_4->r = VAR_5->out_frame.rect;
  return 0;
 }

 return -VAR_0;
}
