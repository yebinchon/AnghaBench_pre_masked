
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_qla_host {int dummy; } ;
struct pci_dev {int dummy; } ;
typedef int pci_ers_result_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct scsi_qla_host*) ;
 struct scsi_qla_host* FUNC_1 (struct pci_dev*) ;

__attribute__((used)) static pci_ers_result_t
FUNC_2(struct pci_dev *VAR_2)
{
 struct scsi_qla_host *VAR_3 = FUNC_1(VAR_2);

 if (!FUNC_0(VAR_3))
  return VAR_0;

 return VAR_1;
}
