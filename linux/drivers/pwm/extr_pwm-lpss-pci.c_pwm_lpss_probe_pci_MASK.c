
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwm_lpss_chip {int dummy; } ;
struct pwm_lpss_boardinfo {int dummy; } ;
struct pci_device_id {scalar_t__ driver_data; } ;
struct pci_dev {int dev; int * resource; } ;


 scalar_t__ FUNC_0 (struct pwm_lpss_chip*) ;
 int FUNC_1 (struct pwm_lpss_chip*) ;
 int FUNC_2 (struct pci_dev*,struct pwm_lpss_chip*) ;
 int FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct pwm_lpss_chip* FUNC_6 (int *,int *,struct pwm_lpss_boardinfo const*) ;

__attribute__((used)) static int FUNC_7(struct pci_dev *VAR_0,
         const struct pci_device_id *VAR_1)
{
 const struct pwm_lpss_boardinfo *VAR_2;
 struct pwm_lpss_chip *VAR_3;
 int VAR_4;

 VAR_4 = FUNC_3(VAR_0);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_2 = (struct pwm_lpss_boardinfo *)VAR_1->driver_data;
 VAR_3 = FUNC_6(&VAR_0->dev, &VAR_0->resource[0], VAR_2);
 if (FUNC_0(VAR_3))
  return FUNC_1(VAR_3);

 FUNC_2(VAR_0, VAR_3);

 FUNC_5(&VAR_0->dev);
 FUNC_4(&VAR_0->dev);

 return 0;
}
