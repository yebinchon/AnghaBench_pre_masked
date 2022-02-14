
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int size; int crq_token; } ;
struct TYPE_5__ {int unit_id; } ;
struct TYPE_4__ {scalar_t__ timer_pops; } ;
struct scsi_info {long flags; void* state; int dev; TYPE_3__ cmd_q; TYPE_2__ dds; int dma_dev; scalar_t__ credit; scalar_t__ debit; TYPE_1__ rsp_q_timer; } ;


 long VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 long VAR_3 ;
 long VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 int FUNC_0 (int *,char*,long) ;
 long FUNC_1 (int ,int ,int) ;
 long FUNC_2 (struct scsi_info*) ;
 long FUNC_3 (struct scsi_info*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct scsi_info *VAR_10)
{
 int VAR_11;
 long VAR_12 = VAR_0;

 FUNC_0(&VAR_10->dev, "reset_queue: flags 0x%x\n", VAR_10->flags);


 if (VAR_10->flags & (VAR_1 | VAR_8)) {
  VAR_10->flags &= VAR_6;
  VAR_10->rsp_q_timer.timer_pops = 0;
  VAR_10->debit = 0;
  VAR_10->credit = 0;
  VAR_10->state = VAR_9;
  FUNC_4(VAR_10->dma_dev);
 } else {
  VAR_12 = FUNC_3(VAR_10);
  if (VAR_12 == VAR_0) {
   VAR_10->state = VAR_9;

   VAR_11 = VAR_10->cmd_q.size * VAR_5;
   VAR_12 = FUNC_1(VAR_10->dds.unit_id,
           VAR_10->cmd_q.crq_token, VAR_11);
   if (VAR_12 == VAR_3 || VAR_12 == VAR_4) {
    VAR_12 = FUNC_2(VAR_10);
   }

   if (VAR_12 != VAR_0) {
    FUNC_0(&VAR_10->dev, "reset_queue: reg_crq rc %ld\n",
     VAR_12);

    VAR_10->state = VAR_2;
    VAR_10->flags |= VAR_7;
    FUNC_3(VAR_10);
   }
  } else {
   VAR_10->state = VAR_2;
   VAR_10->flags |= VAR_7;
  }
 }
}
