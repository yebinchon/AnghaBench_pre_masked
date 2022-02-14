
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_cmnd {int* cmnd; } ;
struct MPT3SAS_ADAPTER {scalar_t__ hba_mpi_version_belonged; scalar_t__ remove_host; scalar_t__ pci_error_recovery; } ;


 scalar_t__ VAR_0 ;



inline bool FUNC_0(struct MPT3SAS_ADAPTER *VAR_1,
 struct scsi_cmnd *VAR_2)
{

 if (VAR_1->pci_error_recovery)
  return 0;

 if (VAR_1->hba_mpi_version_belonged == VAR_0) {
  if (VAR_1->remove_host)
   return 0;

  return 1;
 }

 if (VAR_1->remove_host) {

  switch (VAR_2->cmnd[0]) {
  case 128:
  case 129:
   return 1;
  default:
   return 0;
  }
 }

 return 1;
}
