
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct esas2r_adapter {int index; } ;
struct Scsi_Host {scalar_t__ hostdata; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,char*,struct pci_dev*,struct Scsi_Host*) ;
 int VAR_1 ;
 struct Scsi_Host* FUNC_2 (struct pci_dev*) ;

__attribute__((used)) static void FUNC_3(struct pci_dev *VAR_2)
{
 struct Scsi_Host *VAR_3 = FUNC_2(VAR_2);
 struct esas2r_adapter *VAR_4 = (struct esas2r_adapter *)VAR_3->hostdata;

 FUNC_1(VAR_0, &(VAR_2->dev),
         "esas2r_remove(%p) called; "
         "host:%p", VAR_2,
         VAR_3);

 FUNC_0(VAR_4->index);
 VAR_1--;
}
