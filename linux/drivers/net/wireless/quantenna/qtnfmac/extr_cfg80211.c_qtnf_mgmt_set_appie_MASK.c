
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qtnf_vif {int dummy; } ;
struct cfg80211_beacon_data {int assocresp_ies_len; int * assocresp_ies; int proberesp_ies_len; int * proberesp_ies; int beacon_ies_len; int * beacon_ies; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct qtnf_vif*,int ,int *,int ) ;

__attribute__((used)) static int FUNC_1(struct qtnf_vif *VAR_3,
          const struct cfg80211_beacon_data *VAR_4)
{
 int VAR_5 = 0;

 if (!VAR_4->beacon_ies || !VAR_4->beacon_ies_len) {
  VAR_5 = FUNC_0(VAR_3, VAR_1,
         ((void*)0), 0);
 } else {
  VAR_5 = FUNC_0(VAR_3, VAR_1,
         VAR_4->beacon_ies,
         VAR_4->beacon_ies_len);
 }

 if (VAR_5)
  goto out;

 if (!VAR_4->proberesp_ies || !VAR_4->proberesp_ies_len) {
  VAR_5 = FUNC_0(VAR_3,
         VAR_2,
         ((void*)0), 0);
 } else {
  VAR_5 = FUNC_0(VAR_3,
         VAR_2,
         VAR_4->proberesp_ies,
         VAR_4->proberesp_ies_len);
 }

 if (VAR_5)
  goto out;

 if (!VAR_4->assocresp_ies || !VAR_4->assocresp_ies_len) {
  VAR_5 = FUNC_0(VAR_3,
         VAR_0,
         ((void*)0), 0);
 } else {
  VAR_5 = FUNC_0(VAR_3,
         VAR_0,
         VAR_4->assocresp_ies,
         VAR_4->assocresp_ies_len);
 }

out:
 return VAR_5;
}
