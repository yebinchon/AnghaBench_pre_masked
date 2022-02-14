
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct Scsi_Host {int dummy; } ;
struct AdapterControlBlock {struct pci_dev* pdev; int refresh_timer; int eternal_timer; int arcmsr_do_message_isr_bh; struct Scsi_Host* host; } ;


 int FUNC_0 (struct AdapterControlBlock*) ;
 int FUNC_1 (struct pci_dev*,struct AdapterControlBlock*) ;
 int FUNC_2 (struct AdapterControlBlock*) ;
 int FUNC_3 (struct AdapterControlBlock*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct pci_dev*) ;
 int FUNC_8 (struct Scsi_Host*) ;
 int FUNC_9 (struct Scsi_Host*) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_10(struct AdapterControlBlock *VAR_1)
{
 struct pci_dev *VAR_2;
 struct Scsi_Host *VAR_3;

 VAR_3 = VAR_1->host;
 FUNC_2(VAR_1);
 FUNC_9(VAR_3);
 FUNC_5(&VAR_1->arcmsr_do_message_isr_bh);
 FUNC_4(&VAR_1->eternal_timer);
 if (VAR_0)
  FUNC_4(&VAR_1->refresh_timer);
 VAR_2 = VAR_1->pdev;
 FUNC_1(VAR_2, VAR_1);
 FUNC_0(VAR_1);
 FUNC_3(VAR_1);
 FUNC_7(VAR_2);
 FUNC_8(VAR_3);
 FUNC_6(VAR_2);
}
