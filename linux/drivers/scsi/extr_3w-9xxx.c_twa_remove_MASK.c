
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct Scsi_Host {scalar_t__ hostdata; } ;
struct TYPE_4__ {int host; int base_addr; int flags; } ;
typedef TYPE_1__ TW_Device_Extension ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*) ;
 struct Scsi_Host* FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ,int *) ;
 int VAR_1 ;
 int FUNC_9 (TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_10 (int,char*) ;

__attribute__((used)) static void FUNC_11(struct pci_dev *VAR_3)
{
 struct Scsi_Host *VAR_4 = FUNC_4(VAR_3);
 TW_Device_Extension *VAR_5 = (TW_Device_Extension *)VAR_4->hostdata;

 FUNC_7(VAR_5->host);


 if (VAR_2 >= 0) {
  FUNC_10(VAR_2, "twa");
  VAR_2 = -1;
 }


 FUNC_0(VAR_5);


 if (FUNC_8(VAR_0, &VAR_5->flags))
  FUNC_3(VAR_3);


 FUNC_1(VAR_5->base_addr);


 FUNC_5(VAR_3);


 FUNC_9(VAR_5);

 FUNC_6(VAR_5->host);
 FUNC_2(VAR_3);
 VAR_1--;
}
