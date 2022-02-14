
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int height; int width; int top; int left; } ;
struct v4l2_selection {scalar_t__ type; int target; TYPE_3__ r; } ;
struct TYPE_5__ {int height; int width; } ;
struct TYPE_4__ {int height; int width; } ;
struct rvin_dev {TYPE_3__ compose; TYPE_2__ format; TYPE_3__ crop; TYPE_1__ source; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;






 struct rvin_dev* FUNC_0 (struct file*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_2, void *VAR_3,
       struct v4l2_selection *VAR_4)
{
 struct rvin_dev *VAR_5 = FUNC_0(VAR_2);

 if (VAR_4->type != VAR_1)
  return -VAR_0;

 switch (VAR_4->target) {
 case 129:
 case 128:
  VAR_4->r.left = VAR_4->r.top = 0;
  VAR_4->r.width = VAR_5->source.width;
  VAR_4->r.height = VAR_5->source.height;
  break;
 case 130:
  VAR_4->r = VAR_5->crop;
  break;
 case 132:
 case 131:
  VAR_4->r.left = VAR_4->r.top = 0;
  VAR_4->r.width = VAR_5->format.width;
  VAR_4->r.height = VAR_5->format.height;
  break;
 case 133:
  VAR_4->r = VAR_5->compose;
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
