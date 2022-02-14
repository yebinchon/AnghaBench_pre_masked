
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u16 ;
struct TYPE_7__ {int * challenge; } ;
struct TYPE_10__ {scalar_t__ last_beacon; } ;
struct TYPE_9__ {TYPE_1__ sta; TYPE_4__ ap; } ;
struct sta_info {int listen_interval; int users; int last_rx; TYPE_3__ u; scalar_t__ flags; scalar_t__ ap; int addr; struct lib80211_crypt_data* crypt; } ;
struct sk_buff {int* data; int len; } ;
struct net_device {int name; int dev_addr; } ;
struct lib80211_crypt_data {int dummy; } ;
struct ieee80211_hdr {int frame_control; int addr2; } ;
struct hostap_80211_rx_status {int dummy; } ;
struct ap_data {scalar_t__ num_sta; int tx_callback_auth; int mac_restrictions; int sta_table_lock; } ;
struct TYPE_8__ {struct lib80211_crypt_data** crypt; } ;
struct TYPE_11__ {int auth_algs; struct ap_data* ap; TYPE_2__ crypt_info; struct net_device* dev; } ;
typedef TYPE_5__ local_info_t ;
typedef int __le16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ,char*,int ,int,...) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;


 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_1 (int ) ;
 struct sta_info* FUNC_2 (struct ap_data*,int ) ;
 int * FUNC_3 (struct ap_data*) ;
 scalar_t__ FUNC_4 (int *,int ) ;
 struct sta_info* FUNC_5 (struct ap_data*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int) ;
 scalar_t__ FUNC_9 (int ,int ) ;
 size_t FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int VAR_16 ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int *,char*,int) ;
 int FUNC_15 (int *,int *,int) ;
 int FUNC_16 (struct net_device*,int,char*,int,int ,int ) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 scalar_t__ FUNC_19 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_20(local_info_t *VAR_17, struct sk_buff *VAR_18,
     struct hostap_80211_rx_status *VAR_19)
{
 struct net_device *VAR_20 = VAR_17->dev;
 struct ieee80211_hdr *VAR_21 = (struct ieee80211_hdr *) VAR_18->data;
 size_t VAR_22;
 struct ap_data *VAR_23 = VAR_17->ap;
 char VAR_24[8 + VAR_8], *VAR_25 = ((void*)0);
 int VAR_26, VAR_27;
 u16 VAR_28, VAR_29, VAR_30;
 __le16 *VAR_31;
 u16 VAR_32 = VAR_12;
 struct sta_info *VAR_33 = ((void*)0);
 struct lib80211_crypt_data *VAR_34;
 char *VAR_35 = "";

 VAR_26 = VAR_18->len - VAR_3;

 VAR_22 = FUNC_10(VAR_21->frame_control);

 if (VAR_26 < 6) {
  FUNC_0(VAR_0, "%s: handle_authen - too short payload "
         "(len=%d) from %pM\n", VAR_20->name, VAR_26, VAR_21->addr2);
  return;
 }

 FUNC_17(&VAR_17->ap->sta_table_lock);
 VAR_33 = FUNC_5(VAR_17->ap, VAR_21->addr2);
 if (VAR_33)
  FUNC_7(&VAR_33->users);
 FUNC_18(&VAR_17->ap->sta_table_lock);

 if (VAR_33 && VAR_33->crypt)
  VAR_34 = VAR_33->crypt;
 else {
  int VAR_36 = 0;
  if (VAR_18->len >= VAR_22 + 3)
   VAR_36 = VAR_18->data[VAR_22 + 3] >> 6;
  VAR_34 = VAR_17->crypt_info.crypt[VAR_36];
 }

 VAR_31 = (__le16 *) (VAR_18->data + VAR_3);
 VAR_28 = FUNC_1(*VAR_31);
 VAR_31++;
 VAR_29 = FUNC_1(*VAR_31);
 VAR_31++;
 VAR_30 = FUNC_1(*VAR_31);
 VAR_31++;

 if (FUNC_9(VAR_20->dev_addr, VAR_21->addr2) ||
     FUNC_4(&VAR_23->mac_restrictions, VAR_21->addr2)) {
  VAR_35 = "authentication denied";
  VAR_32 = VAR_14;
  goto fail;
 }

 if (((VAR_17->auth_algs & VAR_6) &&
      VAR_28 == 129) ||
     ((VAR_17->auth_algs & VAR_7) &&
      VAR_34 && VAR_28 == 128)) {
 } else {
  VAR_35 = "unsupported algorithm";
  VAR_32 = VAR_11;
  goto fail;
 }

