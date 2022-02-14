
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct intel_lpss_platform_info {int irq; int mem; } ;
struct acpi_device_id {scalar_t__ driver_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct acpi_device_id* FUNC_0 (int ,int *) ;
 struct intel_lpss_platform_info* FUNC_1 (int *,void*,int,int ) ;
 int VAR_4 ;
 int FUNC_2 (int *,struct intel_lpss_platform_info*) ;
 int FUNC_3 (struct platform_device*,int ) ;
 int FUNC_4 (struct platform_device*,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_5)
{
 struct intel_lpss_platform_info *VAR_6;
 const struct acpi_device_id *VAR_7;

 VAR_7 = FUNC_0(VAR_4, &VAR_5->dev);
 if (!VAR_7)
  return -VAR_0;

 VAR_6 = FUNC_1(&VAR_5->dev, (void *)VAR_7->driver_data, sizeof(*VAR_6),
       VAR_2);
 if (!VAR_6)
  return -VAR_1;

 VAR_6->mem = FUNC_4(VAR_5, VAR_3, 0);
 VAR_6->irq = FUNC_3(VAR_5, 0);

 FUNC_6(&VAR_5->dev);
 FUNC_5(&VAR_5->dev);

 return FUNC_2(&VAR_5->dev, VAR_6);
}
