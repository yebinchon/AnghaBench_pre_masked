
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u16 ;
struct uap_txpd {size_t priority; void* tx_control; void* tx_pkt_offset; void* tx_pkt_type; int flags; int tx_token_id; int pkt_delay_2ms; void* tx_pkt_length; int bss_type; int bss_num; } ;
struct sk_buff {int len; void* data; scalar_t__ priority; } ;
struct mwifiex_txinfo {int status_code; int flags; int ack_frame_id; } ;
struct TYPE_2__ {int * user_pri_pkt_tx_ctrl; } ;
struct mwifiex_private {int pkt_tx_ctrl; TYPE_1__ wmm; int bss_type; int bss_num; struct mwifiex_adapter* adapter; } ;
struct mwifiex_adapter {int intf_hdr_len; } ;


 size_t FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 struct mwifiex_txinfo* FUNC_2 (struct sk_buff*) ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_3 (int) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (struct uap_txpd*,int ,int) ;
 int FUNC_6 (struct mwifiex_adapter*,int ,char*,int) ;
 scalar_t__ FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct mwifiex_private*,struct sk_buff*) ;
 scalar_t__ FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (struct sk_buff*,int) ;

void *FUNC_11(struct mwifiex_private *VAR_8,
          struct sk_buff *VAR_9)
{
 struct mwifiex_adapter *VAR_10 = VAR_8->adapter;
 struct uap_txpd *VAR_11;
 struct mwifiex_txinfo *VAR_12 = FUNC_2(VAR_9);
 int VAR_13;
 u16 VAR_14, VAR_15;
 int VAR_16 = VAR_10->intf_hdr_len;

 if (!VAR_9->len) {
  FUNC_6(VAR_10, VAR_0,
       "Tx: bad packet length: %d\n", VAR_9->len);
  VAR_12->status_code = -1;
  return VAR_9->data;
 }

 FUNC_1(FUNC_9(VAR_9) < VAR_5);

 VAR_14 = FUNC_7(VAR_9) ? VAR_7 : 0;

 VAR_13 = ((void *)VAR_9->data - (sizeof(*VAR_11) + VAR_16) - ((void*)0)) &
   (VAR_3 - 1);

 FUNC_10(VAR_9, sizeof(*VAR_11) + VAR_13);

 VAR_11 = (struct uap_txpd *)VAR_9->data;
 FUNC_5(VAR_11, 0, sizeof(*VAR_11));
 VAR_11->bss_num = VAR_8->bss_num;
 VAR_11->bss_type = VAR_8->bss_type;
 VAR_11->tx_pkt_length = FUNC_3((u16)(VAR_9->len - (sizeof(*VAR_11) +
      VAR_13)));
 VAR_11->priority = (u8)VAR_9->priority;

 VAR_11->pkt_delay_2ms = FUNC_8(VAR_8, VAR_9);

 if (VAR_12->flags & VAR_2 ||
     VAR_12->flags & VAR_1) {
  VAR_11->tx_token_id = VAR_12->ack_frame_id;
  VAR_11->flags |= VAR_6;
 }

 if (VAR_11->priority < FUNC_0(VAR_8->wmm.user_pri_pkt_tx_ctrl))




  VAR_11->tx_control =
      FUNC_4(VAR_8->wmm.user_pri_pkt_tx_ctrl[VAR_11->priority]);


 VAR_15 = sizeof(*VAR_11) + VAR_13;
 if (VAR_14 == VAR_7) {

  VAR_11->tx_pkt_type = FUNC_3(VAR_14);
  VAR_15 += VAR_4;
 }

 VAR_11->tx_pkt_offset = FUNC_3(VAR_15);


 FUNC_10(VAR_9, VAR_16);

 if (!VAR_11->tx_control)

  VAR_11->tx_control = FUNC_4(VAR_8->pkt_tx_ctrl);

 return VAR_9->data;
}
