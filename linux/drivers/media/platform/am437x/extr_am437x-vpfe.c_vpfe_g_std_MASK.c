
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int v4l2_std_id ;
struct vpfe_subdev_info {TYPE_1__* inputs; } ;
struct vpfe_device {size_t std_index; struct vpfe_subdev_info* current_subdev; } ;
struct file {int dummy; } ;
struct TYPE_4__ {int std_id; } ;
struct TYPE_3__ {scalar_t__ capabilities; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct vpfe_device* FUNC_0 (struct file*) ;
 int FUNC_1 (int,struct vpfe_device*,char*) ;
 TYPE_2__* VAR_2 ;

__attribute__((used)) static int FUNC_2(struct file *VAR_3, void *VAR_4, v4l2_std_id *VAR_5)
{
 struct vpfe_device *VAR_6 = FUNC_0(VAR_3);
 struct vpfe_subdev_info *VAR_7;

 FUNC_1(2, VAR_6, "vpfe_g_std\n");

 VAR_7 = VAR_6->current_subdev;
 if (VAR_7->inputs[0].capabilities != VAR_1)
  return -VAR_0;

 *VAR_5 = VAR_2[VAR_6->std_index].std_id;

 return 0;
}