 if (VAR_26 >= 8) {
  u8 *VAR_37 = (u8 *) VAR_31;
  if (*VAR_37 == VAR_9) {
   if (*(VAR_37 + 1) != VAR_8) {
    VAR_35 = "invalid challenge len";
    VAR_32 = VAR_10;
    goto fail;
   }
   if (VAR_26 - 8 < VAR_8) {
    VAR_35 = "challenge underflow";
    VAR_32 = VAR_10;
    goto fail;
   }
   VAR_25 = (char *) (VAR_37 + 2);
  }
 }

 if (VAR_33 && VAR_33->ap) {
  if (FUNC_19(VAR_16, VAR_33->u.ap.last_beacon +
          (10 * VAR_33->listen_interval * VAR_1) / 1024)) {
   FUNC_0(VAR_0, "%s: no beacons received for a while,"
          " assuming AP %pM is now STA\n",
          VAR_20->name, VAR_33->addr);
   VAR_33->ap = 0;
   VAR_33->flags = 0;
   VAR_33->u.sta.challenge = ((void*)0);
  } else {
   VAR_35 = "AP trying to authenticate?";
   VAR_32 = VAR_14;
   goto fail;
  }
 }

 if ((VAR_28 == 129 && VAR_29 == 1) ||
     (VAR_28 == 128 &&
      (VAR_29 == 1 ||
       (VAR_29 == 3 && VAR_33 != ((void*)0) &&
        VAR_33->u.sta.challenge != ((void*)0))))) {
 } else {
  VAR_35 = "unknown authentication transaction number";
  VAR_32 = VAR_13;
  goto fail;
 }

 if (VAR_33 == ((void*)0)) {
  VAR_35 = "new STA";

  if (VAR_17->ap->num_sta >= VAR_5) {

   VAR_35 = "no more room for new STAs";
   VAR_32 = VAR_14;
   goto fail;
  }

  VAR_33 = FUNC_2(VAR_17->ap, VAR_21->addr2);
  if (VAR_33 == ((void*)0)) {
   VAR_35 = "ap_add_sta failed";
   VAR_32 = VAR_14;
   goto fail;
  }
 }

 switch (VAR_28) {
 case 129:
  VAR_35 = "authOK";





  VAR_33->flags |= VAR_15;
  break;

 case 128:
  if (VAR_29 == 1) {
   if (VAR_33->u.sta.challenge == ((void*)0)) {
    VAR_33->u.sta.challenge =
     FUNC_3(VAR_17->ap);
    if (VAR_33->u.sta.challenge == ((void*)0)) {
     VAR_32 = VAR_14;
     goto fail;
    }
   }
  } else {
   if (VAR_33->u.sta.challenge == ((void*)0) ||
       VAR_25 == ((void*)0) ||
       FUNC_14(VAR_33->u.sta.challenge, VAR_25,
       VAR_8) != 0 ||
       !FUNC_11(VAR_21->frame_control)) {
    VAR_35 = "challenge response incorrect";
    VAR_32 = VAR_10;
    goto fail;
   }

   VAR_35 = "challenge OK - authOK";





   VAR_33->flags |= VAR_15;
   FUNC_12(VAR_33->u.sta.challenge);
   VAR_33->u.sta.challenge = ((void*)0);
  }
  break;
 }

 fail:
 VAR_31 = (__le16 *) VAR_24;
 *VAR_31 = FUNC_8(VAR_28);
 VAR_31++;
 *VAR_31 = FUNC_8(VAR_29 + 1);
 VAR_31++;
 *VAR_31 = FUNC_8(VAR_32);
 VAR_31++;
 VAR_27 = 6;

 if (VAR_32 == VAR_12 && VAR_33 != ((void*)0) &&
     VAR_33->u.sta.challenge != ((void*)0) &&
     VAR_28 == 128 && VAR_29 == 1) {
  u8 *VAR_38 = (u8 *) VAR_31;
  *VAR_38++ = VAR_9;
  *VAR_38++ = VAR_8;
  VAR_31++;
  FUNC_15(VAR_31, VAR_33->u.sta.challenge, VAR_8);
  VAR_27 += 2 + VAR_8;
 }

 FUNC_16(VAR_20, VAR_2 | VAR_4,
    VAR_24, VAR_27, VAR_21->addr2, VAR_23->tx_callback_auth);

 if (VAR_33) {
  VAR_33->last_rx = VAR_16;
  FUNC_6(&VAR_33->users);
 }

 if (VAR_32) {
  FUNC_0(VAR_0, "%s: %pM auth (alg=%d "
         "trans#=%d stat=%d len=%d fc=%04x) ==> %d (%s)\n",
         VAR_20->name, VAR_21->addr2,
         VAR_28, VAR_29, VAR_30, VAR_26,
         FUNC_13(VAR_21->frame_control), VAR_32, VAR_35);
 }
}
