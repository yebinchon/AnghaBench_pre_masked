
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct Scsi_Host {int dummy; } ;
struct MPT3SAS_ADAPTER {int dummy; } ;
typedef int pci_ers_result_t ;


 int VAR_0 ;
 int FUNC_0 (struct MPT3SAS_ADAPTER*,char*) ;
 struct Scsi_Host* FUNC_1 (struct pci_dev*) ;
 struct MPT3SAS_ADAPTER* FUNC_2 (struct Scsi_Host*) ;

__attribute__((used)) static pci_ers_result_t
FUNC_3(struct pci_dev *VAR_1)
{
 struct Scsi_Host *VAR_2 = FUNC_1(VAR_1);
 struct MPT3SAS_ADAPTER *VAR_3 = FUNC_2(VAR_2);

 FUNC_0(VAR_3, "PCI error: mmio enabled callback!!\n");







 return VAR_0;
}
