
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int len; } ;
struct rtl_tx_desc {int dummy; } ;
struct rtl_tx_buffer_desc {int dummy; } ;
struct rtl_tcb_desc {int dummy; } ;
struct rtl_priv {TYPE_2__* cfg; scalar_t__ use_new_trx_flow; } ;
struct rtl_pci {int pdev; struct rtl8192_tx_ring* tx_ring; } ;
struct rtl_mac {int vif; } ;
struct rtl8192_tx_ring {size_t idx; int queue; struct rtl_tx_buffer_desc* buffer_desc; struct rtl_tx_desc* desc; } ;
struct ieee80211_tx_info {int dummy; } ;
struct ieee80211_hw {int dummy; } ;
struct ieee80211_hdr {int dummy; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* set_desc ) (struct ieee80211_hw*,int*,int,int ,int*) ;int (* fill_tx_desc ) (struct ieee80211_hw*,struct ieee80211_hdr*,int*,int*,struct ieee80211_tx_info*,int *,struct sk_buff*,size_t,struct rtl_tcb_desc*) ;int (* get_desc ) (struct ieee80211_hw*,int*,int,int ) ;} ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;
 int VAR_3 ;
 struct sk_buff* FUNC_1 (int *) ;
 int FUNC_2 (int *,struct sk_buff*) ;
 struct sk_buff* FUNC_3 (struct ieee80211_hw*,int ) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct rtl_tcb_desc*,int ,int) ;
 int FUNC_6 (int ,int ,int ,int ) ;
 struct ieee80211_hdr* FUNC_7 (struct sk_buff*) ;
 struct rtl_mac* FUNC_8 (struct rtl_priv*) ;
 struct rtl_pci* FUNC_9 (int ) ;
 int FUNC_10 (struct ieee80211_hw*) ;
 struct rtl_priv* FUNC_11 (struct ieee80211_hw*) ;
 int FUNC_12 (struct ieee80211_hw*,int*,int,int ) ;
 int FUNC_13 (struct ieee80211_hw*,struct ieee80211_hdr*,int*,int*,struct ieee80211_tx_info*,int *,struct sk_buff*,size_t,struct rtl_tcb_desc*) ;
 int FUNC_14 (struct ieee80211_hw*,int*,int,int ,int*) ;
 int FUNC_15 (struct ieee80211_hw*,int*,int,int ,int*) ;

__attribute__((used)) static void FUNC_16(struct ieee80211_hw *VAR_4)
{
 struct rtl_priv *VAR_5 = FUNC_11(VAR_4);
 struct rtl_pci *VAR_6 = FUNC_9(FUNC_10(VAR_4));
 struct rtl_mac *VAR_7 = FUNC_8(FUNC_11(VAR_4));
 struct rtl8192_tx_ring *VAR_8 = ((void*)0);
 struct ieee80211_hdr *VAR_9 = ((void*)0);
 struct ieee80211_tx_info *VAR_10 = ((void*)0);
 struct sk_buff *VAR_11 = ((void*)0);
 struct rtl_tx_desc *VAR_12 = ((void*)0);
 struct rtl_tcb_desc VAR_13;

 struct rtl_tx_buffer_desc *VAR_14 = ((void*)0);
 u8 VAR_15 = 1;
 u8 *VAR_16;

 FUNC_5(&VAR_13, 0, sizeof(struct rtl_tcb_desc));
 VAR_8 = &VAR_6->tx_ring[VAR_0];
 VAR_11 = FUNC_1(&VAR_8->queue);
 if (VAR_5->use_new_trx_flow)
  VAR_16 = (u8 *)(&VAR_8->buffer_desc[VAR_8->idx]);
 else
  VAR_16 = (u8 *)(&VAR_8->desc[VAR_8->idx]);
 if (VAR_11) {
  FUNC_6(VAR_6->pdev,
     VAR_5->cfg->ops->get_desc(
     VAR_4, (u8 *)VAR_16, 1, VAR_2),
     VAR_11->len, VAR_3);
  FUNC_4(VAR_11);
 }


 VAR_11 = FUNC_3(VAR_4, VAR_7->vif);
 if (!VAR_11)
  return;
 VAR_9 = FUNC_7(VAR_11);
 VAR_10 = FUNC_0(VAR_11);
 VAR_12 = &VAR_8->desc[0];
 if (VAR_5->use_new_trx_flow)
  VAR_14 = &VAR_8->buffer_desc[0];

 VAR_5->cfg->ops->fill_tx_desc(VAR_4, VAR_9, (u8 *)VAR_12,
     (u8 *)VAR_14, VAR_10, ((void*)0), VAR_11,
     VAR_0, &VAR_13);

 FUNC_2(&VAR_8->queue, VAR_11);

 if (VAR_5->use_new_trx_flow) {
  VAR_15 = 4;
  VAR_5->cfg->ops->set_desc(VAR_4, (u8 *)VAR_14, 1,
         VAR_1, (u8 *)&VAR_15);
 } else {
  VAR_5->cfg->ops->set_desc(VAR_4, (u8 *)VAR_12, 1, VAR_1,
         &VAR_15);
 }
}
