
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ bdHTInfoLen; int bdHTInfoBuf; } ;
struct ieee80211_network {TYPE_1__ bssht; } ;
struct ieee80211_device {TYPE_2__* pHTInfo; } ;
struct TYPE_6__ {int OptMode; } ;
struct TYPE_5__ {int CurrentOpMode; scalar_t__ bCurrentHTSupport; } ;
typedef TYPE_2__* PRT_HIGH_THROUGHPUT ;
typedef TYPE_3__* PHT_INFORMATION_ELE ;



void FUNC_0(struct ieee80211_device *VAR_0, struct ieee80211_network *VAR_1)
{
 PRT_HIGH_THROUGHPUT VAR_2 = VAR_0->pHTInfo;

 PHT_INFORMATION_ELE VAR_3 = (PHT_INFORMATION_ELE)VAR_1->bssht.bdHTInfoBuf;

 if (VAR_2->bCurrentHTSupport) {



  if (VAR_1->bssht.bdHTInfoLen != 0)
   VAR_2->CurrentOpMode = VAR_3->OptMode;




 }
}
