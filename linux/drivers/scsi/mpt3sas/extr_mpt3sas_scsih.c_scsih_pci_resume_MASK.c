
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct Scsi_Host {int dummy; } ;
struct MPT3SAS_ADAPTER {int shost; } ;


 int FUNC_0 (struct MPT3SAS_ADAPTER*,char*) ;
 int FUNC_1 (struct MPT3SAS_ADAPTER*) ;
 struct Scsi_Host* FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (int ) ;
 struct MPT3SAS_ADAPTER* FUNC_4 (struct Scsi_Host*) ;

__attribute__((used)) static void
FUNC_5(struct pci_dev *VAR_0)
{
 struct Scsi_Host *VAR_1 = FUNC_2(VAR_0);
 struct MPT3SAS_ADAPTER *VAR_2 = FUNC_4(VAR_1);

 FUNC_0(VAR_2, "PCI error: resume callback!!\n");

 FUNC_1(VAR_2);
 FUNC_3(VAR_2->shost);
}
