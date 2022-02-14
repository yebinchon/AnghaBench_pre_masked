
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cfg80211_beacon_data {int assocresp_ies_len; int assocresp_ies; int proberesp_ies_len; int proberesp_ies; int probe_resp_len; int probe_resp; int beacon_ies_len; int beacon_ies; int tail_len; int tail; int head_len; int head; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int,int,int ,int ,int) ;

__attribute__((used)) static void FUNC_1(struct cfg80211_beacon_data *VAR_1)
{
 FUNC_0("head     ", VAR_0, 16, 1,
     VAR_1->head, VAR_1->head_len, 1);
 FUNC_0("tail     ", VAR_0, 16, 1,
     VAR_1->tail, VAR_1->tail_len, 1);
 FUNC_0("BCON IE  ", VAR_0, 16, 1,
     VAR_1->beacon_ies, VAR_1->beacon_ies_len, 1);
 FUNC_0("PROBE    ", VAR_0, 16, 1,
     VAR_1->probe_resp, VAR_1->probe_resp_len, 1);
 FUNC_0("PROBE IE ", VAR_0, 16, 1,
     VAR_1->proberesp_ies, VAR_1->proberesp_ies_len, 1);
 FUNC_0("ASSOC IE ", VAR_0, 16, 1,
     VAR_1->assocresp_ies, VAR_1->assocresp_ies_len, 1);
}
