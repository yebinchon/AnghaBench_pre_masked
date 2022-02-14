
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct rtl_stats {int signalstrength; scalar_t__ packet_toself; int is_cck; int rssi; scalar_t__ packet_beacon; } ;
struct TYPE_3__ {size_t total_num; int* elements; size_t index; int total_val; } ;
struct TYPE_4__ {int signal_strength; TYPE_1__ ui_rssi; int rssi_calculate_cnt; } ;
struct rtl_priv {TYPE_2__ stats; } ;
struct ieee80211_hw {int dummy; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct ieee80211_hw*,int ) ;
 int FUNC_1 (struct ieee80211_hw*,struct rtl_stats*) ;
 struct rtl_priv* FUNC_2 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_3(struct ieee80211_hw *VAR_1,
         struct rtl_stats *VAR_2)
{
 struct rtl_priv *VAR_3 = FUNC_2(VAR_1);
 u32 VAR_4, VAR_5;

 if (VAR_2->packet_toself || VAR_2->packet_beacon) {
  VAR_3->stats.rssi_calculate_cnt++;
  if (VAR_3->stats.ui_rssi.total_num++ >=
      VAR_0) {
   VAR_3->stats.ui_rssi.total_num =
       VAR_0;
   VAR_4 = VAR_3->stats.ui_rssi.elements[
    VAR_3->stats.ui_rssi.index];
   VAR_3->stats.ui_rssi.total_val -= VAR_4;
  }
  VAR_3->stats.ui_rssi.total_val += VAR_2->signalstrength;
  VAR_3->stats.ui_rssi.elements
   [VAR_3->stats.ui_rssi.index++] =
   VAR_2->signalstrength;
  if (VAR_3->stats.ui_rssi.index >= VAR_0)
   VAR_3->stats.ui_rssi.index = 0;
  VAR_5 = VAR_3->stats.ui_rssi.total_val /
   VAR_3->stats.ui_rssi.total_num;
  VAR_3->stats.signal_strength = FUNC_0(VAR_1,
   (u8) VAR_5);
  VAR_2->rssi = VAR_3->stats.signal_strength;
 }
 if (!VAR_2->is_cck && VAR_2->packet_toself)
  FUNC_1(VAR_1, VAR_2);
}
