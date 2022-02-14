
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {scalar_t__ data; } ;
struct ieee80211_vif {scalar_t__ drv_priv; } ;
struct ieee80211_tx_info {int const flags; } ;
struct ieee80211_hdr {int frame_control; } ;
struct ath10k_vif {int nohwcrypt; } ;


 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static bool FUNC_2(struct ieee80211_vif *VAR_2,
         struct sk_buff *VAR_3)
{
 const struct ieee80211_tx_info *VAR_4 = FUNC_0(VAR_3);
 const struct ieee80211_hdr *VAR_5 = (void *)VAR_3->data;
 const u32 VAR_6 = VAR_1 |
    VAR_0;

 if (!FUNC_1(VAR_5->frame_control))
  return 0;

 if ((VAR_4->flags & VAR_6) == VAR_6)
  return 0;

 if (VAR_2)
  return !((struct ath10k_vif *)VAR_2->drv_priv)->nohwcrypt;

 return 1;
}
