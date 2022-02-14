
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct Scsi_Host {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct pci_dev*) ;
 struct Scsi_Host* FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct Scsi_Host*) ;
 int FUNC_4 (struct Scsi_Host*,struct pci_dev*) ;

__attribute__((used)) static void FUNC_5(struct pci_dev *VAR_1)
{
 struct Scsi_Host *VAR_2 = FUNC_1(VAR_1);

 FUNC_3(VAR_2);
 FUNC_4(VAR_2, VAR_1);
 FUNC_2(VAR_1);
 FUNC_0(VAR_1);

 VAR_0--;
}
