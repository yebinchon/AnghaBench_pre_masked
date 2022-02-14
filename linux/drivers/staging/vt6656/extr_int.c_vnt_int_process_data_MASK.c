
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int in_use; scalar_t__ data_buf; } ;
struct ieee80211_low_level_stats {int dot11FCSErrorCount; int dot11ACKFailureCount; int dot11RTSFailureCount; int dot11RTSSuccessCount; } ;
struct vnt_private {scalar_t__ op_mode; int wake_up_count; TYPE_4__ int_buf; int current_tsf; TYPE_3__* hw; TYPE_1__* usb; struct ieee80211_low_level_stats low_stats; } ;
struct vnt_interrupt_data {int tsr0; int tsr1; int tsr2; int tsr3; int isr0; scalar_t__ fcs_err; scalar_t__ ack_fail; scalar_t__ rts_fail; scalar_t__ rts_success; int tsf; int pkt3; int pkt2; int pkt1; int pkt0; } ;
struct TYPE_6__ {int flags; int listen_interval; } ;
struct TYPE_7__ {TYPE_2__ conf; } ;
struct TYPE_5__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct vnt_private*,int ,int) ;
 int FUNC_3 (struct vnt_private*,int ) ;

void FUNC_4(struct vnt_private *VAR_7)
{
 struct vnt_interrupt_data *VAR_8;
 struct ieee80211_low_level_stats *VAR_9 = &VAR_7->low_stats;

 FUNC_0(&VAR_7->usb->dev, "---->s_nsInterruptProcessData\n");

 VAR_8 = (struct vnt_interrupt_data *)VAR_7->int_buf.data_buf;

 if (VAR_8->tsr0 & VAR_4)
  FUNC_2(VAR_7, VAR_8->pkt0, VAR_8->tsr0);

 if (VAR_8->tsr1 & VAR_4)
  FUNC_2(VAR_7, VAR_8->pkt1, VAR_8->tsr1);

 if (VAR_8->tsr2 & VAR_4)
  FUNC_2(VAR_7, VAR_8->pkt2, VAR_8->tsr2);

 if (VAR_8->tsr3 & VAR_4)
  FUNC_2(VAR_7, VAR_8->pkt3, VAR_8->tsr3);

 if (VAR_8->isr0 != 0) {
  if (VAR_8->isr0 & VAR_1 &&
      VAR_7->op_mode == VAR_3)
   FUNC_3(VAR_7, VAR_5);

  if (VAR_8->isr0 & VAR_2 &&
      VAR_7->hw->conf.flags & VAR_0) {
   if (!VAR_7->wake_up_count)
    VAR_7->wake_up_count =
     VAR_7->hw->conf.listen_interval;

   --VAR_7->wake_up_count;


   if (VAR_7->wake_up_count == 1)
    FUNC_3(VAR_7,
           VAR_6);
  }
  VAR_7->current_tsf = FUNC_1(VAR_8->tsf);

  VAR_9->dot11RTSSuccessCount += VAR_8->rts_success;
  VAR_9->dot11RTSFailureCount += VAR_8->rts_fail;
  VAR_9->dot11ACKFailureCount += VAR_8->ack_fail;
  VAR_9->dot11FCSErrorCount += VAR_8->fcs_err;
 }

 VAR_7->int_buf.in_use = 0;
}
