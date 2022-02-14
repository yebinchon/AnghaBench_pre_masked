
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct mic_device {TYPE_2__* intr_ops; TYPE_1__* pdev; } ;
struct TYPE_4__ {int (* enable_interrupts ) (struct mic_device*) ;} ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct mic_device*,struct pci_dev*) ;
 int FUNC_2 (struct mic_device*,struct pci_dev*) ;
 int FUNC_3 (struct mic_device*,struct pci_dev*) ;
 int FUNC_4 (struct mic_device*) ;

int FUNC_5(struct mic_device *VAR_0, struct pci_dev *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_3(VAR_0, VAR_1);
 if (!VAR_2)
  goto done;

 VAR_2 = FUNC_2(VAR_0, VAR_1);
 if (!VAR_2)
  goto done;

 VAR_2 = FUNC_1(VAR_0, VAR_1);
 if (VAR_2) {
  FUNC_0(&VAR_0->pdev->dev, "no usable interrupts\n");
  return VAR_2;
 }
done:
 VAR_0->intr_ops->enable_interrupts(VAR_0);
 return 0;
}
