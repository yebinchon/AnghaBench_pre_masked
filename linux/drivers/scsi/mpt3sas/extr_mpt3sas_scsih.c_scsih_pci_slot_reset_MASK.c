
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct Scsi_Host {int dummy; } ;
struct MPT3SAS_ADAPTER {struct pci_dev* pdev; scalar_t__ pci_error_recovery; } ;
typedef int pci_ers_result_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct MPT3SAS_ADAPTER*,char*) ;
 int FUNC_1 (struct MPT3SAS_ADAPTER*,char*,char*) ;
 int FUNC_2 (struct MPT3SAS_ADAPTER*,int ) ;
 int FUNC_3 (struct MPT3SAS_ADAPTER*) ;
 struct Scsi_Host* FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*) ;
 struct MPT3SAS_ADAPTER* FUNC_6 (struct Scsi_Host*) ;

__attribute__((used)) static pci_ers_result_t
FUNC_7(struct pci_dev *VAR_3)
{
 struct Scsi_Host *VAR_4 = FUNC_4(VAR_3);
 struct MPT3SAS_ADAPTER *VAR_5 = FUNC_6(VAR_4);
 int VAR_6;

 FUNC_0(VAR_5, "PCI error: slot reset callback!!\n");

 VAR_5->pci_error_recovery = 0;
 VAR_5->pdev = VAR_3;
 FUNC_5(VAR_3);
 VAR_6 = FUNC_3(VAR_5);
 if (VAR_6)
  return VAR_1;

 VAR_6 = FUNC_2(VAR_5, VAR_0);

 FUNC_1(VAR_5, "hard reset: %s\n",
   (VAR_6 == 0) ? "success" : "failed");

 if (!VAR_6)
  return VAR_2;
 else
  return VAR_1;
}
