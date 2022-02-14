
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int kobj; } ;
struct platform_device {TYPE_2__ dev; } ;
struct int3400_thermal_priv {struct int3400_thermal_priv* arts; struct int3400_thermal_priv* trts; int thermal; TYPE_1__* adev; int rel_misc_dev_res; } ;
struct TYPE_3__ {int handle; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (struct int3400_thermal_priv*) ;
 struct int3400_thermal_priv* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int ) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_3)
{
 struct int3400_thermal_priv *VAR_4 = FUNC_3(VAR_3);

 FUNC_0(
   VAR_4->adev->handle, VAR_0,
   VAR_1);

 if (!VAR_4->rel_misc_dev_res)
  FUNC_1(VAR_4->adev->handle);

 FUNC_4(&VAR_3->dev.kobj, &VAR_2);
 FUNC_5(VAR_4->thermal);
 FUNC_2(VAR_4->trts);
 FUNC_2(VAR_4->arts);
 FUNC_2(VAR_4);
 return 0;
}
