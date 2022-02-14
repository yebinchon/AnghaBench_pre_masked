
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct Scsi_Host {int dummy; } ;
struct MPT3SAS_ADAPTER {int pci_error_recovery; int shost; } ;
typedef int pci_ers_result_t ;
typedef int pci_channel_state_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct MPT3SAS_ADAPTER*) ;
 int FUNC_1 (struct MPT3SAS_ADAPTER*,char*,int ) ;
 int FUNC_2 (struct MPT3SAS_ADAPTER*) ;
 int FUNC_3 (struct MPT3SAS_ADAPTER*) ;



 struct Scsi_Host* FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (int ) ;
 struct MPT3SAS_ADAPTER* FUNC_6 (struct Scsi_Host*) ;

__attribute__((used)) static pci_ers_result_t
FUNC_7(struct pci_dev *VAR_3, pci_channel_state_t VAR_4)
{
 struct Scsi_Host *VAR_5 = FUNC_4(VAR_3);
 struct MPT3SAS_ADAPTER *VAR_6 = FUNC_6(VAR_5);

 FUNC_1(VAR_6, "PCI error: detected callback, state(%d)!!\n", VAR_4);

 switch (VAR_4) {
 case 129:
  return VAR_0;
 case 130:

  VAR_6->pci_error_recovery = 1;
  FUNC_5(VAR_6->shost);
  FUNC_3(VAR_6);
  FUNC_2(VAR_6);
  return VAR_2;
 case 128:

  VAR_6->pci_error_recovery = 1;
  FUNC_3(VAR_6);
  FUNC_0(VAR_6);
  return VAR_1;
 }
 return VAR_2;
}
