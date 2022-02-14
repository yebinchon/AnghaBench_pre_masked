
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct sk_buff {scalar_t__ data; } ;
struct rtl_80211_hdr_3addr {int addr2; int frame_ctl; } ;
struct ieee80211_rx_stats {int len; } ;
struct TYPE_5__ {int bdHTInfoLen; int bdHTInfoBuf; int bdHTCapLen; int bdHTCapBuf; } ;
struct ieee80211_network {TYPE_2__ bssht; } ;
struct TYPE_6__ {int reassoc; int rx_ass_err; int rx_ass_ok; } ;
struct ieee80211_device {scalar_t__ ps; scalar_t__ iw_mode; scalar_t__ state; int softmac_features; int assoc_id; int associate_procedure_wq; TYPE_3__ softmac_stats; int AsocRetryCount; int dev; int (* handle_assoc_response ) (int ,struct ieee80211_assoc_response_frame*,struct ieee80211_network*) ;TYPE_1__* pHTInfo; int qos_support; int last_rx_ps_time; int ps_task; scalar_t__ sta_sleep; int proto_started; } ;
struct ieee80211_assoc_response_frame {int info_element; } ;
struct TYPE_4__ {int PeerHTInfoBuf; int PeerHTCapBuf; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,...) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;



 int VAR_5 ;




 int VAR_6 ;


 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (struct ieee80211_device*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ieee80211_device*,struct sk_buff*,int*) ;
 int FUNC_4 (struct ieee80211_device*) ;
 int FUNC_5 (struct ieee80211_device*) ;
 int FUNC_6 (struct ieee80211_device*,struct sk_buff*) ;
 int FUNC_7 (struct ieee80211_device*,int ,int ,struct ieee80211_network*,struct ieee80211_rx_stats*) ;
 int FUNC_8 (struct ieee80211_device*,struct sk_buff*) ;
 int FUNC_9 (struct ieee80211_device*,struct sk_buff*) ;
 int FUNC_10 (struct ieee80211_device*,struct sk_buff*) ;
 int FUNC_11 (struct ieee80211_device*,struct sk_buff*) ;
 int VAR_13 ;
 int FUNC_12 (int ,int ,int ) ;
 int FUNC_13 (struct ieee80211_network*,int ,int) ;
 int FUNC_14 (struct ieee80211_device*) ;
 int FUNC_15 (char*,int ) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int ,struct ieee80211_assoc_response_frame*,struct ieee80211_network*) ;
 int FUNC_18 (int *) ;

inline int
FUNC_19(struct ieee80211_device *VAR_14, struct sk_buff *VAR_15,
      struct ieee80211_rx_stats *VAR_16, u16 VAR_17,
      u16 VAR_18)
{
 struct rtl_80211_hdr_3addr *VAR_19 = (struct rtl_80211_hdr_3addr *)VAR_15->data;
 u16 VAR_20;
 int VAR_21;
 struct ieee80211_assoc_response_frame *VAR_22;


 if (!VAR_14->proto_started)
  return 0;

 if (VAR_14->sta_sleep || (VAR_14->ps != VAR_4 &&
    VAR_14->iw_mode == VAR_10 &&
    VAR_14->state == VAR_3))
  FUNC_18(&VAR_14->ps_task);

 if (FUNC_2(VAR_19->frame_ctl) != VAR_6 &&
     FUNC_2(VAR_19->frame_ctl) != VAR_5)
  VAR_14->last_rx_ps_time = VAR_13;

 switch (FUNC_2(VAR_19->frame_ctl)) {
 case 135:
 case 128:
  FUNC_0("received [RE]ASSOCIATION RESPONSE (%d)\n",
    FUNC_2(VAR_19->frame_ctl));
  if ((VAR_14->softmac_features & VAR_7) &&
      VAR_14->state == VAR_1 &&
      VAR_14->iw_mode == VAR_10) {
   struct ieee80211_network VAR_23;
   struct ieee80211_network *VAR_24 = &VAR_23;

   VAR_20 = FUNC_3(VAR_14, VAR_15, &VAR_21);
   if (!VAR_20) {
    VAR_14->state = VAR_3;
    VAR_14->assoc_id = VAR_21;
    VAR_14->softmac_stats.rx_ass_ok++;


    if (VAR_14->qos_support) {
     VAR_22 = (struct ieee80211_assoc_response_frame *)VAR_15->data;
     FUNC_13(VAR_24, 0, sizeof(*VAR_24));
     if (FUNC_7(VAR_14, VAR_22->info_element, VAR_16->len - sizeof(*VAR_22), VAR_24, VAR_16)) {


      return 1;
     } else {

      FUNC_12(VAR_14->pHTInfo->PeerHTCapBuf, VAR_24->bssht.bdHTCapBuf, VAR_24->bssht.bdHTCapLen);
      FUNC_12(VAR_14->pHTInfo->PeerHTInfoBuf, VAR_24->bssht.bdHTInfoBuf, VAR_24->bssht.bdHTInfoLen);
     }
     if (VAR_14->handle_assoc_response)
      VAR_14->handle_assoc_response(VAR_14->dev, (struct ieee80211_assoc_response_frame *)VAR_19, VAR_24);
    }
    FUNC_5(VAR_14);
   } else {

    VAR_14->softmac_stats.rx_ass_err++;
    FUNC_15("Association response status code 0x%x\n",
           VAR_20);
    FUNC_0("Association response status code 0x%x\n",
           VAR_20);
    if (VAR_14->AsocRetryCount < VAR_12)
     FUNC_16(&VAR_14->associate_procedure_wq);
    else
     FUNC_4(VAR_14);
   }
  }
  break;

 case 136:
 case 129:
  if ((VAR_14->softmac_features & VAR_7) &&
      VAR_14->iw_mode == VAR_11)
   FUNC_9(VAR_14, VAR_15);
  break;

 case 134:
  if (VAR_14->softmac_features & VAR_7) {
   if (VAR_14->state == VAR_2
       && VAR_14->iw_mode == VAR_10) {
    FUNC_0("Received auth response");
    FUNC_6(VAR_14, VAR_15);
   } else if (VAR_14->iw_mode == VAR_11) {
    FUNC_10(VAR_14, VAR_15);
   }
  }
  break;

 case 130:
  if ((VAR_14->softmac_features & VAR_8) &&
      ((VAR_14->iw_mode == VAR_9 ||
        VAR_14->iw_mode == VAR_11) &&
       VAR_14->state == VAR_3)) {
   FUNC_11(VAR_14, VAR_15);
  }
  break;

 case 132:
 case 133:



  if ((VAR_14->softmac_features & VAR_7) &&
      VAR_14->state == VAR_3 &&
      VAR_14->iw_mode == VAR_10) {
   VAR_14->state = VAR_0;
   VAR_14->softmac_stats.reassoc++;

   FUNC_14(VAR_14);

   FUNC_1(VAR_14, VAR_19->addr2);
   FUNC_16(&VAR_14->associate_procedure_wq);
  }
  break;
 case 131:
  FUNC_8(VAR_14, VAR_15);
  break;
 default:
  return -1;
 }


 return 0;
}
