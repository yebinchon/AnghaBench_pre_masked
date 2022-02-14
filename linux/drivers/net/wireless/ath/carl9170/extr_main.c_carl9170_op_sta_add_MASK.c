
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211_vif {int dummy; } ;
struct TYPE_2__ {int ampdu_density; int ampdu_factor; scalar_t__ ht_supported; } ;
struct ieee80211_sta {TYPE_1__ ht_cap; scalar_t__ drv_priv; } ;
struct ieee80211_hw {int dummy; } ;
struct carl9170_sta_info {int ampdu_max_len; int ht_sta; int * agg; int pending_frames; } ;


 unsigned int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static int FUNC_3(struct ieee80211_hw *VAR_0,
          struct ieee80211_vif *VAR_1,
          struct ieee80211_sta *VAR_2)
{
 struct carl9170_sta_info *VAR_3 = (void *) VAR_2->drv_priv;
 unsigned int VAR_4;

 FUNC_2(&VAR_3->pending_frames, 0);

 if (VAR_2->ht_cap.ht_supported) {
  if (VAR_2->ht_cap.ampdu_density > 6) {





   return 0;
  }

  for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_3->agg); VAR_4++)
   FUNC_1(VAR_3->agg[VAR_4], ((void*)0));

  VAR_3->ampdu_max_len = 1 << (3 + VAR_2->ht_cap.ampdu_factor);
  VAR_3->ht_sta = 1;
 }

 return 0;
}
