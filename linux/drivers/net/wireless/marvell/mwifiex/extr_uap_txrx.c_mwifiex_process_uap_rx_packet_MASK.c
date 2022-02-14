
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u16 ;
struct uap_rxpd {size_t priority; int seq_num; int rx_pkt_type; int rx_pkt_length; int rx_pkt_offset; } ;
struct sk_buff {scalar_t__ len; scalar_t__ data; } ;
struct TYPE_4__ {int h_source; } ;
struct rx_packet_hdr {TYPE_1__ eth803_hdr; } ;
struct TYPE_5__ {int tx_failed; } ;
struct mwifiex_sta_node {scalar_t__* rx_seq; TYPE_2__ stats; } ;
struct TYPE_6__ {int rx_dropped; } ;
struct mwifiex_private {TYPE_3__ stats; int ap_11n_enabled; int sta_list_spinlock; struct mwifiex_adapter* adapter; } ;
struct mwifiex_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (scalar_t__*,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct mwifiex_private*,size_t,scalar_t__*) ;
 int FUNC_4 (struct mwifiex_private*,scalar_t__,size_t,scalar_t__*,scalar_t__,struct sk_buff*) ;
 int FUNC_5 (struct mwifiex_adapter*,int ,char*,...) ;
 struct mwifiex_sta_node* FUNC_6 (struct mwifiex_private*,scalar_t__*) ;
 int FUNC_7 (struct mwifiex_private*,struct sk_buff*) ;
 int FUNC_8 (struct mwifiex_private*,struct sk_buff*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

int FUNC_11(struct mwifiex_private *VAR_7,
      struct sk_buff *VAR_8)
{
 struct mwifiex_adapter *VAR_9 = VAR_7->adapter;
 int VAR_10;
 struct uap_rxpd *VAR_11;
 struct rx_packet_hdr *VAR_12;
 u16 VAR_13;
 u8 VAR_14[VAR_2], VAR_15;
 struct mwifiex_sta_node *VAR_16;

 VAR_11 = (struct uap_rxpd *)(VAR_8->data);
 VAR_13 = FUNC_2(VAR_11->rx_pkt_type);
 VAR_12 = (void *)VAR_11 + FUNC_2(VAR_11->rx_pkt_offset);

 FUNC_1(VAR_14, VAR_12->eth803_hdr.h_source);

 if ((FUNC_2(VAR_11->rx_pkt_offset) +
      FUNC_2(VAR_11->rx_pkt_length)) > (u16) VAR_8->len) {
  FUNC_5(VAR_9, VAR_1,
       "wrong rx packet: len=%d, offset=%d, length=%d\n",
       VAR_8->len, FUNC_2(VAR_11->rx_pkt_offset),
       FUNC_2(VAR_11->rx_pkt_length));
  VAR_7->stats.rx_dropped++;

  VAR_16 = FUNC_6(VAR_7, VAR_14);
  if (VAR_16)
   VAR_16->stats.tx_failed++;

  FUNC_0(VAR_8);
  return 0;
 }

 if (VAR_13 == VAR_6) {
  VAR_10 = FUNC_8(VAR_7, VAR_8);
  if (VAR_10)
   FUNC_5(VAR_9, VAR_0, "Rx of mgmt packet failed");
  FUNC_0(VAR_8);
  return VAR_10;
 }


 if (VAR_13 != VAR_5 && VAR_11->priority < VAR_3) {
  FUNC_9(&VAR_7->sta_list_spinlock);
  VAR_16 = FUNC_6(VAR_7, VAR_14);
  if (VAR_16)
   VAR_16->rx_seq[VAR_11->priority] =
      FUNC_2(VAR_11->seq_num);
  FUNC_10(&VAR_7->sta_list_spinlock);
 }

 if (!VAR_7->ap_11n_enabled ||
     (!FUNC_3(VAR_7, VAR_11->priority, VAR_14) &&
     (FUNC_2(VAR_11->rx_pkt_type) != VAR_4))) {
  VAR_10 = FUNC_7(VAR_7, VAR_8);
  return VAR_10;
 }


 VAR_15 = (u8)FUNC_2(VAR_11->rx_pkt_type);
 VAR_10 = FUNC_4(VAR_7, FUNC_2(VAR_11->seq_num),
      VAR_11->priority, VAR_14, VAR_15,
      VAR_8);

 if (VAR_10 || (VAR_13 == VAR_5))
  FUNC_0(VAR_8);

 if (VAR_10)
  VAR_7->stats.rx_dropped++;

 return VAR_10;
}
