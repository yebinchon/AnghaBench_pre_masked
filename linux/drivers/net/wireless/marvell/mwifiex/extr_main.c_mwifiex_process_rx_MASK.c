
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct mwifiex_rxinfo {scalar_t__ buf_type; } ;
struct TYPE_2__ {int (* deaggr_pkt ) (struct mwifiex_adapter*,struct sk_buff*) ;int (* submit_rem_rx_urbs ) (struct mwifiex_adapter*) ;} ;
struct mwifiex_adapter {int rx_processing; int delay_main_work; scalar_t__ iface_type; int rx_proc_lock; TYPE_1__ if_ops; int rx_pending; int rx_data_q; scalar_t__ rx_locked; } ;


 scalar_t__ VAR_0 ;
 struct mwifiex_rxinfo* FUNC_0 (struct sk_buff*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct mwifiex_adapter*,struct sk_buff*) ;
 int FUNC_5 (struct mwifiex_adapter*) ;
 struct sk_buff* FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct mwifiex_adapter*) ;
 int FUNC_10 (struct mwifiex_adapter*,struct sk_buff*) ;

__attribute__((used)) static int FUNC_11(struct mwifiex_adapter *VAR_3)
{
 struct sk_buff *VAR_4;
 struct mwifiex_rxinfo *VAR_5;

 FUNC_7(&VAR_3->rx_proc_lock);
 if (VAR_3->rx_processing || VAR_3->rx_locked) {
  FUNC_8(&VAR_3->rx_proc_lock);
  goto exit_rx_proc;
 } else {
  VAR_3->rx_processing = 1;
  FUNC_8(&VAR_3->rx_proc_lock);
 }


 while ((VAR_4 = FUNC_6(&VAR_3->rx_data_q))) {
  FUNC_1(&VAR_3->rx_pending);
  if ((VAR_3->delay_main_work ||
       VAR_3->iface_type == VAR_2) &&
      (FUNC_2(&VAR_3->rx_pending) < VAR_0)) {
   if (VAR_3->if_ops.submit_rem_rx_urbs)
    VAR_3->if_ops.submit_rem_rx_urbs(VAR_3);
   VAR_3->delay_main_work = 0;
   FUNC_5(VAR_3);
  }
  VAR_5 = FUNC_0(VAR_4);
  if (VAR_5->buf_type == VAR_1) {
   if (VAR_3->if_ops.deaggr_pkt)
    VAR_3->if_ops.deaggr_pkt(VAR_3, VAR_4);
   FUNC_3(VAR_4);
  } else {
   FUNC_4(VAR_3, VAR_4);
  }
 }
 FUNC_7(&VAR_3->rx_proc_lock);
 VAR_3->rx_processing = 0;
 FUNC_8(&VAR_3->rx_proc_lock);

exit_rx_proc:
 return 0;
}
