
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct Scsi_Host {scalar_t__ hostdata; } ;
struct TYPE_3__ {scalar_t__ online; } ;
typedef TYPE_1__ TW_Device_Extension ;


 int FUNC_0 (TYPE_1__*) ;
 struct Scsi_Host* FUNC_1 (struct pci_dev*) ;

__attribute__((used)) static void FUNC_2(struct pci_dev *VAR_0)
{
 struct Scsi_Host *VAR_1 = FUNC_1(VAR_0);
 TW_Device_Extension *VAR_2;

 if (!VAR_1)
  return;

 VAR_2 = (TW_Device_Extension *)VAR_1->hostdata;

 if (VAR_2->online)
  FUNC_0(VAR_2);
}
