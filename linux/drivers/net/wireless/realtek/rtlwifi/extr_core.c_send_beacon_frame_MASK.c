
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct rtl_tcb_desc {int dummy; } ;
struct rtl_priv {TYPE_1__* intf_ops; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_2__ {int (* adapter_tx ) (struct ieee80211_hw*,int *,struct sk_buff*,struct rtl_tcb_desc*) ;} ;


 struct sk_buff* FUNC_0 (struct ieee80211_hw*,struct ieee80211_vif*) ;
 int FUNC_1 (struct rtl_tcb_desc*,int ,int) ;
 struct rtl_priv* FUNC_2 (struct ieee80211_hw*) ;
 int FUNC_3 (struct ieee80211_hw*,int *,struct sk_buff*,struct rtl_tcb_desc*) ;

__attribute__((used)) static void FUNC_4(struct ieee80211_hw *VAR_0,
         struct ieee80211_vif *VAR_1)
{
 struct rtl_priv *VAR_2 = FUNC_2(VAR_0);
 struct sk_buff *VAR_3 = FUNC_0(VAR_0, VAR_1);
 struct rtl_tcb_desc VAR_4;

 if (VAR_3) {
  FUNC_1(&VAR_4, 0, sizeof(struct rtl_tcb_desc));
  VAR_2->intf_ops->adapter_tx(VAR_0, ((void*)0), VAR_3, &VAR_4);
 }
}
