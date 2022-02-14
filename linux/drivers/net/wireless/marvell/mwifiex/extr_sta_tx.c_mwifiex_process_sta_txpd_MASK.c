
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u16 ;
struct txpd {size_t priority; void* tx_control; void* tx_pkt_offset; void* tx_pkt_type; int flags; int tx_token_id; int pkt_delay_2ms; void* tx_pkt_length; int bss_type; int bss_num; } ;
struct sk_buff {int len; void* data; scalar_t__ priority; } ;
struct mwifiex_txinfo {int status_code; int flags; int ack_frame_id; } ;
struct TYPE_2__ {int * user_pri_pkt_tx_ctrl; } ;
struct mwifiex_private {int pkt_tx_ctrl; TYPE_1__ wmm; int bss_type; int bss_num; struct mwifiex_adapter* adapter; } ;
struct mwifiex_adapter {int intf_hdr_len; int tx_lock_flag; scalar_t__ pps_uapsd_mode; } ;


 size_t FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 struct mwifiex_txinfo* FUNC_2 (struct sk_buff*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 void* FUNC_3 (int) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (struct txpd*,int ,int) ;
 scalar_t__ FUNC_6 (struct mwifiex_private*) ;
 int FUNC_7 (struct mwifiex_adapter*,int ,char*,int) ;
 scalar_t__ FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (struct mwifiex_private*,struct sk_buff*) ;
 scalar_t__ FUNC_10 (struct sk_buff*) ;
 int FUNC_11 (struct sk_buff*,int) ;

void *FUNC_12(struct mwifiex_private *VAR_11,
    struct sk_buff *VAR_12)
{
 struct mwifiex_adapter *VAR_13 = VAR_11->adapter;
 struct txpd *VAR_14;
 struct mwifiex_txinfo *VAR_15 = FUNC_2(VAR_12);
 unsigned int VAR_16;
 u16 VAR_17, VAR_18;
 int VAR_19 = VAR_13->intf_hdr_len;

 if (!VAR_12->len) {
  FUNC_7(VAR_13, VAR_0,
       "Tx: bad packet length: %d\n", VAR_12->len);
  VAR_15->status_code = -1;
  return VAR_12->data;
 }

 FUNC_1(FUNC_10(VAR_12) < VAR_6);

 VAR_17 = FUNC_8(VAR_12) ? VAR_10 : 0;

 VAR_16 = ((void *)VAR_12->data - (sizeof(*VAR_14) + VAR_19)-
    ((void*)0)) & (VAR_4 - 1);
 FUNC_11(VAR_12, sizeof(*VAR_14) + VAR_16);

 VAR_14 = (struct txpd *) VAR_12->data;
 FUNC_5(VAR_14, 0, sizeof(struct txpd));
 VAR_14->bss_num = VAR_11->bss_num;
 VAR_14->bss_type = VAR_11->bss_type;
 VAR_14->tx_pkt_length = FUNC_3((u16)(VAR_12->len -
             (sizeof(struct txpd) +
       VAR_16)));

 VAR_14->priority = (u8) VAR_12->priority;
 VAR_14->pkt_delay_2ms =
    FUNC_9(VAR_11, VAR_12);

 if (VAR_15->flags & VAR_2 ||
     VAR_15->flags & VAR_1) {
  VAR_14->tx_token_id = VAR_15->ack_frame_id;
  VAR_14->flags |= VAR_7;
 }

 if (VAR_14->priority <
     FUNC_0(VAR_11->wmm.user_pri_pkt_tx_ctrl))




  VAR_14->tx_control =
   FUNC_4(VAR_11->wmm.user_pri_pkt_tx_ctrl[VAR_14->
           priority]);

 if (VAR_13->pps_uapsd_mode) {
  if (FUNC_6(VAR_11)) {
   VAR_13->tx_lock_flag = 1;
   VAR_14->flags =
    VAR_9;
  }
 }

 if (VAR_15->flags & VAR_3)
  VAR_14->flags |= VAR_8;


 VAR_18 = sizeof(struct txpd) + VAR_16;
 if (VAR_17 == VAR_10) {

  VAR_14->tx_pkt_type = FUNC_3(VAR_17);
  VAR_18 += VAR_5;
 }

 VAR_14->tx_pkt_offset = FUNC_3(VAR_18);


 FUNC_11(VAR_12, VAR_19);

 if (!VAR_14->tx_control)

  VAR_14->tx_control = FUNC_4(VAR_11->pkt_tx_ctrl);

 return VAR_12->data;
}
