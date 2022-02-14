
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int max_power_default; } ;
struct hl_device {int dev; TYPE_2__* asic_funcs; TYPE_1__ asic_prop; int max_power; int pm_mng_profile; } ;
struct TYPE_4__ {int (* add_device_attr ) (struct hl_device*,int *) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct hl_device*,int *) ;

int FUNC_3(struct hl_device *VAR_3)
{
 int VAR_4;

 VAR_3->pm_mng_profile = VAR_0;
 VAR_3->max_power = VAR_3->asic_prop.max_power_default;

 VAR_3->asic_funcs->add_device_attr(VAR_3, &VAR_2);

 VAR_4 = FUNC_1(VAR_3->dev, VAR_1);
 if (VAR_4) {
  FUNC_0(VAR_3->dev,
   "Failed to add groups to device, error %d\n", VAR_4);
  return VAR_4;
 }

 return 0;
}
