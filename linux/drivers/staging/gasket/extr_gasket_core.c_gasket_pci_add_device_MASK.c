
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct device {int kobj; } ;
struct pci_dev {struct device dev; } ;
struct gasket_internal_desc {int dummy; } ;
struct TYPE_4__ {TYPE_1__* device; } ;
struct gasket_dev {int dev; TYPE_2__ dev_info; struct pci_dev* pci_dev; } ;
struct TYPE_3__ {int kobj; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,struct gasket_internal_desc*,struct gasket_dev**) ;
 int FUNC_1 (struct gasket_internal_desc*,struct gasket_dev*) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct device*,char*,...) ;
 int FUNC_4 (struct device*) ;
 int VAR_1 ;
 int FUNC_5 (struct gasket_dev*) ;
 int FUNC_6 (struct pci_dev*,struct gasket_dev*) ;
 struct gasket_internal_desc* FUNC_7 (struct pci_dev*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int *,int ) ;

int FUNC_11(struct pci_dev *VAR_2,
     struct gasket_dev **VAR_3)
{
 int VAR_4;
 struct gasket_internal_desc *VAR_5;
 struct gasket_dev *VAR_6;
 struct device *VAR_7;

 FUNC_2(&VAR_2->dev, "add PCI gasket device\n");

 FUNC_8(&VAR_1);
 VAR_5 = FUNC_7(VAR_2);
 FUNC_9(&VAR_1);
 if (!VAR_5) {
  FUNC_3(&VAR_2->dev,
   "PCI add device called for unknown driver type\n");
  return -VAR_0;
 }

 VAR_7 = &VAR_2->dev;
 VAR_4 = FUNC_0(VAR_7, VAR_5, &VAR_6);
 if (VAR_4)
  return VAR_4;

 VAR_6->pci_dev = VAR_2;
 VAR_4 = FUNC_6(VAR_2, VAR_6);
 if (VAR_4)
  goto cleanup_pci;





 VAR_4 = FUNC_10(&VAR_6->dev_info.device->kobj,
    &VAR_2->dev.kobj, FUNC_4(&VAR_2->dev));
 if (VAR_4) {
  FUNC_3(VAR_6->dev,
   "Cannot create sysfs pci link: %d\n", VAR_4);
  goto cleanup_pci;
 }

 *VAR_3 = VAR_6;
 return 0;

cleanup_pci:
 FUNC_5(VAR_6);
 FUNC_1(VAR_5, VAR_6);
 return VAR_4;
}
