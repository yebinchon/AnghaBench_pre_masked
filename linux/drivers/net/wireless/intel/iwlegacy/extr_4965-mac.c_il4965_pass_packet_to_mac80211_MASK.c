
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int dummy; } ;
struct il_rx_buf {int * page; } ;
struct TYPE_6__ {int rx_page_order; } ;
struct il_priv {int hw; int alloc_rxb_page; TYPE_3__ hw_params; TYPE_2__* cfg; int stop_reason; int is_open; } ;
struct ieee80211_rx_status {int dummy; } ;
struct ieee80211_hdr {int frame_control; } ;
typedef int __le16 ;
struct TYPE_5__ {TYPE_1__* mod_params; } ;
struct TYPE_4__ {int sw_crypto; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sk_buff* FUNC_4 (int ) ;
 int FUNC_5 (int ,struct sk_buff*) ;
 scalar_t__ FUNC_6 (struct il_priv*,struct ieee80211_hdr*,int ,struct ieee80211_rx_status*) ;
 int FUNC_7 (struct il_priv*,int,int ,int ) ;
 int FUNC_8 (struct il_priv*,int ) ;
 int FUNC_9 (int ,struct ieee80211_rx_status*,int) ;
 int FUNC_10 (struct il_rx_buf*) ;
 int FUNC_11 (struct sk_buff*,int ,int *,void*,int ,int) ;
 int FUNC_12 (struct sk_buff*,struct ieee80211_hdr*,int ) ;
 int FUNC_13 (int ,int *) ;
 scalar_t__ FUNC_14 (int) ;

__attribute__((used)) static void
FUNC_15(struct il_priv *VAR_3, struct ieee80211_hdr *VAR_4,
          u32 VAR_5, u32 VAR_6, struct il_rx_buf *VAR_7,
          struct ieee80211_rx_status *VAR_8)
{
 struct sk_buff *VAR_9;
 __le16 VAR_10 = VAR_4->frame_control;


 if (FUNC_14(!VAR_3->is_open)) {
  FUNC_0("Dropping packet while interface is not open.\n");
  return;
 }

 if (FUNC_14(FUNC_13(VAR_0, &VAR_3->stop_reason))) {
  FUNC_8(VAR_3, VAR_0);
  FUNC_1("Woke queues - frame received on passive channel\n");
 }


 if (!VAR_3->cfg->mod_params->sw_crypto &&
     FUNC_6(VAR_3, VAR_4, VAR_6, VAR_8))
  return;

 VAR_9 = FUNC_4(VAR_2);
 if (!VAR_9) {
  FUNC_3("dev_alloc_skb failed\n");
  return;
 }

 if (VAR_5 <= VAR_2) {
  FUNC_12(VAR_9, VAR_4, VAR_5);
 } else {
  FUNC_11(VAR_9, 0, VAR_7->page, (void *)VAR_4 - FUNC_10(VAR_7),
    VAR_5, VAR_1 << VAR_3->hw_params.rx_page_order);
  VAR_3->alloc_rxb_page--;
  VAR_7->page = ((void*)0);
 }

 FUNC_7(VAR_3, 0, VAR_10, VAR_5);
 FUNC_9(FUNC_2(VAR_9), VAR_8, sizeof(*VAR_8));

 FUNC_5(VAR_3->hw, VAR_9);
}
