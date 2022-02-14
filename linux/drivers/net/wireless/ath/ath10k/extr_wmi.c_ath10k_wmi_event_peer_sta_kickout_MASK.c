
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wmi_peer_kick_ev_arg {int mac_addr; } ;
struct sk_buff {int dummy; } ;
struct ieee80211_sta {int dummy; } ;
struct ath10k {int hw; } ;


 int VAR_0 ;
 int FUNC_0 (struct ath10k*,int ,char*,int) ;
 int FUNC_1 (struct ath10k*,char*,int) ;
 int FUNC_2 (struct ath10k*,struct sk_buff*,struct wmi_peer_kick_ev_arg*) ;
 struct ieee80211_sta* FUNC_3 (int ,int,int *) ;
 int FUNC_4 (struct ieee80211_sta*,int) ;
 int FUNC_5 () ;
 int FUNC_6 () ;

void FUNC_7(struct ath10k *VAR_1, struct sk_buff *VAR_2)
{
 struct wmi_peer_kick_ev_arg VAR_3 = {};
 struct ieee80211_sta *VAR_4;
 int VAR_5;

 VAR_5 = FUNC_2(VAR_1, VAR_2, &VAR_3);
 if (VAR_5) {
  FUNC_1(VAR_1, "failed to parse peer kickout event: %d\n",
       VAR_5);
  return;
 }

 FUNC_0(VAR_1, VAR_0, "wmi event peer sta kickout %pM\n",
     VAR_3.mac_addr);

 FUNC_5();

 VAR_4 = FUNC_3(VAR_1->hw, VAR_3.mac_addr, ((void*)0));
 if (!VAR_4) {
  FUNC_1(VAR_1, "Spurious quick kickout for STA %pM\n",
       VAR_3.mac_addr);
  goto exit;
 }

 FUNC_4(VAR_4, 10);

exit:
 FUNC_6();
}
