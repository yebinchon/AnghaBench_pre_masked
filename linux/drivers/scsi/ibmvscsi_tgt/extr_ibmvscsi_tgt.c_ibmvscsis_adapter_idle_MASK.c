
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int timer_pops; } ;
struct TYPE_3__ {int enabled; } ;
struct scsi_info {int flags; int state; int resume_state; scalar_t__ phyp_acr_state; int phyp_acr_flags; int new_state; int dev; int credit; int debit; TYPE_2__ rsp_q_timer; TYPE_1__ tport; int unconfig; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

 int VAR_8 ;
 int VAR_9 ;

 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,int,...) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 () ;
 int FUNC_4 (struct scsi_info*) ;
 int FUNC_5 (struct scsi_info*) ;
 int FUNC_6 (struct scsi_info*) ;
 int FUNC_7 (struct scsi_info*,scalar_t__,int ) ;
 long FUNC_8 (struct scsi_info*,int) ;
 int FUNC_9 (struct scsi_info*) ;
 int FUNC_10 () ;

__attribute__((used)) static void FUNC_11(struct scsi_info *VAR_10)
{
 int VAR_11 = 0;
 long VAR_12 = 0;

 FUNC_1(&VAR_10->dev, "adapter_idle: flags 0x%x, state 0x%hx\n",
  VAR_10->flags, VAR_10->state);


 if (VAR_10->state != VAR_8 || VAR_10->flags & VAR_7)
  VAR_11 = 1;

 switch (VAR_10->state) {
 case 129:
  FUNC_5(VAR_10);
  FUNC_3();
  FUNC_10();
  if (VAR_10->flags & VAR_0) {
   VAR_10->flags &= ~VAR_0;
   FUNC_0(&VAR_10->unconfig);
  }
  break;
 case 130:
  FUNC_9(VAR_10);
  FUNC_1(&VAR_10->dev, "adapter_idle, disc_rec: flags 0x%x\n",
   VAR_10->flags);
  break;

 case 132:
  FUNC_5(VAR_10);
  VAR_10->flags &= ~(VAR_6 | VAR_2);
  VAR_10->flags |= VAR_5;
  if (VAR_10->tport.enabled)
   VAR_10->state = 131;
  else
   VAR_10->state = VAR_9;
  FUNC_1(&VAR_10->dev, "adapter_idle, disc: flags 0x%x, state 0x%hx\n",
   VAR_10->flags, VAR_10->state);
  break;

 case 128:
  VAR_10->rsp_q_timer.timer_pops = 0;
  VAR_10->debit = 0;
  VAR_10->credit = 0;
  if (VAR_10->flags & VAR_3) {
   VAR_10->state = VAR_10->resume_state;
   VAR_10->resume_state = 0;
   VAR_12 = FUNC_8(VAR_10, 1);
   VAR_10->flags &= ~VAR_2;
   if (VAR_12)
    break;
  } else if (VAR_10->flags & VAR_7) {
   VAR_10->state = VAR_8;
   VAR_10->flags &= VAR_4;
  } else {
   VAR_10->state = VAR_1;
   VAR_10->flags &= ~VAR_2;
  }

  FUNC_1(&VAR_10->dev, "adapter_idle, wait: flags 0x%x, state 0x%hx\n",
   VAR_10->flags, VAR_10->state);
  FUNC_6(VAR_10);
  break;

 case 131:
  VAR_10->flags &= ~VAR_2;
  FUNC_1(&VAR_10->dev, "adapter_idle, disconnected: flags 0x%x, state 0x%hx\n",
   VAR_10->flags, VAR_10->state);
  break;

 default:
  FUNC_2(&VAR_10->dev, "adapter_idle: in invalid state %d\n",
   VAR_10->state);
  break;
 }

 if (VAR_11)
  FUNC_4(VAR_10);
 if (VAR_10->phyp_acr_state != 0) {





  VAR_10->flags |= VAR_10->phyp_acr_flags;
  FUNC_7(VAR_10, VAR_10->phyp_acr_state, 0);
  VAR_10->phyp_acr_state = 0;
  VAR_10->phyp_acr_flags = 0;

  FUNC_1(&VAR_10->dev, "adapter_idle: flags 0x%x, state 0x%hx, acr_flags 0x%x, acr_state 0x%hx\n",
   VAR_10->flags, VAR_10->state, VAR_10->phyp_acr_flags,
   VAR_10->phyp_acr_state);
 }

 FUNC_1(&VAR_10->dev, "Leaving adapter_idle: flags 0x%x, state 0x%hx, new_state 0x%x\n",
  VAR_10->flags, VAR_10->state, VAR_10->new_state);
}
