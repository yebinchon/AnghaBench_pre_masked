
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct venus_hfi_device {int power_enabled; int core; } ;


 int FUNC_0 (struct venus_hfi_device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct venus_hfi_device *VAR_0)
{
 int VAR_1;

 if (VAR_0->power_enabled)
  return 0;

 VAR_1 = FUNC_1(VAR_0->core);
 if (VAR_1)
  goto err;

 VAR_1 = FUNC_0(VAR_0);
 if (VAR_1)
  goto err_suspend;

 VAR_0->power_enabled = 1;

 return 0;

err_suspend:
 FUNC_2(VAR_0->core);
err:
 VAR_0->power_enabled = 0;
 return VAR_1;
}
