
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vpfe_subdev_info {int sd; } ;
struct vpfe_device {size_t std_index; int ccdc; int pdev; scalar_t__ current_input; int * sd; TYPE_1__* cfg; } ;
struct TYPE_4__ {int std_id; } ;
struct TYPE_3__ {struct vpfe_subdev_info* sub_devs; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (struct vpfe_device*,int ) ;
 TYPE_2__* VAR_0 ;

__attribute__((used)) static int FUNC_5(struct vpfe_device *VAR_1)
{
 struct vpfe_subdev_info *VAR_2;
 int VAR_3;

 VAR_2 = &VAR_1->cfg->sub_devs[0];
 VAR_2->sd = VAR_1->sd[0];
 VAR_1->current_input = 0;
 VAR_1->std_index = 0;

 VAR_3 = FUNC_4(VAR_1,
           VAR_0[VAR_1->std_index].std_id);
 if (VAR_3)
  return VAR_3;

 FUNC_0(VAR_1->pdev);

 FUNC_3(&VAR_1->ccdc, 1);

 FUNC_1(&VAR_1->ccdc);


 FUNC_2(&VAR_1->ccdc, -1);

 return VAR_3;
}
