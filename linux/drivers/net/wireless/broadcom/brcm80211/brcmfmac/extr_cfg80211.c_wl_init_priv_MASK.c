
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct brcmf_cfg80211_info {int pwr_save; int dongle_up; int vif_disabled; int conf; int usr_sync; int * scan_request; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct brcmf_cfg80211_info*) ;
 scalar_t__ FUNC_2 (struct brcmf_cfg80211_info*) ;
 int FUNC_3 (struct brcmf_cfg80211_info*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static s32 FUNC_6(struct brcmf_cfg80211_info *VAR_0)
{
 s32 VAR_1 = 0;

 VAR_0->scan_request = ((void*)0);
 VAR_0->pwr_save = 1;
 VAR_0->dongle_up = 0;
 VAR_1 = FUNC_2(VAR_0);
 if (VAR_1)
  return VAR_1;
 FUNC_3(VAR_0);
 FUNC_5(&VAR_0->usr_sync);
 FUNC_1(VAR_0);
 FUNC_0(VAR_0->conf);
 FUNC_4(&VAR_0->vif_disabled);
 return VAR_1;
}
