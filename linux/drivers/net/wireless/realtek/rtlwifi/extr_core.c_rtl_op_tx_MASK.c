
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct rtl_tcb_desc {int dummy; } ;
struct rtl_ps_ctl {scalar_t__ rfpwr_state; } ;
struct rtl_priv {TYPE_1__* intf_ops; int status; } ;
struct rtl_hal {int dummy; } ;
struct ieee80211_tx_control {int sta; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_2__ {int (* adapter_tx ) (struct ieee80211_hw*,int ,struct sk_buff*,struct rtl_tcb_desc*) ;int (* waitq_insert ) (struct ieee80211_hw*,int ,struct sk_buff*) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (struct rtl_hal*) ;
 int FUNC_2 (struct rtl_tcb_desc*,int ,int) ;
 struct rtl_hal* FUNC_3 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_4 (struct ieee80211_hw*) ;
 struct rtl_ps_ctl* FUNC_5 (struct rtl_priv*) ;
 int FUNC_6 (struct ieee80211_hw*,int ,struct sk_buff*) ;
 int FUNC_7 (struct ieee80211_hw*,int ,struct sk_buff*,struct rtl_tcb_desc*) ;
 int FUNC_8 (int ,int *) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static void FUNC_10(struct ieee80211_hw *VAR_2,
        struct ieee80211_tx_control *VAR_3,
        struct sk_buff *VAR_4)
{
 struct rtl_priv *VAR_5 = FUNC_4(VAR_2);
 struct rtl_hal *VAR_6 = FUNC_3(FUNC_4(VAR_2));
 struct rtl_ps_ctl *VAR_7 = FUNC_5(FUNC_4(VAR_2));
 struct rtl_tcb_desc VAR_8;

 FUNC_2(&VAR_8, 0, sizeof(struct rtl_tcb_desc));

 if (FUNC_9(FUNC_1(VAR_6) || VAR_7->rfpwr_state != VAR_0))
  goto err_free;

 if (!FUNC_8(VAR_1, &VAR_5->status))
  goto err_free;

 if (!VAR_5->intf_ops->waitq_insert(VAR_2, VAR_3->sta, VAR_4))
  VAR_5->intf_ops->adapter_tx(VAR_2, VAR_3->sta, VAR_4, &VAR_8);
 return;

err_free:
 FUNC_0(VAR_4);
}
