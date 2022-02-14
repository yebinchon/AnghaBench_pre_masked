
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_device_id {scalar_t__ driver_data; } ;
struct pci_dev {int dev; scalar_t__ d3cold_delay; int irq; int * resource; } ;
struct intel_lpss_platform_info {int irq; int * mem; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct intel_lpss_platform_info* FUNC_0 (int *,void*,int,int ) ;
 int FUNC_1 (int *,struct intel_lpss_platform_info*) ;
 int FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct pci_dev *VAR_2,
    const struct pci_device_id *VAR_3)
{
 struct intel_lpss_platform_info *VAR_4;
 int VAR_5;

 VAR_5 = FUNC_4(VAR_2);
 if (VAR_5)
  return VAR_5;

 VAR_4 = FUNC_0(&VAR_2->dev, (void *)VAR_3->driver_data, sizeof(*VAR_4),
       VAR_1);
 if (!VAR_4)
  return -VAR_0;

 VAR_4->mem = &VAR_2->resource[0];
 VAR_4->irq = VAR_2->irq;

 VAR_2->d3cold_delay = 0;


 FUNC_2(VAR_2);
 FUNC_3(VAR_2);

 VAR_5 = FUNC_1(&VAR_2->dev, VAR_4);
 if (VAR_5)
  return VAR_5;

 FUNC_6(&VAR_2->dev);
 FUNC_5(&VAR_2->dev);

 return 0;
}
