
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pvscsi_adapter {int dummy; } ;
struct pci_dev {int dummy; } ;
struct Scsi_Host {int dummy; } ;


 int FUNC_0 (struct pvscsi_adapter*) ;
 struct Scsi_Host* FUNC_1 (struct pci_dev*) ;
 struct pvscsi_adapter* FUNC_2 (struct Scsi_Host*) ;

__attribute__((used)) static void FUNC_3(struct pci_dev *VAR_0)
{
 struct Scsi_Host *VAR_1 = FUNC_1(VAR_0);
 struct pvscsi_adapter *VAR_2 = FUNC_2(VAR_1);

 FUNC_0(VAR_2);
}
