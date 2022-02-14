
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kempld_platform_data {int (* register_cells ) (struct kempld_device_data*) ;} ;
struct kempld_device_data {int dev; } ;


 struct kempld_platform_data* FUNC_0 (int ) ;
 int FUNC_1 (struct kempld_device_data*) ;

__attribute__((used)) static int FUNC_2(struct kempld_device_data *VAR_0)
{
 const struct kempld_platform_data *VAR_1 = FUNC_0(VAR_0->dev);

 return VAR_1->register_cells(VAR_0);
}
