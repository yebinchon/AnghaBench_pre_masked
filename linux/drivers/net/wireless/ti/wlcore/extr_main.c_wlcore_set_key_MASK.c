
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_5__ {size_t hlid; } ;
struct TYPE_4__ {size_t bcast_hlid; } ;
struct wl12xx_vif {scalar_t__ bss_type; size_t encryption_type; TYPE_2__ sta; TYPE_1__ ap; } ;
struct wl1271_station {size_t hlid; } ;
struct wl1271 {TYPE_3__* links; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_sta {scalar_t__ drv_priv; } ;
struct ieee80211_key_conf {int cipher; int key; int keylen; int keyidx; int flags; int hw_key_idx; } ;
typedef enum set_key_cmd { ____Placeholder_set_key_cmd } set_key_cmd ;
struct TYPE_6__ {int total_freed_pkts; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 size_t VAR_12 ;




 int FUNC_2 (struct wl1271*,struct wl12xx_vif*) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (int ,char*,int ,int ) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (struct wl1271*,struct wl12xx_vif*,int ,int ,size_t,int ,int ,int ,int ,struct ieee80211_sta*) ;
 int FUNC_7 (char*,int) ;
 struct wl12xx_vif* FUNC_8 (struct ieee80211_vif*) ;

int FUNC_9(struct wl1271 *VAR_13, enum set_key_cmd VAR_14,
     struct ieee80211_vif *VAR_15,
     struct ieee80211_sta *VAR_16,
     struct ieee80211_key_conf *VAR_17)
{
 struct wl12xx_vif *VAR_18 = FUNC_8(VAR_15);
 int VAR_19;
 u32 VAR_20 = 0;
 u16 VAR_21 = 0;
 u8 VAR_22;
 u8 VAR_23;

 FUNC_3(VAR_3, "mac80211 set key");

 FUNC_3(VAR_2, "CMD: 0x%x sta: %p", VAR_14, VAR_16);
 FUNC_3(VAR_2, "Key: algo:0x%x, id:%d, len:%d flags 0x%x",
       VAR_17->cipher, VAR_17->keyidx,
       VAR_17->keylen, VAR_17->flags);
 FUNC_4(VAR_2, "KEY: ", VAR_17->key, VAR_17->keylen);

 if (VAR_18->bss_type == VAR_0)
  if (VAR_16) {
   struct wl1271_station *VAR_24 = (void *)VAR_16->drv_priv;
   VAR_23 = VAR_24->hlid;
  } else {
   VAR_23 = VAR_18->ap.bcast_hlid;
  }
 else
  VAR_23 = VAR_18->sta.hlid;

 if (VAR_23 != VAR_12) {
  u64 VAR_25 = VAR_13->links[VAR_23].total_freed_pkts;
  VAR_20 = FUNC_0(VAR_25);
  VAR_21 = FUNC_1(VAR_25);
 }

 switch (VAR_17->cipher) {
 case 128:
 case 129:
  VAR_22 = VAR_11;

  VAR_17->hw_key_idx = VAR_17->keyidx;
  break;
 case 130:
  VAR_22 = VAR_10;
  VAR_17->hw_key_idx = VAR_17->keyidx;
  break;
 case 131:
  VAR_22 = VAR_7;
  VAR_17->flags |= VAR_5;
  break;
 case 132:
  VAR_22 = VAR_8;
  break;
 default:
  FUNC_5("Unknown key algo 0x%x", VAR_17->cipher);

  return -VAR_4;
 }

 switch (VAR_14) {
 case 133:
  VAR_19 = FUNC_6(VAR_13, VAR_18, VAR_6,
     VAR_17->keyidx, VAR_22,
     VAR_17->keylen, VAR_17->key,
     VAR_20, VAR_21, VAR_16);
  if (VAR_19 < 0) {
   FUNC_5("Could not add or replace key");
   return VAR_19;
  }





  if (VAR_18->bss_type == VAR_1 &&
      (VAR_16 || VAR_22 == VAR_11) &&
      VAR_18->encryption_type != VAR_22) {
   VAR_18->encryption_type = VAR_22;
   VAR_19 = FUNC_2(VAR_13, VAR_18);
   if (VAR_19 < 0) {
    FUNC_7("build arp rsp failed: %d", VAR_19);
    return VAR_19;
   }
  }
  break;

 case 134:
  VAR_19 = FUNC_6(VAR_13, VAR_18, VAR_9,
         VAR_17->keyidx, VAR_22,
         VAR_17->keylen, VAR_17->key,
         0, 0, VAR_16);
  if (VAR_19 < 0) {
   FUNC_5("Could not remove key");
   return VAR_19;
  }
  break;

 default:
  FUNC_5("Unsupported key cmd 0x%x", VAR_14);
  return -VAR_4;
 }

 return VAR_19;
}
