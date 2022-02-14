
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint ;
typedef scalar_t__ u8 ;
struct viosrp_crq {scalar_t__ valid; } ;
struct TYPE_2__ {int index; int mask; struct viosrp_crq* base_addr; } ;
struct scsi_info {long flags; int state; int intr_lock; int schedule_q; int dev; TYPE_1__ cmd_q; int dma_dev; } ;


 scalar_t__ VAR_0 ;
 long VAR_1 ;
 scalar_t__ FUNC_0 (struct scsi_info*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 () ;
 long FUNC_3 (struct scsi_info*,struct viosrp_crq*) ;
 long FUNC_4 (struct scsi_info*,struct viosrp_crq*) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(unsigned long VAR_4)
{
 struct scsi_info *VAR_5 = (struct scsi_info *)VAR_4;
 struct viosrp_crq *VAR_6;
 long VAR_7;
 bool VAR_8 = 1;
 volatile u8 VAR_9;

 FUNC_6(&VAR_5->intr_lock);

 FUNC_1(&VAR_5->dev, "got interrupt\n");






 if (FUNC_0(VAR_5)) {
  FUNC_8(VAR_5->dma_dev);

  FUNC_1(&VAR_5->dev, "handle_crq, don't process: flags 0x%x, state 0x%hx\n",
   VAR_5->flags, VAR_5->state);
  FUNC_7(&VAR_5->intr_lock);
  return;
 }

 VAR_7 = VAR_5->flags & VAR_1;
 VAR_6 = VAR_5->cmd_q.base_addr + VAR_5->cmd_q.index;
 VAR_9 = VAR_6->valid;
 FUNC_2();

 while (VAR_9) {






cmd_work:
  VAR_5->cmd_q.index =
   (VAR_5->cmd_q.index + 1) & VAR_5->cmd_q.mask;

  if (!VAR_7) {
   VAR_7 = FUNC_3(VAR_5, VAR_6);
  } else {
   if ((uint)VAR_6->valid == VAR_3) {






    VAR_7 = FUNC_4(VAR_5, VAR_6);
   } else if (VAR_5->flags & VAR_2) {







    if (VAR_5->cmd_q.index)
     VAR_5->cmd_q.index -= 1;
    else




     VAR_5->cmd_q.index = VAR_5->cmd_q.mask;
    break;
   }
  }

  VAR_6->valid = VAR_0;

  VAR_6 = VAR_5->cmd_q.base_addr + VAR_5->cmd_q.index;
  VAR_9 = VAR_6->valid;
  FUNC_2();
 }

 if (!VAR_7) {
  if (VAR_8) {
   FUNC_8(VAR_5->dma_dev);
   VAR_8 = 0;
   FUNC_1(&VAR_5->dev, "handle_crq, reenabling interrupts\n");
  }
  VAR_9 = VAR_6->valid;
  FUNC_2();
  if (VAR_9)
   goto cmd_work;
 } else {
  FUNC_1(&VAR_5->dev, "handle_crq, error: flags 0x%x, state 0x%hx, crq index 0x%x\n",
   VAR_5->flags, VAR_5->state, VAR_5->cmd_q.index);
 }

 FUNC_1(&VAR_5->dev, "Leaving handle_crq: schedule_q empty %d, flags 0x%x, state 0x%hx\n",
  (int)FUNC_5(&VAR_5->schedule_q), VAR_5->flags,
  VAR_5->state);

 FUNC_7(&VAR_5->intr_lock);
}
