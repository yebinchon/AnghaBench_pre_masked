
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct pci_dev {int dev; } ;
struct bfad_s {int bfad_flags; TYPE_1__* pcidev; } ;
typedef int pci_ers_result_t ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int *,char*,...) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct pci_dev*) ;
 scalar_t__ FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*) ;
 struct bfad_s* FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct pci_dev*,int,int*) ;
 int FUNC_8 (struct pci_dev*) ;
 int FUNC_9 (struct pci_dev*) ;
 int FUNC_10 (struct pci_dev*) ;
 int FUNC_11 (struct bfad_s*) ;

__attribute__((used)) static pci_ers_result_t
FUNC_12(struct pci_dev *VAR_4)
{
 struct bfad_s *VAR_5 = FUNC_6(VAR_4);
 u8 VAR_6;
 int VAR_7;

 FUNC_1(VAR_0, &VAR_4->dev,
     "bfad_pci_slot_reset flags: 0x%x\n", VAR_5->bfad_flags);

 if (FUNC_4(VAR_4)) {
  FUNC_1(VAR_0, &VAR_4->dev, "Cannot re-enable "
      "PCI device after reset.\n");
  return VAR_2;
 }

 FUNC_8(VAR_4);






 FUNC_7(VAR_4, 0x68, &VAR_6);
 if (VAR_6 == 0xff) {
  FUNC_1(VAR_0, &VAR_4->dev,
      "slot_reset failed ... got another PCI error !\n");
  goto out_disable_device;
 }

 FUNC_9(VAR_4);
 FUNC_10(VAR_4);

 VAR_7 = FUNC_2(&VAR_5->pcidev->dev, FUNC_0(64));
 if (VAR_7)
  VAR_7 = FUNC_2(&VAR_5->pcidev->dev,
            FUNC_0(32));
 if (VAR_7)
  goto out_disable_device;

 if (FUNC_11(VAR_5) == -1)
  goto out_disable_device;

 FUNC_5(VAR_4);
 FUNC_1(VAR_1, &VAR_4->dev,
     "slot_reset completed  flags: 0x%x!\n", VAR_5->bfad_flags);

 return VAR_3;

out_disable_device:
 FUNC_3(VAR_4);
 return VAR_2;
}
