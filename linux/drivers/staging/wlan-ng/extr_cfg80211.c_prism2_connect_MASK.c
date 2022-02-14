
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
struct wlandevice {int dummy; } ;
struct wiphy {int dummy; } ;
struct TYPE_7__ {int len; int data; } ;
struct TYPE_8__ {TYPE_3__ data; } ;
struct TYPE_6__ {int data; } ;
struct p80211msg_lnxreq_autojoin {TYPE_4__ ssid; int msgcode; TYPE_2__ authtype; } ;
struct net_device {struct wlandevice* ml_priv; } ;
struct ieee80211_channel {int center_freq; } ;
struct TYPE_5__ {scalar_t__ cipher_group; } ;
struct cfg80211_connect_params {int ssid_len; scalar_t__ auth_type; int key_idx; int ssid; scalar_t__ key; int key_len; TYPE_1__ crypto; struct ieee80211_channel* channel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (struct net_device*,char*,scalar_t__) ;
 int FUNC_4 (struct wlandevice*,int *) ;
 int FUNC_5 (struct wlandevice*,int ,int ,int *) ;
 int FUNC_6 (struct wlandevice*,int ,int) ;

__attribute__((used)) static int FUNC_7(struct wiphy *VAR_17, struct net_device *VAR_18,
     struct cfg80211_connect_params *VAR_19)
{
 struct wlandevice *VAR_20 = VAR_18->ml_priv;
 struct ieee80211_channel *VAR_21 = VAR_19->channel;
 struct p80211msg_lnxreq_autojoin VAR_22;
 u32 VAR_23;
 int VAR_24 = VAR_19->ssid_len;
 int VAR_25 = -1;
 int VAR_26 = (VAR_19->crypto.cipher_group == VAR_16) ||
     (VAR_19->crypto.cipher_group == VAR_15);
 int VAR_27;
 int VAR_28 = 0;


 if (VAR_21) {
  VAR_25 = FUNC_1(VAR_21->center_freq);
  VAR_27 = FUNC_6(VAR_20,
      VAR_0,
      VAR_25);
  if (VAR_27)
   goto exit;
 }


 if ((VAR_19->auth_type == VAR_8) ||
     ((VAR_19->auth_type == VAR_7) && !VAR_26))
  VAR_22.authtype.data = VAR_11;
 else if ((VAR_19->auth_type == VAR_9) ||
   ((VAR_19->auth_type == VAR_7) && VAR_26))
  VAR_22.authtype.data = VAR_12;
 else
  FUNC_3(VAR_18,
       "Unhandled authorisation type for connect (%d)\n",
       VAR_19->auth_type);


 if (VAR_26) {
  if (VAR_19->key) {
   if (VAR_19->key_idx >= VAR_10)
    return -VAR_6;

   VAR_27 = FUNC_6(VAR_20,
    VAR_3,
    VAR_19->key_idx);
   if (VAR_27)
    goto exit;


   VAR_23 = FUNC_0(
     VAR_19->key_idx + 1);
   VAR_27 = FUNC_5(VAR_20,
       VAR_23, VAR_19->key_len,
       (u8 *)VAR_19->key);
   if (VAR_27)
    goto exit;
  }





  VAR_27 = FUNC_6(VAR_20,
      VAR_2,
      VAR_14);
  if (VAR_27)
   goto exit;

  VAR_27 = FUNC_6(VAR_20,
      VAR_1,
      VAR_14);
  if (VAR_27)
   goto exit;

 } else {



  VAR_27 = FUNC_6(VAR_20,
      VAR_2,
      VAR_13);
  if (VAR_27)
   goto exit;

  VAR_27 = FUNC_6(VAR_20,
      VAR_1,
      VAR_13);
  if (VAR_27)
   goto exit;
 }




 VAR_22.msgcode = VAR_4;

 FUNC_2(VAR_22.ssid.data.data, VAR_19->ssid, VAR_24);
 VAR_22.ssid.data.len = VAR_24;

 VAR_27 = FUNC_4(VAR_20, (u8 *)&VAR_22);

exit:
 if (VAR_27)
  VAR_28 = -VAR_5;

 return VAR_28;
}
