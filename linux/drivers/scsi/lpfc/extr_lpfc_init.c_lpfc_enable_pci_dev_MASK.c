
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int needs_freset; } ;
struct lpfc_hba {struct pci_dev* pcidev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct lpfc_hba*,int ,int ,char*) ;
 int FUNC_1 (struct pci_dev*) ;
 scalar_t__ FUNC_2 (struct pci_dev*) ;
 scalar_t__ FUNC_3 (struct pci_dev*) ;
 scalar_t__ FUNC_4 (struct pci_dev*,int ) ;
 int FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct pci_dev*) ;

__attribute__((used)) static int
FUNC_8(struct lpfc_hba *VAR_4)
{
 struct pci_dev *VAR_5;


 if (!VAR_4->pcidev)
  goto out_error;
 else
  VAR_5 = VAR_4->pcidev;

 if (FUNC_2(VAR_5))
  goto out_error;

 if (FUNC_4(VAR_5, VAR_3))
  goto out_disable_device;

 FUNC_6(VAR_5);
 FUNC_7(VAR_5);
 FUNC_5(VAR_5);


 if (FUNC_3(VAR_5))
  VAR_5->needs_freset = 1;

 return 0;

out_disable_device:
 FUNC_1(VAR_5);
out_error:
 FUNC_0(VAR_4, VAR_1, VAR_2,
   "1401 Failed to enable pci device\n");
 return -VAR_0;
}
