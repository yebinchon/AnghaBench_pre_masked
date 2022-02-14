
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint ;
typedef int u8 ;
struct wlan_bssid_ex {int MacAddress; } ;
struct sta_priv {int dummy; } ;
struct sta_info {int dummy; } ;
struct recv_frame {TYPE_1__* pkt; } ;
struct TYPE_8__ {int network; } ;
struct mlme_priv {TYPE_4__ cur_network; } ;
struct TYPE_6__ {scalar_t__ state; } ;
struct mlme_ext_info {int state; TYPE_3__* FW_sta_info; struct wlan_bssid_ex network; int assoc_AP_vendor; } ;
struct mlme_ext_priv {TYPE_2__ sitesurvey_res; struct mlme_ext_info mlmext_info; } ;
struct ieee80211_hdr_3addr {int dummy; } ;
struct adapter {struct sta_priv stapriv; struct mlme_priv mlmepriv; struct mlme_ext_priv mlmeextpriv; } ;
struct TYPE_7__ {scalar_t__ status; } ;
struct TYPE_5__ {int len; int * data; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 unsigned int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (struct adapter*) ;
 int FUNC_4 (int *,int) ;
 unsigned int FUNC_5 (struct adapter*,struct recv_frame*,struct wlan_bssid_ex*) ;
 int FUNC_6 (struct wlan_bssid_ex*) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (struct adapter*,int ,int) ;
 int FUNC_9 (struct adapter*,int ,int) ;
 int FUNC_10 (struct adapter*,struct recv_frame*) ;
 int FUNC_11 (struct adapter*,int *,int) ;
 int FUNC_12 (TYPE_4__*) ;
 struct sta_info* FUNC_13 (struct sta_priv*,int ) ;
 scalar_t__ FUNC_14 (int) ;
 int FUNC_15 (struct sta_info*) ;
 int FUNC_16 (struct adapter*) ;
 int FUNC_17 (struct mlme_ext_priv*,int *,int) ;
 int FUNC_18 (struct adapter*,int *,int,struct sta_info*) ;
 int FUNC_19 (int *,struct wlan_bssid_ex*,struct adapter*,int) ;
 scalar_t__ FUNC_20 (struct adapter*,int *,int,int) ;

__attribute__((used)) static unsigned int FUNC_21(struct adapter *VAR_12,
        struct recv_frame *VAR_13)
{
 int VAR_14;
 struct sta_info *VAR_15;
 struct mlme_ext_priv *VAR_16 = &VAR_12->mlmeextpriv;
 struct mlme_ext_info *VAR_17 = &VAR_16->mlmext_info;
 struct mlme_priv *VAR_18 = &VAR_12->mlmepriv;
 struct sta_priv *VAR_19 = &VAR_12->stapriv;
 u8 *VAR_20 = VAR_13->pkt->data;
 uint VAR_21 = VAR_13->pkt->len;
 struct wlan_bssid_ex *VAR_22;
 int VAR_23 = VAR_10;
 struct wlan_bssid_ex *VAR_24 = &VAR_17->network;

 if (VAR_16->sitesurvey_res.state == VAR_2) {
  FUNC_10(VAR_12, VAR_13);
  return VAR_10;
 }

 if (!FUNC_7(FUNC_2(VAR_20), VAR_24->MacAddress, VAR_0)) {
  if (VAR_17->state & VAR_5) {

   VAR_22 = (struct wlan_bssid_ex *)FUNC_14(sizeof(struct wlan_bssid_ex));
   if (VAR_22) {
    if (FUNC_5(VAR_12, VAR_13, VAR_22) == VAR_10) {
     FUNC_19(&VAR_18->cur_network.network, VAR_22, VAR_12, 1);
     FUNC_12(&VAR_18->cur_network);
    }
    FUNC_6(VAR_22);
   }


   VAR_17->assoc_AP_vendor = FUNC_4(VAR_20+sizeof(struct ieee80211_hdr_3addr), VAR_21-sizeof(struct ieee80211_hdr_3addr));


   FUNC_17(VAR_16, VAR_20, VAR_21);


   FUNC_16(VAR_12);

   return VAR_10;
  }

  if (((VAR_17->state & 0x03) == VAR_6) && (VAR_17->state & VAR_4)) {
   VAR_15 = FUNC_13(VAR_19, FUNC_1(VAR_20));
   if (VAR_15 != ((void*)0)) {
    VAR_23 = FUNC_11(VAR_12, VAR_20, VAR_21);
    if (!VAR_23) {
      FUNC_0(VAR_11, "ap has changed, disconnect now\n ");
      FUNC_8(VAR_12, VAR_17->network.MacAddress, 65535);
      return VAR_10;
    }


    if ((FUNC_15(VAR_15) & 0xf) == 0)
     FUNC_18(VAR_12, VAR_20, VAR_21, VAR_15);
   }
  } else if ((VAR_17->state & 0x03) == VAR_3) {
   VAR_15 = FUNC_13(VAR_19, FUNC_1(VAR_20));
   if (VAR_15 != ((void*)0)) {


    if ((FUNC_15(VAR_15) & 0xf) == 0)
     FUNC_18(VAR_12, VAR_20, VAR_21, VAR_15);
   } else {

    VAR_14 = FUNC_3(VAR_12);
    if (VAR_14 == VAR_1)
     goto _END_ONBEACON_;


    if (FUNC_20(VAR_12, (VAR_20 + VAR_7 + VAR_8), (VAR_21 - VAR_7 - VAR_8), VAR_14) == VAR_9) {
     VAR_17->FW_sta_info[VAR_14].status = 0;
     goto _END_ONBEACON_;
    }


    FUNC_17(VAR_16, VAR_20, VAR_21);


    FUNC_9(VAR_12, FUNC_1(VAR_20), VAR_14);
   }
  }
 }

_END_ONBEACON_:

 return VAR_10;
}
