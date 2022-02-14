
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int height; int width; } ;
struct vpfe_device {size_t std_index; TYPE_1__ crop; int v4l2_dev; } ;
struct v4l2_selection {scalar_t__ type; int target; TYPE_1__ r; } ;
struct file {int dummy; } ;
struct TYPE_4__ {int height; int width; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;



 int VAR_2 ;
 int FUNC_0 (int,int ,int *,char*) ;
 struct vpfe_device* FUNC_1 (struct file*) ;
 TYPE_2__* VAR_3 ;

__attribute__((used)) static int FUNC_2(struct file *VAR_4, void *VAR_5,
       struct v4l2_selection *VAR_6)
{
 struct vpfe_device *VAR_7 = FUNC_1(VAR_4);

 FUNC_0(1, VAR_2, &VAR_7->v4l2_dev, "vpfe_g_selection\n");

 if (VAR_6->type != VAR_1)
  return -VAR_0;

 switch (VAR_6->target) {
 case 130:
  VAR_6->r = VAR_7->crop;
  break;
 case 128:
 case 129:
  VAR_6->r.width = VAR_3[VAR_7->std_index].width;
  VAR_6->r.height = VAR_3[VAR_7->std_index].height;
  break;
 default:
  return -VAR_0;
 }
 return 0;
}
