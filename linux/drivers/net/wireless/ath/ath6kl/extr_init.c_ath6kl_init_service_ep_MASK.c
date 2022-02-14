
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rx_refill_thresh; int rx_allocthresh; int rx_alloc_thresh; int tx_full; int rx_refill; int rx; int tx_comp_multi; } ;
struct htc_service_connect_req {int svc_id; int conn_flags; TYPE_1__ ep_cb; int max_rxmsg_sz; int flags; int max_txq_depth; } ;
struct ath6kl {int dummy; } ;
typedef int connect ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_0 (struct ath6kl*,struct htc_service_connect_req*,char*) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_1 (struct htc_service_connect_req*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct ath6kl *VAR_19)
{
 struct htc_service_connect_req VAR_20;

 FUNC_1(&VAR_20, 0, sizeof(VAR_20));


 VAR_20.ep_cb.tx_comp_multi = VAR_17;
 VAR_20.ep_cb.rx = VAR_15;
 VAR_20.ep_cb.rx_refill = VAR_16;
 VAR_20.ep_cb.tx_full = VAR_18;





 VAR_20.max_txq_depth = VAR_7;
 VAR_20.ep_cb.rx_refill_thresh = VAR_1 / 4;
 if (!VAR_20.ep_cb.rx_refill_thresh)
  VAR_20.ep_cb.rx_refill_thresh++;


 VAR_20.svc_id = VAR_8;
 if (FUNC_0(VAR_19, &VAR_20, "WMI CONTROL"))
  return -VAR_2;

 VAR_20.flags |= VAR_6;






 VAR_20.max_rxmsg_sz = VAR_13;






 VAR_20.ep_cb.rx_alloc_thresh = VAR_0;
 VAR_20.ep_cb.rx_allocthresh = VAR_14;





 VAR_20.conn_flags |= VAR_3;
 VAR_20.conn_flags &= ~VAR_5;
 VAR_20.conn_flags |= VAR_4;

 VAR_20.svc_id = VAR_9;

 if (FUNC_0(VAR_19, &VAR_20, "WMI DATA BE"))
  return -VAR_2;


 VAR_20.svc_id = VAR_10;
 if (FUNC_0(VAR_19, &VAR_20, "WMI DATA BK"))
  return -VAR_2;


 VAR_20.svc_id = VAR_11;
 if (FUNC_0(VAR_19, &VAR_20, "WMI DATA VI"))
  return -VAR_2;
 VAR_20.svc_id = VAR_12;
 if (FUNC_0(VAR_19, &VAR_20, "WMI DATA VO"))
  return -VAR_2;

 return 0;
}
