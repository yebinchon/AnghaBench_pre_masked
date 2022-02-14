
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct station_info {int generation; int assoc_req_ies_len; void* assoc_req_ies; } ;
struct net_device {int dummy; } ;
struct brcmf_pub {int dummy; } ;
struct brcmf_event_msg {scalar_t__ event_code; scalar_t__ reason; int addr; int datalen; } ;
struct brcmf_cfg80211_info {int vif_disabled; struct brcmf_pub* pub; } ;
typedef int s32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct brcmf_pub*,char*) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct net_device*,int ,int ) ;
 int FUNC_4 (struct net_device*,int ,struct station_info*,int ) ;
 struct net_device* FUNC_5 (struct brcmf_cfg80211_info*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct station_info*) ;
 struct station_info* FUNC_8 (int,int ) ;

__attribute__((used)) static s32
FUNC_9(struct brcmf_cfg80211_info *VAR_12,
          struct net_device *VAR_13,
          const struct brcmf_event_msg *VAR_14, void *VAR_15)
{
 struct brcmf_pub *VAR_16 = VAR_12->pub;
 static int VAR_17;
 u32 VAR_18 = VAR_14->event_code;
 u32 VAR_19 = VAR_14->reason;
 struct station_info *VAR_20;

 FUNC_1(VAR_8, "event %s (%u), reason %d\n",
    FUNC_2(VAR_18), VAR_18, VAR_19);
 if (VAR_18 == VAR_4 && VAR_19 == VAR_5 &&
     VAR_13 != FUNC_5(VAR_12)) {
  FUNC_1(VAR_8, "AP mode link down\n");
  FUNC_6(&VAR_12->vif_disabled);
  return 0;
 }

 if (((VAR_18 == VAR_0) || (VAR_18 == VAR_6)) &&
     (VAR_19 == VAR_7)) {
  if (!VAR_15) {
   FUNC_0(VAR_16, "No IEs present in ASSOC/REASSOC_IND\n");
   return -VAR_9;
  }

  VAR_20 = FUNC_8(sizeof(*VAR_20), VAR_11);
  if (!VAR_20)
   return -VAR_10;

  VAR_20->assoc_req_ies = VAR_15;
  VAR_20->assoc_req_ies_len = VAR_14->datalen;
  VAR_17++;
  VAR_20->generation = VAR_17;
  FUNC_4(VAR_13, VAR_14->addr, VAR_20, VAR_11);

  FUNC_7(VAR_20);
 } else if ((VAR_18 == VAR_3) ||
     (VAR_18 == VAR_2) ||
     (VAR_18 == VAR_1)) {
  FUNC_3(VAR_13, VAR_14->addr, VAR_11);
 }
 return 0;
}
