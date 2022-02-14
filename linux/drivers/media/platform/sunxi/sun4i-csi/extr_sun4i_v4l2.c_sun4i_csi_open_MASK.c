
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int entity; } ;
struct sun4i_csi {int lock; int dev; TYPE_1__ vdev; } ;
struct file {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct file*) ;
 int FUNC_5 (int *,int) ;
 struct sun4i_csi* FUNC_6 (struct file*) ;

__attribute__((used)) static int FUNC_7(struct file *VAR_0)
{
 struct sun4i_csi *VAR_1 = FUNC_6(VAR_0);
 int VAR_2;

 VAR_2 = FUNC_0(&VAR_1->lock);
 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_2(VAR_1->dev);
 if (VAR_2 < 0)
  goto err_pm_put;

 VAR_2 = FUNC_5(&VAR_1->vdev.entity, 1);
 if (VAR_2)
  goto err_pm_put;

 VAR_2 = FUNC_4(VAR_0);
 if (VAR_2)
  goto err_pipeline_pm_put;

 FUNC_1(&VAR_1->lock);

 return 0;

err_pipeline_pm_put:
 FUNC_5(&VAR_1->vdev.entity, 0);

err_pm_put:
 FUNC_3(VAR_1->dev);
 FUNC_1(&VAR_1->lock);

 return VAR_2;
}
