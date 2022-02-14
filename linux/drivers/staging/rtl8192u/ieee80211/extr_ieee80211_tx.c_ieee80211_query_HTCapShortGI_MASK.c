
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211_device {TYPE_1__* pHTInfo; } ;
struct cb_desc {int bUseShortGI; } ;
struct TYPE_2__ {int bCurBW40MHz; scalar_t__ bCurShortGI20MHz; scalar_t__ bCurShortGI40MHz; scalar_t__ bForcedShortGI; int bEnableHT; int bCurrentHTSupport; } ;
typedef TYPE_1__* PRT_HIGH_THROUGHPUT ;



__attribute__((used)) static void
FUNC_0(struct ieee80211_device *VAR_0, struct cb_desc *VAR_1)
{
 PRT_HIGH_THROUGHPUT VAR_2 = VAR_0->pHTInfo;

 VAR_1->bUseShortGI = 0;

 if (!VAR_2->bCurrentHTSupport || !VAR_2->bEnableHT)
  return;

 if (VAR_2->bForcedShortGI) {
  VAR_1->bUseShortGI = 1;
  return;
 }

 if ((VAR_2->bCurBW40MHz == 1) && VAR_2->bCurShortGI40MHz)
  VAR_1->bUseShortGI = 1;
 else if ((VAR_2->bCurBW40MHz == 0) && VAR_2->bCurShortGI20MHz)
  VAR_1->bUseShortGI = 1;
}
