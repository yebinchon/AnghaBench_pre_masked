
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int timer; } ;
struct sym_hcb {TYPE_1__ s; } ;
struct pci_dev {int dummy; } ;
struct Scsi_Host {int dummy; } ;


 int FUNC_0 (struct sym_hcb*,int ) ;
 int FUNC_1 (struct sym_hcb*,int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (struct Scsi_Host*) ;
 int FUNC_5 (struct sym_hcb*,struct pci_dev*,int) ;
 struct sym_hcb* FUNC_6 (struct Scsi_Host*) ;
 int FUNC_7 (struct sym_hcb*) ;
 int FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(struct Scsi_Host *VAR_3, struct pci_dev *VAR_4)
{
 struct sym_hcb *VAR_5 = FUNC_6(VAR_3);
 FUNC_3("%s: detaching ...\n", FUNC_7(VAR_5));

 FUNC_2(&VAR_5->s.timer);






 FUNC_3("%s: resetting chip\n", FUNC_7(VAR_5));
 FUNC_1(VAR_5, VAR_1, VAR_0);
 FUNC_0(VAR_5, VAR_2);
 FUNC_8(10);
 FUNC_1(VAR_5, VAR_1, 0);

 FUNC_5(VAR_5, VAR_4, 1);
 FUNC_4(VAR_3);

 return 1;
}
