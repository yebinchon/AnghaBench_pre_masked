
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int addr; } ;
struct wmi_peer_sta_ps_state_chg_event {int peer_ps_state; TYPE_1__ peer_macaddr; } ;
struct sk_buff {scalar_t__ data; } ;
struct ieee80211_sta {scalar_t__ drv_priv; } ;
struct ath10k_sta {int peer_ps_state; } ;
struct ath10k {int hw; int data_lock; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ath10k*,char*,int *) ;
 int FUNC_2 (int *,int ) ;
 struct ieee80211_sta* FUNC_3 (int ,int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 () ;
 int FUNC_6 () ;

__attribute__((used)) static void
FUNC_7(struct ath10k *VAR_1, struct sk_buff *VAR_2)
{
 struct wmi_peer_sta_ps_state_chg_event *VAR_3;
 struct ieee80211_sta *VAR_4;
 struct ath10k_sta *VAR_5;
 u8 VAR_6[VAR_0];

 FUNC_4(&VAR_1->data_lock);

 VAR_3 = (struct wmi_peer_sta_ps_state_chg_event *)VAR_2->data;
 FUNC_2(VAR_6, VAR_3->peer_macaddr.addr);

 FUNC_5();

 VAR_4 = FUNC_3(VAR_1->hw, VAR_6, ((void*)0));

 if (!VAR_4) {
  FUNC_1(VAR_1, "failed to find station entry %pM\n",
       VAR_6);
  goto exit;
 }

 VAR_5 = (struct ath10k_sta *)VAR_4->drv_priv;
 VAR_5->peer_ps_state = FUNC_0(VAR_3->peer_ps_state);

exit:
 FUNC_6();
}
