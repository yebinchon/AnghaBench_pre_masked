
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct pci_dev {int dummy; } ;
struct Scsi_Host {scalar_t__ hostdata; } ;
struct CommandControlBlock {scalar_t__ startdone; TYPE_1__* pcmd; } ;
struct AdapterControlBlock {int maxOutstanding; int maxFreeCCB; struct CommandControlBlock** pccb_pool; int ccboutstandingcount; int acb_flags; int refresh_timer; int eternal_timer; int arcmsr_do_message_isr_bh; } ;
struct TYPE_2__ {int result; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct AdapterControlBlock*) ;
 int FUNC_1 (struct CommandControlBlock*) ;
 int FUNC_2 (struct AdapterControlBlock*) ;
 int FUNC_3 (struct AdapterControlBlock*) ;
 int FUNC_4 (struct AdapterControlBlock*) ;
 int FUNC_5 (struct AdapterControlBlock*) ;
 int FUNC_6 (struct pci_dev*,struct AdapterControlBlock*) ;
 int FUNC_7 (struct AdapterControlBlock*) ;
 int FUNC_8 (struct AdapterControlBlock*) ;
 int FUNC_9 (struct AdapterControlBlock*) ;
 int FUNC_10 (struct AdapterControlBlock*) ;
 int FUNC_11 (struct AdapterControlBlock*) ;
 int FUNC_12 (struct AdapterControlBlock*) ;
 scalar_t__ FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int) ;
 int FUNC_17 (struct pci_dev*) ;
 struct Scsi_Host* FUNC_18 (struct pci_dev*) ;
 int FUNC_19 (struct pci_dev*,int ,int*) ;
 int FUNC_20 (struct pci_dev*) ;
 int FUNC_21 (struct Scsi_Host*) ;
 int FUNC_22 (struct Scsi_Host*) ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static void FUNC_23(struct pci_dev *VAR_8)
{
 struct Scsi_Host *VAR_9 = FUNC_18(VAR_8);
 struct AdapterControlBlock *VAR_10 =
  (struct AdapterControlBlock *) VAR_9->hostdata;
 int VAR_11 = 0;
 uint16_t VAR_12;

 FUNC_19(VAR_8, VAR_6, &VAR_12);
 if (VAR_12 == 0xffff) {
  VAR_10->acb_flags &= ~VAR_1;
  VAR_10->acb_flags |= VAR_0;
  FUNC_10(VAR_10);
  FUNC_7(VAR_10);
  return;
 }
 FUNC_8(VAR_10);
 FUNC_22(VAR_9);
 FUNC_15(&VAR_10->arcmsr_do_message_isr_bh);
 FUNC_14(&VAR_10->eternal_timer);
 if (VAR_7)
  FUNC_14(&VAR_10->refresh_timer);
 FUNC_2(VAR_10);
 FUNC_11(VAR_10);
 FUNC_4(VAR_10);
 VAR_10->acb_flags |= VAR_2;
 VAR_10->acb_flags &= ~VAR_1;

 for (VAR_11 = 0; VAR_11 < VAR_10->maxOutstanding; VAR_11++){
  if (!FUNC_13(&VAR_10->ccboutstandingcount))
   break;
  FUNC_9(VAR_10);
  FUNC_16(25);
 }

 if (FUNC_13(&VAR_10->ccboutstandingcount)) {
  int VAR_13;

  FUNC_0(VAR_10);
  FUNC_3(VAR_10);
  for (VAR_13 = 0; VAR_13 < VAR_10->maxFreeCCB; VAR_13++) {
   struct CommandControlBlock *VAR_14 = VAR_10->pccb_pool[VAR_13];
   if (VAR_14->startdone == VAR_4) {
    VAR_14->startdone = VAR_3;
    VAR_14->pcmd->result = VAR_5 << 16;
    FUNC_1(VAR_14);
   }
  }
 }
 FUNC_6(VAR_8, VAR_10);
 FUNC_5(VAR_10);
 FUNC_12(VAR_10);
 FUNC_20(VAR_8);
 FUNC_21(VAR_9);
 FUNC_17(VAR_8);
}
