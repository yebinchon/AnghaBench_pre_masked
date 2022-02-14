
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct brcmf_cfg80211_info {int dummy; } ;
struct brcmf_cfg80211_connect_info {scalar_t__ resp_ie_len; int * resp_ie; scalar_t__ req_ie_len; int * req_ie; } ;


 struct brcmf_cfg80211_connect_info* FUNC_0 (struct brcmf_cfg80211_info*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct brcmf_cfg80211_info *VAR_0)
{
 struct brcmf_cfg80211_connect_info *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(VAR_1->req_ie);
 VAR_1->req_ie = ((void*)0);
 VAR_1->req_ie_len = 0;
 FUNC_1(VAR_1->resp_ie);
 VAR_1->resp_ie = ((void*)0);
 VAR_1->resp_ie_len = 0;
}
