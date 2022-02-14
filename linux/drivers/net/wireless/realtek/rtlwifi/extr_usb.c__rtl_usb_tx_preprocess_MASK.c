
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
struct rtl_tx_desc {int dummy; } ;
struct rtl_tcb_desc {int dummy; } ;
struct TYPE_6__ {int txbytesunicast; int txbytesbroadcast; int txbytesmulticast; } ;
struct TYPE_5__ {scalar_t__ sw_ps_enabled; } ;
struct rtl_priv {TYPE_4__* cfg; TYPE_2__ stats; TYPE_1__ psc; } ;
struct ieee80211_tx_info {int dummy; } ;
struct ieee80211_sta {int dummy; } ;
struct ieee80211_hw {int dummy; } ;
struct ieee80211_hdr {int frame_control; int * addr1; } ;
typedef int __le16 ;
struct TYPE_8__ {TYPE_3__* ops; } ;
struct TYPE_7__ {int (* led_control ) (struct ieee80211_hw*,int ) ;int (* fill_tx_desc ) (struct ieee80211_hw*,struct ieee80211_hdr*,int *,int *,struct ieee80211_tx_info*,struct ieee80211_sta*,struct sk_buff*,int ,struct rtl_tcb_desc*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;
 int VAR_3 ;
 int FUNC_1 (struct rtl_priv*,int ,int ,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (struct rtl_tcb_desc*,int ,int) ;
 int FUNC_10 (struct ieee80211_hw*,struct sk_buff*,int) ;
 struct rtl_priv* FUNC_11 (struct ieee80211_hw*) ;
 int FUNC_12 (struct ieee80211_hw*,struct ieee80211_hdr*,int *,int *,struct ieee80211_tx_info*,struct ieee80211_sta*,struct sk_buff*,int ,struct rtl_tcb_desc*) ;
 int FUNC_13 (struct ieee80211_hw*,int ) ;

__attribute__((used)) static void FUNC_14(struct ieee80211_hw *VAR_4,
       struct ieee80211_sta *VAR_5,
       struct sk_buff *VAR_6,
       u16 VAR_7)
{
 struct rtl_priv *VAR_8 = FUNC_11(VAR_4);
 struct ieee80211_tx_info *VAR_9 = FUNC_0(VAR_6);
 struct rtl_tx_desc *VAR_10 = ((void*)0);
 struct rtl_tcb_desc VAR_11;
 struct ieee80211_hdr *VAR_12 = (struct ieee80211_hdr *)(VAR_6->data);
 __le16 VAR_13 = VAR_12->frame_control;
 u8 *VAR_14 = VAR_12->addr1;

 FUNC_9(&VAR_11, 0, sizeof(struct rtl_tcb_desc));
 if (FUNC_4(VAR_13)) {
  FUNC_1(VAR_8, VAR_0, VAR_1, "MAC80211_LINKING\n");
 }

 if (VAR_8->psc.sw_ps_enabled) {
  if (FUNC_5(VAR_13) && !FUNC_6(VAR_13) &&
      !FUNC_3(VAR_13))
   VAR_12->frame_control |= FUNC_2(VAR_2);
 }

 FUNC_10(VAR_4, VAR_6, 1);
 if (FUNC_8(VAR_14))
  VAR_8->stats.txbytesmulticast += VAR_6->len;
 else if (FUNC_7(VAR_14))
  VAR_8->stats.txbytesbroadcast += VAR_6->len;
 else
  VAR_8->stats.txbytesunicast += VAR_6->len;
 VAR_8->cfg->ops->fill_tx_desc(VAR_4, VAR_12, (u8 *)VAR_10, ((void*)0), VAR_9, VAR_5, VAR_6,
     VAR_7, &VAR_11);
 if (FUNC_5(VAR_13))
  VAR_8->cfg->ops->led_control(VAR_4, VAR_3);
}
