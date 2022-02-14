
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct Scsi_Host {scalar_t__ hostdata; } ;
struct AdapterCtlBlk {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct AdapterCtlBlk*) ;
 int FUNC_1 (int ,char*,struct AdapterCtlBlk*) ;
 int FUNC_2 (struct pci_dev*) ;
 struct Scsi_Host* FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct Scsi_Host*) ;
 int FUNC_5 (struct Scsi_Host*) ;

__attribute__((used)) static void FUNC_6(struct pci_dev *VAR_1)
{
 struct Scsi_Host *VAR_2 = FUNC_3(VAR_1);
 struct AdapterCtlBlk *VAR_3 = (struct AdapterCtlBlk *)(VAR_2->hostdata);

 FUNC_1(VAR_0, "dc395x_remove_one: acb=%p\n", VAR_3);

 FUNC_5(VAR_2);
 FUNC_0(VAR_3);
 FUNC_2(VAR_1);
 FUNC_4(VAR_2);
}
