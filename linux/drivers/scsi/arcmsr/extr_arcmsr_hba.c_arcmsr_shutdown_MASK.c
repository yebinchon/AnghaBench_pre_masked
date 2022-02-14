
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct Scsi_Host {scalar_t__ hostdata; } ;
struct AdapterControlBlock {int acb_flags; int arcmsr_do_message_isr_bh; int refresh_timer; int eternal_timer; } ;


 int VAR_0 ;
 int FUNC_0 (struct AdapterControlBlock*) ;
 int FUNC_1 (struct AdapterControlBlock*) ;
 int FUNC_2 (struct pci_dev*,struct AdapterControlBlock*) ;
 int FUNC_3 (struct AdapterControlBlock*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct Scsi_Host* FUNC_6 (struct pci_dev*) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void FUNC_7(struct pci_dev *VAR_2)
{
 struct Scsi_Host *VAR_3 = FUNC_6(VAR_2);
 struct AdapterControlBlock *VAR_4 =
  (struct AdapterControlBlock *)VAR_3->hostdata;
 if (VAR_4->acb_flags & VAR_0)
  return;
 FUNC_4(&VAR_4->eternal_timer);
 if (VAR_1)
  FUNC_4(&VAR_4->refresh_timer);
 FUNC_0(VAR_4);
 FUNC_2(VAR_2, VAR_4);
 FUNC_5(&VAR_4->arcmsr_do_message_isr_bh);
 FUNC_3(VAR_4);
 FUNC_1(VAR_4);
}
