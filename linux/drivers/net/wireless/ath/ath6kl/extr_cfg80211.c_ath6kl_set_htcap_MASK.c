
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath6kl_vif {int fw_vif_idx; TYPE_1__* ar; struct ath6kl_htcap* htcap; } ;
struct ath6kl_htcap {int ht_enable; int ampdu_factor; int cap_info; } ;
typedef enum nl80211_band { ____Placeholder_nl80211_band } nl80211_band ;
struct TYPE_2__ {int wmi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int,struct ath6kl_htcap*) ;
 int FUNC_1 (struct ath6kl_htcap*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct ath6kl_vif *VAR_4, enum nl80211_band VAR_5,
       bool VAR_6)
{
 struct ath6kl_htcap *VAR_7 = &VAR_4->htcap[VAR_5];

 if (VAR_7->ht_enable == VAR_6)
  return 0;

 if (VAR_6) {

  VAR_7->ht_enable = 1;
  VAR_7->cap_info = (VAR_5 == VAR_1) ?
       VAR_3 : VAR_2;
  VAR_7->ampdu_factor = VAR_0;
 } else
  FUNC_1(VAR_7, 0, sizeof(*VAR_7));

 return FUNC_0(VAR_4->ar->wmi, VAR_4->fw_vif_idx,
     VAR_5, VAR_7);
}
