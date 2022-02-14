
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct aac_dev {int dummy; } ;
struct Scsi_Host {scalar_t__ hostdata; } ;


 int FUNC_0 (struct aac_dev*) ;
 struct Scsi_Host* FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct Scsi_Host*) ;

__attribute__((used)) static void FUNC_3(struct pci_dev *VAR_0)
{
 struct Scsi_Host *VAR_1 = FUNC_1(VAR_0);
 FUNC_2(VAR_1);
 FUNC_0((struct aac_dev *)VAR_1->hostdata);
}
