
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ bdRT2RTAggregation; } ;
struct ieee80211_network {int bssid; scalar_t__ atheros_cap_exist; scalar_t__ ralink_cap_exist; scalar_t__ broadcom_cap_exist; TYPE_1__ bssht; } ;
struct ieee80211_device {struct ieee80211_network current_network; TYPE_2__* pHTInfo; } ;
struct TYPE_4__ {void* IOTPeer; } ;
typedef TYPE_2__* PRT_HIGH_THROUGHPUT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 int FUNC_0 (int ,char*,void*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ FUNC_1 (int ,int ,int) ;

__attribute__((used)) static void FUNC_2(struct ieee80211_device *VAR_17)
{
 PRT_HIGH_THROUGHPUT VAR_18 = VAR_17->pHTInfo;
 struct ieee80211_network *VAR_19 = &VAR_17->current_network;

 if (VAR_19->bssht.bdRT2RTAggregation)
  VAR_18->IOTPeer = VAR_9;
 else if (VAR_19->broadcom_cap_exist)
  VAR_18->IOTPeer = VAR_6;
 else if ((FUNC_1(VAR_19->bssid, VAR_16, 3) == 0) ||
   (FUNC_1(VAR_19->bssid, VAR_12, 3) == 0) ||
   (FUNC_1(VAR_19->bssid, VAR_13, 3) == 0) ||
   (FUNC_1(VAR_19->bssid, VAR_14, 3) == 0))
  VAR_18->IOTPeer = VAR_6;
 else if ((FUNC_1(VAR_19->bssid, VAR_2, 3) == 0) ||
   (FUNC_1(VAR_19->bssid, VAR_1, 3) == 0) ||
   (FUNC_1(VAR_19->bssid, VAR_15, 3) == 0) ||
   (FUNC_1(VAR_19->bssid, VAR_4, 3) == 0) ||
   (FUNC_1(VAR_19->bssid, VAR_0, 3) == 0) ||
   VAR_19->ralink_cap_exist)
  VAR_18->IOTPeer = VAR_8;
 else if (VAR_19->atheros_cap_exist)
  VAR_18->IOTPeer = VAR_5;
 else if (FUNC_1(VAR_19->bssid, VAR_3, 3) == 0)
  VAR_18->IOTPeer = VAR_7;
 else
  VAR_18->IOTPeer = VAR_10;

 FUNC_0(VAR_11, "Joseph debug!! IOTPEER: %x\n", VAR_18->IOTPeer);
}
