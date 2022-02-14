
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rtl_tcb_desc {int packet_bw; scalar_t__ hw_rate; scalar_t__ broadcast; scalar_t__ multicast; } ;
struct rtl_priv {TYPE_3__* cfg; } ;
struct rtl_mac {scalar_t__ opmode; int bw_80; int bw_40; } ;
struct TYPE_5__ {int vht_supported; } ;
struct TYPE_4__ {int cap; int ht_supported; } ;
struct ieee80211_sta {TYPE_2__ vht_cap; TYPE_1__ ht_cap; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_6__ {scalar_t__* maps; int spec_ver; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 struct rtl_mac* FUNC_0 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_1 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_2(struct ieee80211_hw *VAR_10,
          struct ieee80211_sta *VAR_11,
          struct rtl_tcb_desc *VAR_12)
{
 struct rtl_priv *VAR_13 = FUNC_1(VAR_10);
 struct rtl_mac *VAR_14 = FUNC_0(FUNC_1(VAR_10));

 VAR_12->packet_bw = 0;
 if (!VAR_11)
  return;
 if (VAR_14->opmode == VAR_4 ||
     VAR_14->opmode == VAR_3 ||
     VAR_14->opmode == VAR_5) {
  if (!(VAR_11->ht_cap.ht_supported) ||
      !(VAR_11->ht_cap.cap & VAR_2))
   return;
 } else if (VAR_14->opmode == VAR_6) {
  if (!VAR_14->bw_40 || !(VAR_11->ht_cap.ht_supported))
   return;
 }
 if (VAR_12->multicast || VAR_12->broadcast)
  return;


 if (VAR_12->hw_rate <= VAR_13->cfg->maps[VAR_8])
  return;

 VAR_12->packet_bw = VAR_0;

 if (VAR_13->cfg->spec_ver & VAR_9) {
  if (VAR_14->opmode == VAR_4 ||
      VAR_14->opmode == VAR_3 ||
      VAR_14->opmode == VAR_5) {
   if (!(VAR_11->vht_cap.vht_supported))
    return;
  } else if (VAR_14->opmode == VAR_6) {
   if (!VAR_14->bw_80 ||
       !(VAR_11->vht_cap.vht_supported))
    return;
  }
  if (VAR_12->hw_rate <=
   VAR_13->cfg->maps[VAR_7])
   return;
  VAR_12->packet_bw = VAR_1;
 }
}
