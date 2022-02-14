
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct pci_dev {int dummy; } ;
struct lpfc_hba {struct pci_dev* pcidev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct lpfc_hba*,int ,int ,char*,int,...) ;
 int FUNC_1 (struct lpfc_hba*) ;
 int FUNC_2 (struct pci_dev*,int) ;

int
FUNC_3(struct lpfc_hba *VAR_4, int VAR_5)
{
 struct pci_dev *VAR_6 = VAR_4->pcidev;
 uint16_t VAR_7;
 int VAR_8;

 VAR_7 = FUNC_1(VAR_4);
 if (VAR_5 > VAR_7) {
  FUNC_0(VAR_4, VAR_1, VAR_3,
    "3057 Requested vfs (%d) greater than "
    "supported vfs (%d)", VAR_5, VAR_7);
  return -VAR_0;
 }

 VAR_8 = FUNC_2(VAR_6, VAR_5);
 if (VAR_8) {
  FUNC_0(VAR_4, VAR_2, VAR_3,
    "2806 Failed to enable sriov on this device "
    "with vfn number nr_vf:%d, rc:%d\n",
    VAR_5, VAR_8);
 } else
  FUNC_0(VAR_4, VAR_2, VAR_3,
    "2807 Successful enable sriov on this device "
    "with vfn number nr_vf:%d\n", VAR_5);
 return VAR_8;
}
