
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ timer_pops; int started; int timer; } ;
struct scsi_info {int flags; int state; int dev; TYPE_1__ rsp_q_timer; } ;
typedef int ktime_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 long VAR_5 ;
 long VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int *,char*,int,int,scalar_t__) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (struct scsi_info*) ;
 int FUNC_4 (struct scsi_info*,int,int ) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static void FUNC_6(struct scsi_info *VAR_13, long VAR_14)
{
 ktime_t VAR_15;

 if (VAR_14 != VAR_6) {
  FUNC_3(VAR_13);

  if (VAR_14 == VAR_5)
   VAR_13->flags |= VAR_0;


  if (!(VAR_13->flags & VAR_8)) {
   VAR_13->flags |= VAR_8;
   if (!(VAR_13->state & (VAR_1 |
           VAR_3 |
           VAR_2 | VAR_10))) {
    FUNC_1(&VAR_13->dev, "snd_msg_failed: setting RESPONSE_Q_DOWN, state 0x%hx, flags 0x%x, rc %ld\n",
     VAR_13->state, VAR_13->flags, VAR_14);
   }
   FUNC_4(VAR_13,
        VAR_3, 0);
  }
  return;
 }
 if ((VAR_13->rsp_q_timer.timer_pops < VAR_7) ||
     (VAR_13->state == VAR_9)) {
  FUNC_0(&VAR_13->dev, "snd_msg_failed: response queue full, flags 0x%x, timer started %d, pops %d\n",
   VAR_13->flags, (int)VAR_13->rsp_q_timer.started,
   VAR_13->rsp_q_timer.timer_pops);





  if (!VAR_13->rsp_q_timer.started) {
   if (VAR_13->rsp_q_timer.timer_pops <
       VAR_7) {
    VAR_15 = VAR_11;
   } else {




    VAR_15 = FUNC_5(VAR_12, 0);
   }

   VAR_13->rsp_q_timer.started = 1;
   FUNC_2(&VAR_13->rsp_q_timer.timer, VAR_15,
          VAR_4);
  }
 } else {
  VAR_13->flags |= VAR_8;
  FUNC_3(VAR_13);





  if (!(VAR_13->state & (VAR_1 |
          VAR_3 |
          VAR_2 | VAR_10))) {
   FUNC_1(&VAR_13->dev, "client crq full too long\n");
   FUNC_4(VAR_13,
        VAR_3,
        0);
  }
 }
}
