
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct kempld_platform_data {int (* release_hardware_mutex ) (struct kempld_device_data*) ;} ;
struct kempld_device_data {TYPE_1__* dev; } ;
struct TYPE_2__ {int kobj; } ;


 struct kempld_platform_data* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 struct kempld_device_data* FUNC_2 (struct platform_device*) ;
 int VAR_0 ;
 int FUNC_3 (struct kempld_device_data*) ;
 int FUNC_4 (int *,int *) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_1)
{
 struct kempld_device_data *VAR_2 = FUNC_2(VAR_1);
 const struct kempld_platform_data *VAR_3 = FUNC_0(VAR_2->dev);

 FUNC_4(&VAR_2->dev->kobj, &VAR_0);

 FUNC_1(&VAR_1->dev);
 VAR_3->release_hardware_mutex(VAR_2);

 return 0;
}
