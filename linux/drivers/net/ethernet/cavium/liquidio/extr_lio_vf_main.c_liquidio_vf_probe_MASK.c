
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_device_id {int dummy; } ;
struct pci_dev {int subsystem_vendor; int subsystem_device; int dev; scalar_t__ device; scalar_t__ vendor; } ;
struct octeon_device_priv {int dummy; } ;
struct octeon_device {int subsystem_id; struct pci_dev* pci_dev; int msix_on; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*,int ,int ) ;
 int FUNC_3 (struct pci_dev*) ;
 struct octeon_device* FUNC_4 (scalar_t__,int) ;
 scalar_t__ FUNC_5 (struct octeon_device*) ;
 int FUNC_6 (struct pci_dev*,struct octeon_device*) ;

__attribute__((used)) static int
FUNC_7(struct pci_dev *VAR_2,
    const struct pci_device_id *VAR_3 __attribute__((unused)))
{
 struct octeon_device *VAR_4 = ((void*)0);

 VAR_4 = FUNC_4(VAR_2->device,
      sizeof(struct octeon_device_priv));

 if (!VAR_4) {
  FUNC_1(&VAR_2->dev, "Unable to allocate device\n");
  return -VAR_0;
 }
 VAR_4->msix_on = VAR_1;

 FUNC_2(&VAR_2->dev, "Initializing device %x:%x.\n",
   (u32)VAR_2->vendor, (u32)VAR_2->device);


 FUNC_6(VAR_2, VAR_4);


 VAR_4->pci_dev = VAR_2;

 VAR_4->subsystem_id = VAR_2->subsystem_vendor |
  (VAR_2->subsystem_device << 16);

 if (FUNC_5(VAR_4)) {
  FUNC_3(VAR_2);
  return -VAR_0;
 }

 FUNC_0(&VAR_4->pci_dev->dev, "Device is ready\n");

 return 0;
}
