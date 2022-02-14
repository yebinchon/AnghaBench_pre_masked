
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
struct vnt_private {int preamble_type; int short_slot_time; scalar_t__ op_mode; int current_tsf; TYPE_3__* usb; int current_rate; int * bb_vga; int basic_rates; int current_aid; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_hw {struct vnt_private* priv; } ;
struct TYPE_6__ {TYPE_1__* chan; } ;
struct ieee80211_bss_conf {int beacon_int; int sync_tsf; TYPE_4__* beacon_rate; scalar_t__ assoc; int enable_beacon; TYPE_2__ chandef; scalar_t__ use_short_slot; scalar_t__ use_cts_prot; scalar_t__ use_short_preamble; int basic_rates; scalar_t__ bssid; int aid; } ;
struct TYPE_8__ {int hw_value; } ;
struct TYPE_7__ {int dev; } ;
struct TYPE_5__ {int hw_value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (struct vnt_private*,int ,int ,int ) ;
 int FUNC_2 (struct vnt_private*,struct ieee80211_vif*,struct ieee80211_bss_conf*) ;
 int FUNC_3 (struct vnt_private*) ;
 int FUNC_4 (struct vnt_private*) ;
 int FUNC_5 (struct vnt_private*) ;
 int FUNC_6 (struct vnt_private*) ;
 int FUNC_7 (struct vnt_private*) ;
 int FUNC_8 (struct vnt_private*,int ,int ) ;
 int FUNC_9 (struct vnt_private*,int ,int ) ;
 int FUNC_10 (struct vnt_private*,int ) ;
 int FUNC_11 (struct vnt_private*,int *) ;
 int FUNC_12 (struct vnt_private*,int ) ;
 int FUNC_13 (struct vnt_private*,int ,int ) ;
 int FUNC_14 (struct vnt_private*) ;
 int FUNC_15 (struct vnt_private*) ;
 int FUNC_16 (struct vnt_private*,int ) ;
 int FUNC_17 (struct vnt_private*) ;
 int FUNC_18 (struct vnt_private*,int) ;
 int FUNC_19 (struct vnt_private*) ;

__attribute__((used)) static void FUNC_20(struct ieee80211_hw *VAR_14,
     struct ieee80211_vif *VAR_15,
     struct ieee80211_bss_conf *VAR_16, u32 VAR_17)
{
 struct vnt_private *VAR_18 = VAR_14->priv;

 VAR_18->current_aid = VAR_16->aid;

 if (VAR_17 & VAR_4 && VAR_16->bssid)
  FUNC_11(VAR_18, (u8 *)VAR_16->bssid);

 if (VAR_17 & VAR_1) {
  VAR_18->basic_rates = VAR_16->basic_rates;

  FUNC_19(VAR_18);
  FUNC_14(VAR_18);

  FUNC_0(&VAR_18->usb->dev, "basic rates %x\n", VAR_16->basic_rates);
 }

 if (VAR_17 & VAR_6) {
  if (VAR_16->use_short_preamble) {
   FUNC_6(VAR_18);
   VAR_18->preamble_type = 1;
  } else {
   FUNC_4(VAR_18);
   VAR_18->preamble_type = 0;
  }
 }

 if (VAR_17 & VAR_5) {
  if (VAR_16->use_cts_prot)
   FUNC_7(VAR_18);
  else
   FUNC_5(VAR_18);
 }

 if (VAR_17 & VAR_7) {
  if (VAR_16->use_short_slot)
   VAR_18->short_slot_time = 1;
  else
   VAR_18->short_slot_time = 0;

  FUNC_15(VAR_18);
  FUNC_17(VAR_18);
  FUNC_16(VAR_18, VAR_18->bb_vga[0]);
  FUNC_18(VAR_18, 0);
 }

 if (VAR_17 & VAR_8)
  FUNC_13(VAR_18, VAR_18->current_rate,
    VAR_16->chandef.chan->hw_value);

 if (VAR_17 & VAR_2) {
  FUNC_0(&VAR_18->usb->dev,
   "Beacon enable %d\n", VAR_16->enable_beacon);

  if (VAR_16->enable_beacon) {
   FUNC_2(VAR_18, VAR_15, VAR_16);

   FUNC_9(VAR_18, VAR_9, VAR_12);
  } else {
   FUNC_8(VAR_18, VAR_9, VAR_12);
  }
 }

 if (VAR_17 & (VAR_0 | VAR_3) &&
     VAR_18->op_mode != VAR_11) {
  if (VAR_16->assoc && VAR_16->beacon_rate) {
   FUNC_9(VAR_18, VAR_10,
         VAR_13);

   FUNC_1(VAR_18, VAR_16->beacon_rate->hw_value,
           VAR_16->sync_tsf, VAR_18->current_tsf);

   FUNC_10(VAR_18, VAR_16->beacon_int);

   FUNC_12(VAR_18, VAR_16->beacon_int);
  } else {
   FUNC_3(VAR_18);

   FUNC_8(VAR_18, VAR_10,
          VAR_13);
  }
 }
}
