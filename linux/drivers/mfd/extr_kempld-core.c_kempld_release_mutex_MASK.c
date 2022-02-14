
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kempld_platform_data {int (* release_hardware_mutex ) (struct kempld_device_data*) ;} ;
struct kempld_device_data {int lock; int dev; } ;


 struct kempld_platform_data* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct kempld_device_data*) ;

void FUNC_3(struct kempld_device_data *VAR_0)
{
 const struct kempld_platform_data *VAR_1 = FUNC_0(VAR_0->dev);

 VAR_1->release_hardware_mutex(VAR_0);
 FUNC_1(&VAR_0->lock);
}
