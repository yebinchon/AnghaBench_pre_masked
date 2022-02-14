
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usbnet {int net; } ;
struct rndis_wlan_private {scalar_t__ infra_mode; int connected; int bssid; int work; int workqueue; int work_pending; } ;
struct ndis_80211_assoc_info {int offset_resp_ies; int resp_ie_length; int offset_req_ies; int req_ie_length; } ;
struct cfg80211_roam_info {unsigned int req_ie_len; unsigned int resp_ie_len; int * resp_ie; int * req_ie; int * bssid; int channel; } ;
typedef int bssid ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_5 ;
 int FUNC_1 (int ,int *,int *,unsigned int,int *,unsigned int,int ,int ) ;
 int FUNC_2 (int ,int *,int ,int ) ;
 int FUNC_3 (int ,struct cfg80211_roam_info*,int ) ;
 int FUNC_4 (struct usbnet*,struct ndis_80211_assoc_info*,unsigned int) ;
 int FUNC_5 (struct usbnet*,int *) ;
 int FUNC_6 (struct usbnet*,int *) ;
 struct rndis_wlan_private* FUNC_7 (struct usbnet*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct ndis_80211_assoc_info*) ;
 struct ndis_80211_assoc_info* FUNC_10 (unsigned int,int ) ;
 unsigned int FUNC_11 (int ) ;
 int FUNC_12 (int ,int *,int) ;
 int FUNC_13 (int *,int ,int) ;
 int FUNC_14 (int ,char*,int *,char*) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ,int *) ;
 int FUNC_17 (struct usbnet*,int *,int*) ;
 int FUNC_18 (struct usbnet*,int *,struct ndis_80211_assoc_info*) ;
 int FUNC_19 (int ,int *) ;
 int FUNC_20 (struct usbnet*) ;

__attribute__((used)) static void FUNC_21(struct usbnet *VAR_6)
{
 struct rndis_wlan_private *VAR_7 = FUNC_7(VAR_6);
 struct ndis_80211_assoc_info *VAR_8 = ((void*)0);
 u8 VAR_9[VAR_1];
 unsigned int VAR_10, VAR_11;
 unsigned int VAR_12;
 u8 *VAR_13, *VAR_14;
 int VAR_15;
 bool VAR_16 = 0;
 bool VAR_17;

 if (VAR_7->infra_mode == VAR_4 && VAR_7->connected) {


  VAR_16 = 1;
 }

 VAR_11 = 0;
 VAR_10 = 0;
 VAR_13 = ((void*)0);
 VAR_14 = ((void*)0);

 if (VAR_7->infra_mode == VAR_4) {
  VAR_8 = FUNC_10(VAR_0, VAR_2);
  if (!VAR_8) {

   FUNC_19(VAR_5, &VAR_7->work_pending);
   FUNC_16(VAR_7->workqueue, &VAR_7->work);
   return;
  }


  VAR_15 = FUNC_4(VAR_6, VAR_8, VAR_0);
  if (!VAR_15) {
   VAR_11 = FUNC_11(VAR_8->req_ie_length);
   if (VAR_11 > VAR_0)
    VAR_11 = VAR_0;
   if (VAR_11 != 0) {
    VAR_12 = FUNC_11(VAR_8->offset_req_ies);

    if (VAR_12 > VAR_0)
     VAR_12 = VAR_0;

    VAR_13 = (u8 *)VAR_8 + VAR_12;

    if (VAR_12 + VAR_11 > VAR_0)
     VAR_11 =
      VAR_0 - VAR_12;
   }

   VAR_10 = FUNC_11(VAR_8->resp_ie_length);
   if (VAR_10 > VAR_0)
    VAR_10 = VAR_0;
   if (VAR_10 != 0) {
    VAR_12 = FUNC_11(VAR_8->offset_resp_ies);

    if (VAR_12 > VAR_0)
     VAR_12 = VAR_0;

    VAR_14 = (u8 *)VAR_8 + VAR_12;

    if (VAR_12 + VAR_10 > VAR_0)
     VAR_10 =
      VAR_0 - VAR_12;
   }
  } else {




   FUNC_9(VAR_8);
   VAR_8 = ((void*)0);
  }
 } else if (FUNC_0(VAR_7->infra_mode != VAR_3))
  return;

 VAR_15 = FUNC_5(VAR_6, VAR_9);
 if (VAR_15 < 0)
  FUNC_13(VAR_9, 0, sizeof(VAR_9));

 FUNC_14(VAR_6->net, "link up work: [%pM]%s\n",
     VAR_9, VAR_16 ? " roamed" : "");
 VAR_17 = 0;
 FUNC_17(VAR_6, VAR_9, &VAR_17);

 if (!FUNC_8(VAR_9) && !VAR_17) {



  FUNC_18(VAR_6, VAR_9, VAR_8);
 }

 if (VAR_7->infra_mode == VAR_4) {
  if (!VAR_16) {
   FUNC_1(VAR_6->net, VAR_9, VAR_13,
      VAR_11, VAR_14,
      VAR_10, 0, VAR_2);
  } else {
   struct cfg80211_roam_info VAR_18 = {
    .channel = FUNC_6(VAR_6, ((void*)0)),
    .bssid = VAR_9,
    .req_ie = VAR_13,
    .req_ie_len = VAR_11,
    .resp_ie = VAR_14,
    .resp_ie_len = VAR_10,
   };

   FUNC_3(VAR_6->net, &VAR_18, VAR_2);
  }
 } else if (VAR_7->infra_mode == VAR_3)
  FUNC_2(VAR_6->net, VAR_9,
         FUNC_6(VAR_6, ((void*)0)),
         VAR_2);

 FUNC_9(VAR_8);

 VAR_7->connected = 1;
 FUNC_12(VAR_7->bssid, VAR_9, VAR_1);

 FUNC_20(VAR_6);
 FUNC_15(VAR_6->net);
}
