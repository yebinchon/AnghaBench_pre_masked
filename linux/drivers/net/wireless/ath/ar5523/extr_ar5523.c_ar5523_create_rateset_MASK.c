
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct ieee80211_supported_band {int n_bitrates; TYPE_6__* bitrates; } ;
struct ieee80211_sta {int* supp_rates; } ;
struct ieee80211_bss_conf {int basic_rates; int bssid; } ;
struct ar5523_cmd_rateset {int* set; int length; } ;
struct ar5523 {TYPE_5__* hw; int vif; } ;
struct TYPE_12__ {int hw_value; } ;
struct TYPE_9__ {TYPE_2__* chan; } ;
struct TYPE_10__ {TYPE_3__ chandef; } ;
struct TYPE_11__ {TYPE_4__ conf; TYPE_1__* wiphy; } ;
struct TYPE_8__ {size_t band; } ;
struct TYPE_7__ {struct ieee80211_supported_band** bands; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ar5523*,char*,int,...) ;
 int FUNC_2 (struct ar5523*,char*) ;
 struct ieee80211_sta* FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(struct ar5523 *VAR_1,
      struct ieee80211_bss_conf *VAR_2,
      struct ar5523_cmd_rateset *VAR_3,
      bool VAR_4)
{
 struct ieee80211_supported_band *VAR_5;
 struct ieee80211_sta *VAR_6;
 int VAR_7, VAR_8 = 0;
 u32 VAR_9, VAR_10;

 VAR_6 = FUNC_3(VAR_1->vif, VAR_2->bssid);
 VAR_10 = VAR_2->basic_rates;
 if (!VAR_6) {
  FUNC_2(VAR_1, "STA not found. Cannot set rates\n");
  VAR_9 = VAR_2->basic_rates;
 } else
  VAR_9 = VAR_6->supp_rates[VAR_1->hw->conf.chandef.chan->band];

 FUNC_1(VAR_1, "sta rate_set = %08x\n", VAR_9);

 VAR_5 = VAR_1->hw->wiphy->bands[VAR_1->hw->conf.chandef.chan->band];
 for (VAR_7 = 0; VAR_7 < VAR_5->n_bitrates; VAR_7++) {
  FUNC_0(VAR_8 >= VAR_0);
  FUNC_1(VAR_1, "Considering rate %d : %d\n",
      VAR_5->bitrates[VAR_7].hw_value, VAR_9 & 1);
  if (VAR_9 & 1) {
   VAR_3->set[VAR_8] = VAR_5->bitrates[VAR_7].hw_value;
   if (VAR_10 & 1 && VAR_4)
    VAR_3->set[VAR_8] |= 0x80;
   VAR_8++;
  }
  VAR_9 >>= 1;
  VAR_10 >>= 1;
 }

 VAR_3->length = VAR_8;
}
