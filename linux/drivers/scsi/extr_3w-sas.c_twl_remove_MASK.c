
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct TYPE_5__ {int kobj; } ;
struct Scsi_Host {TYPE_1__ shost_dev; scalar_t__ hostdata; } ;
struct TYPE_6__ {int host; int base_addr; int flags; int online; } ;
typedef TYPE_2__ TW_Device_Extension ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*) ;
 struct Scsi_Host* FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *,int *) ;
 scalar_t__ FUNC_9 (int ,int *) ;
 int VAR_1 ;
 int FUNC_10 (TYPE_2__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_11 (int,char*) ;

__attribute__((used)) static void FUNC_12(struct pci_dev *VAR_5)
{
 struct Scsi_Host *VAR_6 = FUNC_4(VAR_5);
 TW_Device_Extension *VAR_7;

 if (!VAR_6)
  return;

 VAR_7 = (TW_Device_Extension *)VAR_6->hostdata;

 if (!VAR_7->online)
  return;


 FUNC_8(&VAR_6->shost_dev.kobj, &VAR_3);
 FUNC_8(&VAR_6->shost_dev.kobj, &VAR_4);

 FUNC_7(VAR_7->host);


 if (VAR_2 >= 0) {
  FUNC_11(VAR_2, "twl");
  VAR_2 = -1;
 }


 FUNC_0(VAR_7);


 if (FUNC_9(VAR_0, &VAR_7->flags))
  FUNC_3(VAR_5);


 FUNC_1(VAR_7->base_addr);


 FUNC_5(VAR_5);


 FUNC_10(VAR_7);

 FUNC_6(VAR_7->host);
 FUNC_2(VAR_5);
 VAR_1--;
}
