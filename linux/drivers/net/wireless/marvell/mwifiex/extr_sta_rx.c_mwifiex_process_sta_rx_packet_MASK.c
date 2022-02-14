
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct sk_buff {scalar_t__ len; scalar_t__ data; } ;
struct rxpd {int flags; size_t priority; int nf; int snr; int seq_num; int rx_pkt_length; int rx_pkt_offset; int rx_pkt_type; } ;
struct TYPE_5__ {int h_source; int h_dest; } ;
struct rx_packet_hdr {TYPE_1__ eth803_hdr; } ;
struct mwifiex_sta_node {void** rx_seq; } ;
struct TYPE_8__ {int rx_dropped; } ;
struct TYPE_6__ {int mac_address; } ;
struct TYPE_7__ {TYPE_2__ bss_descriptor; } ;
struct mwifiex_private {int* rx_seq; TYPE_4__ stats; TYPE_3__ curr_bss_params; struct mwifiex_adapter* adapter; int curr_addr; } ;
struct mwifiex_adapter {int fw_cap_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct mwifiex_private*) ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int ,int ) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (int *,int ,int) ;
 int FUNC_6 (struct mwifiex_private*,int,size_t,int *,int ,struct sk_buff*) ;
 int FUNC_7 (struct mwifiex_private*,int *,int ,int ) ;
 int FUNC_8 (struct mwifiex_adapter*,int ,char*,...) ;
 struct mwifiex_sta_node* FUNC_9 (struct mwifiex_private*,int *) ;
 int FUNC_10 (struct mwifiex_private*,struct sk_buff*) ;
 int FUNC_11 (struct mwifiex_private*,struct sk_buff*) ;
 scalar_t__ FUNC_12 (struct mwifiex_private*) ;

int FUNC_13(struct mwifiex_private *VAR_7,
      struct sk_buff *VAR_8)
{
 struct mwifiex_adapter *VAR_9 = VAR_7->adapter;
 int VAR_10 = 0;
 struct rxpd *VAR_11;
 struct rx_packet_hdr *VAR_12;
 u8 VAR_13[VAR_2];
 u16 VAR_14, VAR_15, VAR_16, VAR_17;
 struct mwifiex_sta_node *VAR_18;

 VAR_11 = (struct rxpd *) (VAR_8->data);
 VAR_14 = FUNC_4(VAR_11->rx_pkt_type);
 VAR_15 = FUNC_4(VAR_11->rx_pkt_offset);
 VAR_16 = FUNC_4(VAR_11->rx_pkt_length);
 VAR_17 = FUNC_4(VAR_11->seq_num);

 VAR_12 = (void *)VAR_11 + VAR_15;

 if ((VAR_15 + VAR_16) > (u16) VAR_8->len) {
  FUNC_8(VAR_9, VAR_1,
       "wrong rx packet: len=%d, rx_pkt_offset=%d, rx_pkt_length=%d\n",
       VAR_8->len, VAR_15, VAR_16);
  VAR_7->stats.rx_dropped++;
  FUNC_2(VAR_8);
  return VAR_10;
 }

 if (VAR_14 == VAR_6) {
  VAR_10 = FUNC_10(VAR_7, VAR_8);
  if (VAR_10)
   FUNC_8(VAR_9, VAR_0, "Rx of mgmt packet failed");
  FUNC_2(VAR_8);
  return VAR_10;
 }





 if ((!FUNC_1(VAR_7) &&
      !(FUNC_0(VAR_7->adapter->fw_cap_info) &&
        !(VAR_11->flags & VAR_4))) ||
     !FUNC_3(VAR_7->curr_addr, VAR_12->eth803_hdr.h_dest)) {
  FUNC_11(VAR_7, VAR_8);
  return VAR_10;
 }

 if (FUNC_12(VAR_7) ||
     (FUNC_0(VAR_7->adapter->fw_cap_info) &&
      VAR_11->flags & VAR_4)) {
  FUNC_5(VAR_13, VAR_12->eth803_hdr.h_source, VAR_2);
  if (VAR_11->flags & VAR_4 &&
      VAR_11->priority < VAR_3) {
   VAR_18 = FUNC_9(VAR_7, VAR_13);
   if (VAR_18)
    VAR_18->rx_seq[VAR_11->priority] =
           FUNC_4(VAR_11->seq_num);
   FUNC_7(VAR_7, VAR_13,
            VAR_11->snr,
            VAR_11->nf);
  }
 } else {
  if (VAR_14 != VAR_5 &&
      VAR_11->priority < VAR_3)
   VAR_7->rx_seq[VAR_11->priority] = VAR_17;
  FUNC_5(VAR_13, VAR_7->curr_bss_params.bss_descriptor.mac_address,
         VAR_2);
 }


 VAR_10 = FUNC_6(VAR_7, VAR_17, VAR_11->priority,
      VAR_13, (u8) VAR_14, VAR_8);

 if (VAR_10 || (VAR_14 == VAR_5))
  FUNC_2(VAR_8);

 if (VAR_10)
  VAR_7->stats.rx_dropped++;

 return VAR_10;
}
