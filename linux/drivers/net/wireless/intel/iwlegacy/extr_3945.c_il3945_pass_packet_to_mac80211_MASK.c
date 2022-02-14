
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct sk_buff {int dummy; } ;
struct il_rx_pkt {int dummy; } ;
struct il_rx_buf {int * page; } ;
struct TYPE_3__ {scalar_t__ rx_page_order; } ;
struct il_priv {int hw; int alloc_rxb_page; int stop_reason; int is_open; TYPE_1__ hw_params; } ;
struct il3945_rx_frame_hdr {scalar_t__ payload; int len; } ;
struct il3945_rx_frame_end {int status; } ;
struct ieee80211_rx_status {int dummy; } ;
struct ieee80211_hdr {int frame_control; } ;
typedef int __le16 ;
struct TYPE_4__ {int sw_crypto; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct sk_buff*) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (struct il_rx_pkt*) ;
 struct il3945_rx_frame_end* FUNC_5 (struct il_rx_pkt*) ;
 struct il3945_rx_frame_hdr* FUNC_6 (struct il_rx_pkt*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct sk_buff* FUNC_7 (scalar_t__) ;
 int FUNC_8 (int ,struct sk_buff*) ;
 TYPE_2__ VAR_4 ;
 int FUNC_9 (struct il_priv*,struct ieee80211_hdr*,int ,struct ieee80211_rx_status*) ;
 int FUNC_10 (struct il_priv*,int,int ,scalar_t__) ;
 int FUNC_11 (struct il_priv*,int ) ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ,struct ieee80211_rx_status*,int) ;
 struct il_rx_pkt* FUNC_15 (struct il_rx_buf*) ;
 int FUNC_16 (struct sk_buff*,int ,int *,int,scalar_t__,scalar_t__) ;
 int FUNC_17 (struct sk_buff*,scalar_t__,scalar_t__) ;
 int FUNC_18 (int ,int *) ;
 scalar_t__ FUNC_19 (int) ;

__attribute__((used)) static void
FUNC_20(struct il_priv *VAR_5, struct il_rx_buf *VAR_6,
          struct ieee80211_rx_status *VAR_7)
{
 struct il_rx_pkt *VAR_8 = FUNC_15(VAR_6);
 struct ieee80211_hdr *VAR_9 = (struct ieee80211_hdr *)FUNC_4(VAR_8);
 struct il3945_rx_frame_hdr *VAR_10 = FUNC_6(VAR_8);
 struct il3945_rx_frame_end *VAR_11 = FUNC_5(VAR_8);
 u32 VAR_12 = FUNC_12(VAR_10->len);
 struct sk_buff *VAR_13;
 __le16 VAR_14 = VAR_9->frame_control;
 u32 VAR_15 = VAR_2 << VAR_5->hw_params.rx_page_order;


 if (FUNC_19(VAR_12 + VAR_0 > VAR_15)) {
  FUNC_0("Corruption detected!\n");
  return;
 }


 if (FUNC_19(!VAR_5->is_open)) {
  FUNC_0("Dropping packet while interface is not open.\n");
  return;
 }

 if (FUNC_19(FUNC_18(VAR_1, &VAR_5->stop_reason))) {
  FUNC_11(VAR_5, VAR_1);
  FUNC_1("Woke queues - frame received on passive channel\n");
 }

 VAR_13 = FUNC_7(VAR_3);
 if (!VAR_13) {
  FUNC_3("dev_alloc_skb failed\n");
  return;
 }

 if (!VAR_4.sw_crypto)
  FUNC_9(VAR_5, (struct ieee80211_hdr *)VAR_8,
          FUNC_13(VAR_11->status), VAR_7);




 if (VAR_12 <= VAR_3) {
  FUNC_17(VAR_13, VAR_10->payload, VAR_12);
 } else {
  FUNC_16(VAR_13, 0, VAR_6->page,
    (void *)VAR_10->payload - (void *)VAR_8, VAR_12,
    VAR_15);
  VAR_5->alloc_rxb_page--;
  VAR_6->page = ((void*)0);
 }
 FUNC_10(VAR_5, 0, VAR_14, VAR_12);
 FUNC_14(FUNC_2(VAR_13), VAR_7, sizeof(*VAR_7));

 FUNC_8(VAR_5->hw, VAR_13);
}
