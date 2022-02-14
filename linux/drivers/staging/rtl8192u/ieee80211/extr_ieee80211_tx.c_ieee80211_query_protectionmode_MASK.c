
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {scalar_t__ len; scalar_t__ data; } ;
struct TYPE_3__ {int capability; scalar_t__ buseprotection; } ;
struct ieee80211_device {scalar_t__ mode; scalar_t__ rts; TYPE_1__ current_network; TYPE_2__* pHTInfo; } ;
struct cb_desc {int bRTSSTBC; int bRTSUseShortGI; int bCTSEnable; int bRTSBW; int bRTSEnable; int bUseShortPreamble; scalar_t__ RTSSC; void* rts_rate; scalar_t__ bAMPDUEnable; scalar_t__ bMulticast; scalar_t__ bBroadcast; } ;
struct TYPE_4__ {int CurrentOpMode; int IOTAction; scalar_t__ bCurBW40MHz; scalar_t__ bEnableHT; scalar_t__ bCurrentHTSupport; } ;
typedef TYPE_2__* PRT_HIGH_THROUGHPUT ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct ieee80211_device *VAR_5,
        struct cb_desc *VAR_6,
        struct sk_buff *VAR_7)
{

 VAR_6->bRTSSTBC = 0;
 VAR_6->bRTSUseShortGI = 0;
 VAR_6->bCTSEnable = 0;
 VAR_6->RTSSC = 0;
 VAR_6->bRTSBW = 0;

 if (VAR_6->bBroadcast || VAR_6->bMulticast)
  return;

 if (FUNC_0(VAR_7->data + 16))
  return;

 if (VAR_5->mode < VAR_1) {




  if (VAR_7->len > VAR_5->rts) {
   VAR_6->bRTSEnable = 1;
   VAR_6->rts_rate = VAR_3;
  } else if (VAR_5->current_network.buseprotection) {

   VAR_6->bRTSEnable = 1;
   VAR_6->bCTSEnable = 1;
   VAR_6->rts_rate = VAR_3;
  }

  return;
 } else {
  PRT_HIGH_THROUGHPUT VAR_8 = VAR_5->pHTInfo;
  while (1) {

   if (VAR_5->current_network.buseprotection) {
    VAR_6->bRTSEnable = 1;
    VAR_6->bCTSEnable = 1;
    VAR_6->rts_rate = VAR_3;
    break;
   }

   if (VAR_8->bCurrentHTSupport && VAR_8->bEnableHT) {
    u8 VAR_9 = VAR_8->CurrentOpMode;
    if ((VAR_8->bCurBW40MHz && (VAR_9 == 2 || VAR_9 == 3)) ||
       (!VAR_8->bCurBW40MHz && VAR_9 == 3)) {
     VAR_6->rts_rate = VAR_3;
     VAR_6->bRTSEnable = 1;
     break;
    }
   }

   if (VAR_7->len > VAR_5->rts) {
    VAR_6->rts_rate = VAR_3;
    VAR_6->bRTSEnable = 1;
    break;
   }


   if (VAR_6->bAMPDUEnable) {
    VAR_6->rts_rate = VAR_3;


    VAR_6->bRTSEnable = 0;
    break;
   }

   if (VAR_8->IOTAction & VAR_0) {
    VAR_6->bCTSEnable = 1;
    VAR_6->rts_rate = VAR_3;
    VAR_6->bRTSEnable = 1;
    break;
   }

   goto NO_PROTECTION;
  }
  }

 if (0) {
  VAR_6->bCTSEnable = 1;
  VAR_6->rts_rate = VAR_3;
  VAR_6->bRTSEnable = 1;
 }
 if (VAR_5->current_network.capability & VAR_4)
  VAR_6->bUseShortPreamble = 1;
 if (VAR_5->mode == VAR_2)
  goto NO_PROTECTION;
 return;
NO_PROTECTION:
 VAR_6->bRTSEnable = 0;
 VAR_6->bCTSEnable = 0;
 VAR_6->rts_rate = 0;
 VAR_6->RTSSC = 0;
 VAR_6->bRTSBW = 0;
}
