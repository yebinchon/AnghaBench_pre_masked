
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int RT2RT_HT_Mode; scalar_t__ bdRT2RTAggregation; } ;
struct rtllib_network {scalar_t__ airgo_cap_exist; scalar_t__ marvell_cap_exist; int bssid; scalar_t__ cisco_cap_exist; scalar_t__ atheros_cap_exist; scalar_t__ ralink_cap_exist; scalar_t__ broadcom_cap_exist; TYPE_1__ bssht; } ;
struct rtllib_device {int dev; struct rtllib_network current_network; struct rt_hi_throughput* pHTInfo; } ;
struct rt_hi_throughput {void* IOTPeer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;
 void* VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 scalar_t__ FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,char*,void*) ;

__attribute__((used)) static void FUNC_2(struct rtllib_device *VAR_24)
{
 struct rt_hi_throughput *VAR_25 = VAR_24->pHTInfo;
 struct rtllib_network *VAR_26 = &VAR_24->current_network;

 if (VAR_26->bssht.bdRT2RTAggregation) {
  VAR_25->IOTPeer = VAR_14;
  if (VAR_26->bssht.RT2RT_HT_Mode & VAR_21)
   VAR_25->IOTPeer = VAR_15;
  if (VAR_26->bssht.RT2RT_HT_Mode & VAR_22)
   VAR_25->IOTPeer = VAR_7;
 } else if (VAR_26->broadcom_cap_exist)
  VAR_25->IOTPeer = VAR_10;
 else if (!FUNC_0(VAR_26->bssid, VAR_23, 3) ||
   !FUNC_0(VAR_26->bssid, VAR_17, 3) ||
   !FUNC_0(VAR_26->bssid, VAR_18, 3))
  VAR_25->IOTPeer = VAR_10;
 else if ((FUNC_0(VAR_26->bssid, VAR_2, 3) == 0) ||
   (FUNC_0(VAR_26->bssid, VAR_1, 3) == 0) ||
   (FUNC_0(VAR_26->bssid, VAR_20, 3) == 0) ||
   (FUNC_0(VAR_26->bssid, VAR_6, 3) == 0) ||
   (FUNC_0(VAR_26->bssid, VAR_0, 3) == 0) ||
    VAR_26->ralink_cap_exist)
  VAR_25->IOTPeer = VAR_13;
 else if ((VAR_26->atheros_cap_exist) ||
  (FUNC_0(VAR_26->bssid, VAR_4, 3) == 0) ||
  (FUNC_0(VAR_26->bssid, VAR_5, 3) == 0))
  VAR_25->IOTPeer = VAR_9;
 else if ((FUNC_0(VAR_26->bssid, VAR_3, 3) == 0) ||
    VAR_26->cisco_cap_exist)
  VAR_25->IOTPeer = VAR_11;
 else if ((FUNC_0(VAR_26->bssid, VAR_19, 3) == 0) ||
    VAR_26->marvell_cap_exist)
  VAR_25->IOTPeer = VAR_12;
 else if (VAR_26->airgo_cap_exist)
  VAR_25->IOTPeer = VAR_8;
 else
  VAR_25->IOTPeer = VAR_16;

 FUNC_1(VAR_24->dev, "IOTPEER: %x\n", VAR_25->IOTPeer);
}
