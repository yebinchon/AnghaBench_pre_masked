
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int irq; } ;
struct initio_host {int addr; } ;
struct Scsi_Host {scalar_t__ hostdata; } ;


 int FUNC_0 (int ,struct Scsi_Host*) ;
 int FUNC_1 (struct pci_dev*) ;
 struct Scsi_Host* FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (struct Scsi_Host*) ;
 int FUNC_5 (struct Scsi_Host*) ;

__attribute__((used)) static void FUNC_6(struct pci_dev *VAR_0)
{
 struct Scsi_Host *VAR_1 = FUNC_2(VAR_0);
 struct initio_host *VAR_2 = (struct initio_host *)VAR_1->hostdata;
 FUNC_5(VAR_1);
 FUNC_0(VAR_0->irq, VAR_1);
 FUNC_3(VAR_2->addr, 256);
 FUNC_4(VAR_1);
 FUNC_1(VAR_0);
}
