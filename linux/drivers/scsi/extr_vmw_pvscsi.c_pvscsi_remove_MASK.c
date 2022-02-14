
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pvscsi_adapter {int dummy; } ;
struct pci_dev {int dummy; } ;
struct Scsi_Host {int dummy; } ;


 int FUNC_0 (struct pvscsi_adapter*) ;
 int FUNC_1 (struct pci_dev*) ;
 struct Scsi_Host* FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pvscsi_adapter*) ;
 int FUNC_4 (struct Scsi_Host*) ;
 int FUNC_5 (struct Scsi_Host*) ;
 struct pvscsi_adapter* FUNC_6 (struct Scsi_Host*) ;

__attribute__((used)) static void FUNC_7(struct pci_dev *VAR_0)
{
 struct Scsi_Host *VAR_1 = FUNC_2(VAR_0);
 struct pvscsi_adapter *VAR_2 = FUNC_6(VAR_1);

 FUNC_5(VAR_1);

 FUNC_0(VAR_2);
 FUNC_3(VAR_2);

 FUNC_4(VAR_1);

 FUNC_1(VAR_0);
}
