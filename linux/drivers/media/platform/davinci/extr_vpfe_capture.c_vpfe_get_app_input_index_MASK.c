
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vpfe_subdev_info {int num_inputs; int name; } ;
struct vpfe_device {int current_input; TYPE_1__* current_subdev; struct vpfe_config* cfg; } ;
struct vpfe_config {int num_subdevs; struct vpfe_subdev_info* sub_devs; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(struct vpfe_device *VAR_1,
        int *VAR_2)
{
 struct vpfe_config *VAR_3 = VAR_1->cfg;
 struct vpfe_subdev_info *VAR_4;
 int VAR_5, VAR_6 = 0;

 for (VAR_5 = 0; VAR_5 < VAR_3->num_subdevs; VAR_5++) {
  VAR_4 = &VAR_3->sub_devs[VAR_5];
  if (!FUNC_0(VAR_4->name, VAR_1->current_subdev->name)) {
   if (VAR_1->current_input >= VAR_4->num_inputs)
    return -1;
   *VAR_2 = VAR_6 + VAR_1->current_input;
   return 0;
  }
  VAR_6 += VAR_4->num_inputs;
 }
 return -VAR_0;
}
