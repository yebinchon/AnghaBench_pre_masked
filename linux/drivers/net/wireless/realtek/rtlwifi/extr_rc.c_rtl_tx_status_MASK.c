
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u8 ;
struct sk_buff {scalar_t__ protocol; } ;
struct rtl_sta_info {TYPE_3__* tids; } ;
struct rtl_priv {int dummy; } ;
struct rtl_mac {int hw; } ;
struct ieee80211_supported_band {int dummy; } ;
struct TYPE_4__ {scalar_t__ ht_supported; } ;
struct ieee80211_sta {TYPE_1__ ht_cap; scalar_t__ drv_priv; } ;
struct ieee80211_hdr {int dummy; } ;
typedef int __le16 ;
struct TYPE_5__ {int agg_state; } ;
struct TYPE_6__ {TYPE_2__ agg; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct rtl_priv*,struct rtl_sta_info*,size_t) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct ieee80211_hdr*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct ieee80211_sta*,size_t,int) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (struct sk_buff*) ;
 struct ieee80211_hdr* FUNC_9 (struct sk_buff*) ;
 size_t FUNC_10 (struct sk_buff*) ;
 scalar_t__ FUNC_11 (int ,struct sk_buff*,int,int) ;
 struct rtl_mac* FUNC_12 (struct rtl_priv*) ;

__attribute__((used)) static void FUNC_13(void *VAR_2,
     struct ieee80211_supported_band *VAR_3,
     struct ieee80211_sta *VAR_4, void *VAR_5,
     struct sk_buff *VAR_6)
{
 struct rtl_priv *VAR_7 = VAR_2;
 struct rtl_mac *VAR_8 = FUNC_12(VAR_7);
 struct ieee80211_hdr *VAR_9 = FUNC_9(VAR_6);
 __le16 VAR_10 = FUNC_8(VAR_6);
 struct rtl_sta_info *VAR_11;

 if (!VAR_5 || !FUNC_3(VAR_10))
  return;

 if (FUNC_11(VAR_8->hw, VAR_6, 1, 1))
  return;

 if (FUNC_7(FUNC_2(VAR_9)) ||
     FUNC_6(FUNC_2(VAR_9)))
  return;

 if (VAR_4) {

  VAR_11 = (struct rtl_sta_info *)VAR_4->drv_priv;
  if (VAR_4->ht_cap.ht_supported &&
      !(VAR_6->protocol == FUNC_1(VAR_0))) {
   if (FUNC_4(VAR_10)) {
    u8 VAR_12 = FUNC_10(VAR_6);

    if (FUNC_0(VAR_7, VAR_11,
             VAR_12)) {
     VAR_11->tids[VAR_12].agg.agg_state =
      VAR_1;
     FUNC_5(VAR_4, VAR_12,
              5000);
    }
   }
  }
 }
}
