
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wd719x {int base; } ;
struct pci_dev {int dummy; } ;
struct Scsi_Host {int dummy; } ;


 int FUNC_0 (struct pci_dev*) ;
 struct Scsi_Host* FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct pci_dev*,int ) ;
 int FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct Scsi_Host*) ;
 int FUNC_5 (struct Scsi_Host*) ;
 struct wd719x* FUNC_6 (struct Scsi_Host*) ;
 int FUNC_7 (struct wd719x*) ;

__attribute__((used)) static void FUNC_8(struct pci_dev *VAR_0)
{
 struct Scsi_Host *VAR_1 = FUNC_1(VAR_0);
 struct wd719x *VAR_2 = FUNC_6(VAR_1);

 FUNC_5(VAR_1);
 FUNC_7(VAR_2);
 FUNC_2(VAR_0, VAR_2->base);
 FUNC_3(VAR_0);
 FUNC_0(VAR_0);

 FUNC_4(VAR_1);
}
