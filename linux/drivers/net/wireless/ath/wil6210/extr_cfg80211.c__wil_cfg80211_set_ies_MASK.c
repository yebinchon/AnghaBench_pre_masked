
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct wil6210_vif {int assocresp_ies_len; int assocresp_ies; int proberesp_ies_len; int proberesp_ies; int proberesp_len; int proberesp; } ;
struct cfg80211_beacon_data {int * tail; int tail_len; int * assocresp_ies; int assocresp_ies_len; int proberesp_ies_len; int * proberesp_ies; int probe_resp_len; int * probe_resp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int *,int ,int *) ;
 int FUNC_1 (int *,int ,int *,int ,int **,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int *,int ) ;
 int FUNC_4 (struct wil6210_vif*,int ,int ,int *) ;

__attribute__((used)) static int FUNC_5(struct wil6210_vif *VAR_3,
     struct cfg80211_beacon_data *VAR_4)
{
 int VAR_5;
 u16 VAR_6 = 0, VAR_7 = 0;
 u8 *VAR_8 = ((void*)0), *VAR_9;


 FUNC_3(&VAR_3->proberesp, &VAR_3->proberesp_len, VAR_4->probe_resp,
        VAR_4->probe_resp_len);
 FUNC_3(&VAR_3->proberesp_ies, &VAR_3->proberesp_ies_len,
        VAR_4->proberesp_ies, VAR_4->proberesp_ies_len);
 FUNC_3(&VAR_3->assocresp_ies, &VAR_3->assocresp_ies_len,
        VAR_4->assocresp_ies, VAR_4->assocresp_ies_len);

 VAR_9 = FUNC_0(VAR_4->probe_resp,
          VAR_4->probe_resp_len,
          &VAR_7);
 VAR_5 = FUNC_1(VAR_9,
        VAR_7,
        VAR_4->proberesp_ies,
        VAR_4->proberesp_ies_len,
        &VAR_8, &VAR_6);

 if (VAR_5)
  goto out;

 VAR_5 = FUNC_4(VAR_3, VAR_2, VAR_6, VAR_8);
 if (VAR_5)
  goto out;

 if (VAR_4->assocresp_ies)
  VAR_5 = FUNC_4(VAR_3, VAR_0,
    VAR_4->assocresp_ies_len, VAR_4->assocresp_ies);
 else
  VAR_5 = FUNC_4(VAR_3, VAR_0, VAR_6, VAR_8);







out:
 FUNC_2(VAR_8);
 return VAR_5;
}
