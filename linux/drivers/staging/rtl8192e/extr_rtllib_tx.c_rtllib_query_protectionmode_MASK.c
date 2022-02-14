
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {scalar_t__ len; scalar_t__ data; } ;
struct TYPE_2__ {int capability; scalar_t__ buseprotection; } ;
struct rtllib_device {scalar_t__ mode; scalar_t__ rts; scalar_t__ iw_mode; TYPE_1__ current_network; struct rt_hi_throughput* pHTInfo; } ;
struct rt_hi_throughput {int IOTAction; int CurrentOpMode; scalar_t__ bCurBW40MHz; scalar_t__ bEnableHT; scalar_t__ bCurrentHTSupport; } ;
struct cb_desc {int bRTSSTBC; int bRTSUseShortGI; int bCTSEnable; int bRTSBW; int bRTSEnable; int bUseShortPreamble; scalar_t__ RTSSC; void* rts_rate; scalar_t__ bAMPDUEnable; scalar_t__ bMulticast; scalar_t__ bBroadcast; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct rtllib_device *VAR_7,
     struct cb_desc *VAR_8,
     struct sk_buff *VAR_9)
{
 struct rt_hi_throughput *VAR_10;

 VAR_8->bRTSSTBC = 0;
 VAR_8->bRTSUseShortGI = 0;
 VAR_8->bCTSEnable = 0;
 VAR_8->RTSSC = 0;
 VAR_8->bRTSBW = 0;

 if (VAR_8->bBroadcast || VAR_8->bMulticast)
  return;

 if (FUNC_0(VAR_9->data+16))
  return;

 if (VAR_7->mode < VAR_3) {
  if (VAR_9->len > VAR_7->rts) {
   VAR_8->bRTSEnable = 1;
   VAR_8->rts_rate = VAR_5;
  } else if (VAR_7->current_network.buseprotection) {
   VAR_8->bRTSEnable = 1;
   VAR_8->bCTSEnable = 1;
   VAR_8->rts_rate = VAR_5;
  }
  return;
 }

 VAR_10 = VAR_7->pHTInfo;

 while (1) {
  if (VAR_10->IOTAction & VAR_0) {
   VAR_8->bCTSEnable = 1;
   VAR_8->rts_rate = VAR_5;
   VAR_8->bRTSEnable = 1;
   break;
  } else if (VAR_10->IOTAction & (VAR_1 |
      VAR_2)) {
   VAR_8->bRTSEnable = 1;
   VAR_8->rts_rate = VAR_5;
   break;
  }
  if (VAR_7->current_network.buseprotection) {
   VAR_8->bRTSEnable = 1;
   VAR_8->bCTSEnable = 1;
   VAR_8->rts_rate = VAR_5;
   break;
  }
  if (VAR_10->bCurrentHTSupport && VAR_10->bEnableHT) {
   u8 VAR_11 = VAR_10->CurrentOpMode;

   if ((VAR_10->bCurBW40MHz && (VAR_11 == 2 ||
        VAR_11 == 3)) ||
        (!VAR_10->bCurBW40MHz && VAR_11 == 3)) {
    VAR_8->rts_rate = VAR_5;
    VAR_8->bRTSEnable = 1;
    break;
   }
  }
  if (VAR_9->len > VAR_7->rts) {
   VAR_8->rts_rate = VAR_5;
   VAR_8->bRTSEnable = 1;
   break;
  }
  if (VAR_8->bAMPDUEnable) {
   VAR_8->rts_rate = VAR_5;
   VAR_8->bRTSEnable = 0;
   break;
  }
  goto NO_PROTECTION;
 }
 if (VAR_7->current_network.capability & VAR_6)
  VAR_8->bUseShortPreamble = 1;
 if (VAR_7->iw_mode == VAR_4)
  goto NO_PROTECTION;
 return;
NO_PROTECTION:
 VAR_8->bRTSEnable = 0;
 VAR_8->bCTSEnable = 0;
 VAR_8->rts_rate = 0;
 VAR_8->RTSSC = 0;
 VAR_8->bRTSBW = 0;
}
