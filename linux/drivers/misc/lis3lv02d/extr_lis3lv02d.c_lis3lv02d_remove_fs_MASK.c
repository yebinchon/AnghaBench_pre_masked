
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct lis3lv02d {int reg_cache; scalar_t__ pm_dev; TYPE_2__* pdev; } ;
struct TYPE_3__ {int kobj; } ;
struct TYPE_4__ {TYPE_1__ dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct lis3lv02d*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int *,int *) ;

int FUNC_8(struct lis3lv02d *VAR_1)
{
 FUNC_7(&VAR_1->pdev->dev.kobj, &VAR_0);
 FUNC_2(VAR_1->pdev);
 if (VAR_1->pm_dev) {

  FUNC_3(VAR_1->pm_dev);


  if (!FUNC_6(VAR_1->pm_dev))
   FUNC_1(VAR_1);

  FUNC_4(VAR_1->pm_dev);
  FUNC_5(VAR_1->pm_dev);
 }
 FUNC_0(VAR_1->reg_cache);
 return 0;
}
