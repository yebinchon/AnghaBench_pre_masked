
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint ;
typedef scalar_t__ u8 ;
struct viosrp_crq {scalar_t__ valid; } ;
struct TYPE_2__ {int index; int mask; struct viosrp_crq* base_addr; } ;
struct scsi_info {long flags; int dev; int dma_dev; TYPE_1__ cmd_q; int state; } ;


 scalar_t__ VAR_0 ;
 long VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 () ;
 long FUNC_2 (struct scsi_info*,struct viosrp_crq*) ;
 long FUNC_3 (struct scsi_info*,struct viosrp_crq*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct scsi_info *VAR_4)
{
 struct viosrp_crq *VAR_5;
 long VAR_6;
 bool VAR_7 = 1;
 volatile u8 VAR_8;

 FUNC_0(&VAR_4->dev, "poll_cmd_q: flags 0x%x, state 0x%hx, q index %ud\n",
  VAR_4->flags, VAR_4->state, VAR_4->cmd_q.index);

 VAR_6 = VAR_4->flags & VAR_1;
 VAR_5 = VAR_4->cmd_q.base_addr + VAR_4->cmd_q.index;
 VAR_8 = VAR_5->valid;
 FUNC_1();

 while (VAR_8) {
poll_work:
  VAR_4->cmd_q.index =
   (VAR_4->cmd_q.index + 1) & VAR_4->cmd_q.mask;

  if (!VAR_6) {
   VAR_6 = FUNC_2(VAR_4, VAR_5);
  } else {
   if ((uint)VAR_5->valid == VAR_3) {






    VAR_6 = FUNC_3(VAR_4, VAR_5);
   } else if (VAR_4->flags & VAR_2) {




    FUNC_0(&VAR_4->dev, "poll_cmd_q, ignoring\n");





    if (VAR_4->cmd_q.index)
     VAR_4->cmd_q.index -= 1;
    else




     VAR_4->cmd_q.index = VAR_4->cmd_q.mask;
    break;
   }
  }

  VAR_5->valid = VAR_0;

  VAR_5 = VAR_4->cmd_q.base_addr + VAR_4->cmd_q.index;
  VAR_8 = VAR_5->valid;
  FUNC_1();
 }

 if (!VAR_6) {
  if (VAR_7) {
   FUNC_4(VAR_4->dma_dev);
   VAR_7 = 0;
   FUNC_0(&VAR_4->dev, "poll_cmd_q, reenabling interrupts\n");
  }
  VAR_8 = VAR_5->valid;
  FUNC_1();
  if (VAR_8)
   goto poll_work;
 }

 FUNC_0(&VAR_4->dev, "Leaving poll_cmd_q: rc %ld\n", VAR_6);
}
