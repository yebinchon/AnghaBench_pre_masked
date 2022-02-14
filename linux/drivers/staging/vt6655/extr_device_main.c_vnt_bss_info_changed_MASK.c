
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct vnt_private {int byPreambleType; int bShortSlotTime; scalar_t__ op_mode; scalar_t__ PortOffset; TYPE_3__* pcid; int wCurrentRate; int * abyBBVGA; int byBBType; int basic_rates; int lock; int current_aid; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_hw {struct vnt_private* priv; } ;
struct TYPE_6__ {TYPE_1__* chan; } ;
struct ieee80211_bss_conf {int beacon_int; int sync_tsf; TYPE_4__* beacon_rate; scalar_t__ assoc; int enable_beacon; TYPE_2__ chandef; scalar_t__ use_short_slot; scalar_t__ use_cts_prot; scalar_t__ use_short_preamble; int basic_rates; scalar_t__ bssid; int aid; } ;
struct TYPE_8__ {int hw_value; } ;
struct TYPE_7__ {int dev; } ;
struct TYPE_5__ {int hw_value; } ;


 int FUNC_0 (struct vnt_private*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct vnt_private*,int ) ;
 int FUNC_2 (struct vnt_private*,int ) ;
 int FUNC_3 (struct vnt_private*,int ,int ) ;
 int FUNC_4 (struct vnt_private*,int ) ;
 int FUNC_5 (struct vnt_private*) ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (scalar_t__,int ,int ) ;
 int FUNC_11 (scalar_t__,int ,int ) ;
 int FUNC_12 (scalar_t__,int *) ;
 scalar_t__ VAR_11 ;
 int FUNC_13 (struct vnt_private*,int ,int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_14 (scalar_t__,int ) ;
 int FUNC_15 (int *,char*,int ) ;
 int FUNC_16 (int *,unsigned long) ;
 int FUNC_17 (int *,unsigned long) ;
 int FUNC_18 (struct vnt_private*,struct ieee80211_vif*,struct ieee80211_bss_conf*) ;

__attribute__((used)) static void FUNC_19(struct ieee80211_hw *VAR_15,
     struct ieee80211_vif *VAR_16,
     struct ieee80211_bss_conf *VAR_17, u32 VAR_18)
{
 struct vnt_private *VAR_19 = VAR_15->priv;

 VAR_19->current_aid = VAR_17->aid;

 if (VAR_18 & VAR_4 && VAR_17->bssid) {
  unsigned long VAR_20;

  FUNC_16(&VAR_19->lock, VAR_20);

  FUNC_12(VAR_19->PortOffset, (u8 *)VAR_17->bssid);

  FUNC_17(&VAR_19->lock, VAR_20);
 }

 if (VAR_18 & VAR_1) {
  VAR_19->basic_rates = VAR_17->basic_rates;

  FUNC_5(VAR_19);

  FUNC_15(&VAR_19->pcid->dev,
   "basic rates %x\n", VAR_17->basic_rates);
 }

 if (VAR_18 & VAR_6) {
  if (VAR_17->use_short_preamble) {
   FUNC_8(VAR_19->PortOffset);
   VAR_19->byPreambleType = 1;
  } else {
   FUNC_6(VAR_19->PortOffset);
   VAR_19->byPreambleType = 0;
  }
 }

 if (VAR_18 & VAR_5) {
  if (VAR_17->use_cts_prot)
   FUNC_9(VAR_19->PortOffset);
  else
   FUNC_7(VAR_19->PortOffset);
 }

 if (VAR_18 & VAR_7) {
  if (VAR_17->use_short_slot)
   VAR_19->bShortSlotTime = 1;
  else
   VAR_19->bShortSlotTime = 0;

  FUNC_2(VAR_19, VAR_19->byBBType);
  FUNC_0(VAR_19, VAR_19->abyBBVGA[0]);
 }

 if (VAR_18 & VAR_8)
  FUNC_13(VAR_19, VAR_19->wCurrentRate,
       VAR_17->chandef.chan->hw_value);

 if (VAR_18 & VAR_2) {
  FUNC_15(&VAR_19->pcid->dev,
   "Beacon enable %d\n", VAR_17->enable_beacon);

  if (VAR_17->enable_beacon) {
   FUNC_18(VAR_19, VAR_16, VAR_17);

   FUNC_11(VAR_19->PortOffset, VAR_9,
          VAR_12);
  } else {
   FUNC_10(VAR_19->PortOffset, VAR_9,
           VAR_12);
  }
 }

 if (VAR_18 & (VAR_0 | VAR_3) &&
     VAR_19->op_mode != VAR_11) {
  if (VAR_17->assoc && VAR_17->beacon_rate) {
   FUNC_3(VAR_19, VAR_17->beacon_rate->hw_value,
           VAR_17->sync_tsf);

   FUNC_1(VAR_19, VAR_17->beacon_int);

   FUNC_4(VAR_19, VAR_17->beacon_int);
  } else {
   FUNC_14(VAR_19->PortOffset + VAR_10,
         VAR_14);
   FUNC_14(VAR_19->PortOffset + VAR_10,
         VAR_13);
  }
 }
}
