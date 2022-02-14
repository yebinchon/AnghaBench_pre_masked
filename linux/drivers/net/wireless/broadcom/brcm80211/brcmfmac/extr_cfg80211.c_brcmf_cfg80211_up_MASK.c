
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct brcmf_if {TYPE_1__* drvr; } ;
struct brcmf_cfg80211_info {int usr_sync; } ;
typedef int s32 ;
struct TYPE_2__ {struct brcmf_cfg80211_info* config; } ;


 int FUNC_0 (struct brcmf_if*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct brcmf_if* FUNC_3 (struct net_device*) ;

s32 FUNC_4(struct net_device *VAR_0)
{
 struct brcmf_if *VAR_1 = FUNC_3(VAR_0);
 struct brcmf_cfg80211_info *VAR_2 = VAR_1->drvr->config;
 s32 VAR_3 = 0;

 FUNC_1(&VAR_2->usr_sync);
 VAR_3 = FUNC_0(VAR_1);
 FUNC_2(&VAR_2->usr_sync);

 return VAR_3;
}
