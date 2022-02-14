
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct brcmf_if {TYPE_2__* vif; TYPE_1__* drvr; } ;
struct brcmf_cfg80211_info {int dummy; } ;
typedef int s32 ;
struct TYPE_5__ {int sme_state; } ;
struct TYPE_4__ {struct brcmf_cfg80211_info* config; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct brcmf_cfg80211_info*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static s32 FUNC_5(struct brcmf_if *VAR_2)
{
 struct brcmf_cfg80211_info *VAR_3 = VAR_2->drvr->config;





 if (FUNC_3(VAR_2->vif)) {
  FUNC_2(VAR_2->vif, VAR_1);





  FUNC_1(500);
 }

 FUNC_0(VAR_3);
 FUNC_4(VAR_0, &VAR_2->vif->sme_state);

 return 0;
}
