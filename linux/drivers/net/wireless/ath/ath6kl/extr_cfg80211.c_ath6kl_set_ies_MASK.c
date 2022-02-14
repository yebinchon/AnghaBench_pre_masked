
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cfg80211_beacon_data {int assocresp_ies_len; int assocresp_ies; int proberesp_ies_len; int proberesp_ies; int beacon_ies_len; int beacon_ies; } ;
struct ath6kl_vif {int fw_vif_idx; struct ath6kl* ar; } ;
struct ath6kl {int wmi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ath6kl_vif*,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct ath6kl_vif *VAR_2,
     struct cfg80211_beacon_data *VAR_3)
{
 struct ath6kl *VAR_4 = VAR_2->ar;
 int VAR_5;


 VAR_5 = FUNC_1(VAR_4->wmi, VAR_2->fw_vif_idx,
           VAR_1,
           VAR_3->beacon_ies,
           VAR_3->beacon_ies_len);
 if (VAR_5)
  return VAR_5;


 VAR_5 = FUNC_0(VAR_2, VAR_3->proberesp_ies,
        VAR_3->proberesp_ies_len);
 if (VAR_5)
  return VAR_5;


 VAR_5 = FUNC_1(VAR_4->wmi, VAR_2->fw_vif_idx,
           VAR_0,
           VAR_3->assocresp_ies,
           VAR_3->assocresp_ies_len);
 if (VAR_5)
  return VAR_5;

 return 0;
}
