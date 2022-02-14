
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int height; int width; int top; int left; } ;
struct vpfe_device {scalar_t__ std_index; TYPE_1__ crop; } ;
struct v4l2_selection {scalar_t__ type; int target; TYPE_1__ r; } ;
struct file {int dummy; } ;
struct TYPE_5__ {int height; int width; } ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;



 struct vpfe_device* FUNC_1 (struct file*) ;
 TYPE_2__* VAR_2 ;

__attribute__((used)) static int
FUNC_2(struct file *VAR_3, void *VAR_4, struct v4l2_selection *VAR_5)
{
 struct vpfe_device *VAR_6 = FUNC_1(VAR_3);

 if (VAR_5->type != VAR_1 ||
     VAR_6->std_index >= FUNC_0(VAR_2))
  return -VAR_0;

 switch (VAR_5->target) {
 case 129:
 case 128:
  VAR_5->r.left = 0;
  VAR_5->r.top = 0;
  VAR_5->r.width = VAR_2[VAR_6->std_index].width;
  VAR_5->r.height = VAR_2[VAR_6->std_index].height;
  break;

 case 130:
  VAR_5->r = VAR_6->crop;
  break;

 default:
  return -VAR_0;
 }

 return 0;
}
