
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sym_data {struct pci_dev* pdev; } ;
struct pci_dev {int dummy; } ;
struct Scsi_Host {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pci_dev*,int ,unsigned short*) ;
 int FUNC_1 (struct pci_dev*,int ,unsigned short) ;
 int FUNC_2 (int ,struct Scsi_Host*,char*,unsigned short) ;
 struct sym_data* FUNC_3 (struct Scsi_Host*) ;

void FUNC_4(struct Scsi_Host *VAR_2)
{
 struct sym_data *VAR_3 = FUNC_3(VAR_2);
 struct pci_dev *VAR_4 = VAR_3->pdev;
 unsigned short VAR_5;
 FUNC_0(VAR_4, VAR_1, &VAR_5);
 if (VAR_5 & 0xf900) {
  FUNC_1(VAR_4, VAR_1, VAR_5);
  FUNC_2(VAR_0, VAR_2,
   "PCI bus error: status = 0x%04x\n", VAR_5 & 0xf900);
 }
}
