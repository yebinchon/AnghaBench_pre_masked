
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct Scsi_Host {int dummy; } ;
typedef int pci_ers_result_t ;


 int VAR_0 ;
 struct Scsi_Host* FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (struct Scsi_Host*) ;

__attribute__((used)) static pci_ers_result_t FUNC_2(struct pci_dev *VAR_1)
{
 struct Scsi_Host *VAR_2 = FUNC_0(VAR_1);

 FUNC_1(VAR_2);


 return VAR_0;
}
