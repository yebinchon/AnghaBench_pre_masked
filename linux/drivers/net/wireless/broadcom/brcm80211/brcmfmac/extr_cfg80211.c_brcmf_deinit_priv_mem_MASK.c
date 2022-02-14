
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * escan_buf; } ;
struct TYPE_4__ {int * nd_info; int * nd; } ;
struct brcmf_cfg80211_info {TYPE_1__ escan_info; TYPE_2__ wowl; int * extra_buf; int * conf; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct brcmf_cfg80211_info *VAR_0)
{
 FUNC_0(VAR_0->conf);
 VAR_0->conf = ((void*)0);
 FUNC_0(VAR_0->extra_buf);
 VAR_0->extra_buf = ((void*)0);
 FUNC_0(VAR_0->wowl.nd);
 VAR_0->wowl.nd = ((void*)0);
 FUNC_0(VAR_0->wowl.nd_info);
 VAR_0->wowl.nd_info = ((void*)0);
 FUNC_0(VAR_0->escan_info.escan_buf);
 VAR_0->escan_info.escan_buf = ((void*)0);
}
