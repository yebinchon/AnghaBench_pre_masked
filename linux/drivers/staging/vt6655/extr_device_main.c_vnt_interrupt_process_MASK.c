
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int int_works; } ;
struct ieee80211_low_level_stats {int dot11RTSSuccessCount; int dot11RTSFailureCount; int dot11ACKFailureCount; int dot11FCSErrorCount; } ;
struct vnt_private {scalar_t__ op_mode; int bBeaconSent; int bIsBeaconBufReadySet; int lock; TYPE_2__ opts; scalar_t__ PortOffset; int hw; TYPE_3__* vif; scalar_t__ cbBeaconBufReadySetCnt; scalar_t__ bEnablePSMode; struct ieee80211_low_level_stats low_stats; } ;
struct TYPE_4__ {int beacon_int; scalar_t__ enable_beacon; } ;
struct TYPE_6__ {TYPE_1__ bss_conf; } ;


 scalar_t__ FUNC_0 (struct vnt_private*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (struct vnt_private*,int) ;
 int FUNC_2 (scalar_t__,int*) ;
 int FUNC_3 (scalar_t__,int*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__,int) ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_7 (void*) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_8 (scalar_t__,int ) ;
 int FUNC_9 (scalar_t__,int ) ;
 int FUNC_10 (struct vnt_private*,int) ;
 scalar_t__ FUNC_11 (struct vnt_private*,int ) ;
 scalar_t__ FUNC_12 (struct vnt_private*,int ) ;
 scalar_t__ FUNC_13 (int ,int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (char*) ;
 int FUNC_16 (int *,unsigned long) ;
 int FUNC_17 (int *,unsigned long) ;
 int FUNC_18 (struct vnt_private*,TYPE_3__*) ;
 int FUNC_19 (struct vnt_private*) ;

__attribute__((used)) static void FUNC_20(struct vnt_private *VAR_17)
{
 struct ieee80211_low_level_stats *VAR_18 = &VAR_17->low_stats;
 int VAR_19 = 0;
 u32 VAR_20;
 u32 VAR_21;
 unsigned long VAR_22;

 FUNC_2(VAR_17->PortOffset, &VAR_21);

 if (VAR_21 == 0)
  return;

 if (VAR_21 == 0xffffffff) {
  FUNC_15("isr = 0xffff\n");
  return;
 }

 FUNC_16(&VAR_17->lock, VAR_22);


 FUNC_3(VAR_17->PortOffset, &VAR_20);

 VAR_18->dot11RTSSuccessCount += VAR_20 & 0xff;
 VAR_18->dot11RTSFailureCount += (VAR_20 >> 8) & 0xff;
 VAR_18->dot11ACKFailureCount += (VAR_20 >> 16) & 0xff;
 VAR_18->dot11FCSErrorCount += (VAR_20 >> 24) & 0xff;







 while (VAR_21 && VAR_17->vif) {
  FUNC_6(VAR_17->PortOffset, VAR_21);

  if (VAR_21 & VAR_2) {
   FUNC_15(" ISR_FETALERR\n");
   FUNC_8(VAR_17->PortOffset + VAR_8, 0);
   FUNC_9(VAR_17->PortOffset +
         VAR_8, VAR_12);
   FUNC_10(VAR_17, VAR_21);
  }

  if (VAR_21 & VAR_6) {
   if (VAR_17->op_mode != VAR_10)
    FUNC_19(VAR_17);

   VAR_17->bBeaconSent = 0;
   if (VAR_17->bEnablePSMode)
    FUNC_7((void *)VAR_17);

   if ((VAR_17->op_mode == VAR_11 ||
       VAR_17->op_mode == VAR_10) &&
       VAR_17->vif->bss_conf.enable_beacon) {
    FUNC_1(VAR_17,
         (VAR_17->vif->bss_conf.beacon_int - VAR_9) << 10);
   }


  }

  if (VAR_21 & VAR_1) {
   if (VAR_17->op_mode == VAR_10) {
    VAR_17->bIsBeaconBufReadySet = 0;
    VAR_17->cbBeaconBufReadySetCnt = 0;
   }

   VAR_17->bBeaconSent = 1;
  }

  if (VAR_21 & VAR_3)
   VAR_19 += FUNC_11(VAR_17, VAR_14);

  if (VAR_21 & VAR_4)
   VAR_19 += FUNC_11(VAR_17, VAR_15);

  if (VAR_21 & VAR_7)
   VAR_19 += FUNC_12(VAR_17, VAR_16);

  if (VAR_21 & VAR_0)
   VAR_19 += FUNC_12(VAR_17, VAR_13);

  if (VAR_21 & VAR_5) {
   if (VAR_17->vif->bss_conf.enable_beacon)
    FUNC_18(VAR_17, VAR_17->vif);
  }


  if (FUNC_0(VAR_17, VAR_16) &&
      FUNC_0(VAR_17, VAR_13) &&
      FUNC_13(VAR_17->hw, 0))
   FUNC_14(VAR_17->hw);

  FUNC_2(VAR_17->PortOffset, &VAR_21);

  FUNC_4(VAR_17->PortOffset);
  FUNC_5(VAR_17->PortOffset);

  if (VAR_19 > VAR_17->opts.int_works)
   break;
 }

 FUNC_17(&VAR_17->lock, VAR_22);
}
