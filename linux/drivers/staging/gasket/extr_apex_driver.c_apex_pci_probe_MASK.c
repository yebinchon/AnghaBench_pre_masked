
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ ulong ;
struct pci_device_id {int dummy; } ;
struct pci_dev {int dev; } ;
struct TYPE_2__ {int device; } ;
struct gasket_dev {TYPE_1__ dev_info; int * dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct gasket_dev*) ;
 int FUNC_1 (struct gasket_dev*) ;
 int VAR_7 ;
 int FUNC_2 (int *,char*) ;
 scalar_t__ FUNC_3 (struct gasket_dev*,int ,int ) ;
 int FUNC_4 (struct gasket_dev*) ;
 int FUNC_5 (struct pci_dev*,struct gasket_dev**) ;
 int FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct pci_dev*) ;
 int FUNC_10 (struct pci_dev*) ;
 int FUNC_11 (struct pci_dev*,struct gasket_dev*) ;
 int FUNC_12 (struct pci_dev*) ;
 int FUNC_13 (int ) ;

__attribute__((used)) static int FUNC_14(struct pci_dev *VAR_8,
     const struct pci_device_id *VAR_9)
{
 int VAR_10;
 ulong VAR_11, VAR_12;
 int VAR_13 = 0;
 struct gasket_dev *VAR_14;

 VAR_10 = FUNC_10(VAR_8);
 if (VAR_10) {
  FUNC_2(&VAR_8->dev, "error enabling PCI device\n");
  return VAR_10;
 }

 FUNC_12(VAR_8);

 VAR_10 = FUNC_5(VAR_8, &VAR_14);
 if (VAR_10) {
  FUNC_2(&VAR_8->dev, "error adding gasket device\n");
  FUNC_9(VAR_8);
  return VAR_10;
 }

 FUNC_11(VAR_8, VAR_14);
 FUNC_1(VAR_14);

 while (VAR_13 < VAR_4) {
  VAR_11 =
   FUNC_3(VAR_14, VAR_2,
        VAR_1);
  VAR_12 =
   FUNC_3(VAR_14, VAR_2,
        VAR_0);
  if (VAR_11 && VAR_12)
   break;
  FUNC_13(FUNC_8(VAR_3));
  VAR_13++;
 }

 if (VAR_13 == VAR_4) {
  if (!VAR_11)
   FUNC_2(VAR_14->dev, "Page table init timed out\n");
  if (!VAR_12)
   FUNC_2(VAR_14->dev, "MSI-X table init timed out\n");
  VAR_10 = -VAR_5;
  goto remove_device;
 }

 VAR_10 = FUNC_7(VAR_14->dev_info.device,
       VAR_7);
 if (VAR_10)
  FUNC_2(&VAR_8->dev, "error creating device sysfs entries\n");

 VAR_10 = FUNC_4(VAR_14);
 if (VAR_10) {
  FUNC_2(&VAR_8->dev, "error enabling gasket device\n");
  goto remove_device;
 }


 if (VAR_6)
  FUNC_0(VAR_14);

 return 0;

remove_device:
 FUNC_6(VAR_8);
 FUNC_9(VAR_8);
 return VAR_10;
}
