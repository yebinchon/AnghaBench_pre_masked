
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct Scsi_Host {int dummy; } ;
struct NCR5380_hostdata {unsigned long base; } ;


 int VAR_0 ;
 int FUNC_0 (struct Scsi_Host*) ;
 int FUNC_1 (struct pci_dev*) ;
 struct Scsi_Host* FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (unsigned long,int ) ;
 int FUNC_4 (struct Scsi_Host*) ;
 int FUNC_5 (struct Scsi_Host*) ;
 struct NCR5380_hostdata* FUNC_6 (struct Scsi_Host*) ;

__attribute__((used)) static void FUNC_7(struct pci_dev *VAR_1)
{
 struct Scsi_Host *VAR_2 = FUNC_2(VAR_1);
 struct NCR5380_hostdata *VAR_3 = FUNC_6(VAR_2);
 unsigned long VAR_4 = VAR_3->base;

 FUNC_5(VAR_2);

 FUNC_0(VAR_2);
 FUNC_4(VAR_2);
 FUNC_3(VAR_4, VAR_0);
 FUNC_1(VAR_1);
}
