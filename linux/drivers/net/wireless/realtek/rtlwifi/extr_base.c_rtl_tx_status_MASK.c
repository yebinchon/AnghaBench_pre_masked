
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct rtl_priv {int dummy; } ;
struct ieee80211_tx_info {int flags; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;
 int VAR_2 ;
 int FUNC_1 (struct rtl_priv*,int ,int ,char*) ;
 int FUNC_2 (struct ieee80211_tx_info*) ;
 int FUNC_3 (struct ieee80211_hw*,struct sk_buff*) ;
 struct rtl_priv* FUNC_4 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_5(struct ieee80211_hw *VAR_3, struct sk_buff *VAR_4,
     bool VAR_5)
{
 struct rtl_priv *VAR_6 = FUNC_4(VAR_3);
 struct ieee80211_tx_info *VAR_7;

 VAR_7 = FUNC_0(VAR_4);
 FUNC_2(VAR_7);
 if (VAR_5) {
  FUNC_1(VAR_6, VAR_0, VAR_1,
    "tx report: ack\n");
  VAR_7->flags |= VAR_2;
 } else {
  FUNC_1(VAR_6, VAR_0, VAR_1,
    "tx report: not ack\n");
  VAR_7->flags &= ~VAR_2;
 }
 FUNC_3(VAR_3, VAR_4);
}
