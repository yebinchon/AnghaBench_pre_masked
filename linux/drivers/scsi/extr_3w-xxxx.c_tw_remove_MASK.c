
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct Scsi_Host {scalar_t__ hostdata; } ;
struct TYPE_4__ {int host; } ;
typedef TYPE_1__ TW_Device_Extension ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct pci_dev*) ;
 struct Scsi_Host* FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_0 ;
 int FUNC_6 (TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_7 (int,char*) ;

__attribute__((used)) static void FUNC_8(struct pci_dev *VAR_2)
{
 struct Scsi_Host *VAR_3 = FUNC_2(VAR_2);
 TW_Device_Extension *VAR_4 = (TW_Device_Extension *)VAR_3->hostdata;

 FUNC_5(VAR_4->host);


 if (VAR_1 >= 0) {
  FUNC_7(VAR_1, "twe");
  VAR_1 = -1;
 }


 FUNC_0(VAR_4);


 FUNC_3(VAR_2);


 FUNC_6(VAR_4);

 FUNC_4(VAR_4->host);
 FUNC_1(VAR_2);
 VAR_0--;
}
