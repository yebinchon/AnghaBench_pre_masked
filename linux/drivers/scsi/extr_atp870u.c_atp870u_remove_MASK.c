
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct atp_unit {struct Scsi_Host* host; } ;
struct Scsi_Host {int irq; } ;


 int FUNC_0 (struct Scsi_Host*) ;
 int FUNC_1 (int ,struct Scsi_Host*) ;
 int FUNC_2 (struct pci_dev*) ;
 struct atp_unit* FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct Scsi_Host*) ;
 int FUNC_6 (struct Scsi_Host*) ;

__attribute__((used)) static void FUNC_7 (struct pci_dev *VAR_0)
{
 struct atp_unit *VAR_1 = FUNC_3(VAR_0);
 struct Scsi_Host *VAR_2 = VAR_1->host;


 FUNC_6(VAR_2);
 FUNC_1(VAR_2->irq, VAR_2);
 FUNC_4(VAR_0);
 FUNC_2(VAR_0);
 FUNC_0(VAR_2);
 FUNC_5(VAR_2);
}
