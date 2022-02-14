
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct brcmf_cfg80211_vif {int sme_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static bool FUNC_2(struct brcmf_cfg80211_vif *VAR_2)
{
 if (!FUNC_1(VAR_0, &VAR_2->sme_state)) {
  FUNC_0(VAR_1, "device is not ready : status (%lu)\n",
     VAR_2->sme_state);
  return 0;
 }
 return 1;
}
