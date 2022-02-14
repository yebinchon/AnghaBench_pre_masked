
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wlan_bssid_ex {int Ssid; int * MacAddress; } ;
struct ndis_802_11_ssid {int dummy; } ;
struct mlme_priv {int to_join; int lock; int assoc_timer; int fw_state; int assoc_ssid; int scan_to_timer; } ;
struct TYPE_2__ {struct wlan_bssid_ex dev_network; } ;
struct _adapter {TYPE_1__ registrypriv; struct mlme_priv mlmepriv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct mlme_priv*,int ) ;
 scalar_t__ FUNC_1 (struct mlme_priv*,int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int *,scalar_t__) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct mlme_priv*) ;
 int FUNC_8 (struct _adapter*) ;
 int FUNC_9 (struct mlme_priv*,int ) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;

void FUNC_12(struct _adapter *VAR_7, u8 *VAR_8)
{
 unsigned long VAR_9;
 struct mlme_priv *VAR_10 = &VAR_7->mlmepriv;

 FUNC_10(&VAR_10->lock, VAR_9);

 if (FUNC_1(VAR_10, VAR_5)) {
  FUNC_2(&VAR_10->scan_to_timer);

  FUNC_0(VAR_10, VAR_5);
 }

 if (VAR_10->to_join) {
  if (FUNC_1(VAR_10, VAR_2)) {
   if (!FUNC_1(VAR_10, VAR_3)) {
    FUNC_9(VAR_10, VAR_4);

    if (!FUNC_7(VAR_10)) {
     FUNC_4(&VAR_10->assoc_timer, VAR_6 +
        FUNC_5(VAR_0));
    } else {
     struct wlan_bssid_ex *VAR_11 =
       &(VAR_7->registrypriv.dev_network);
     u8 *VAR_12 =
       VAR_7->registrypriv.
       dev_network.MacAddress;
     VAR_10->fw_state ^= VAR_5;
     FUNC_3(&VAR_11->Ssid,
      &VAR_10->assoc_ssid,
      sizeof(struct
        ndis_802_11_ssid));
     FUNC_8
      (VAR_7);
     FUNC_6(VAR_12);
     VAR_10->fw_state =
       VAR_1;
     VAR_10->to_join = 0;
    }
   }
  } else {
   VAR_10->to_join = 0;
   FUNC_9(VAR_10, VAR_4);
   if (!FUNC_7(VAR_10))
    FUNC_4(&VAR_10->assoc_timer, VAR_6 +
       FUNC_5(VAR_0));
   else
    FUNC_0(VAR_10, VAR_4);
  }
 }
 FUNC_11(&VAR_10->lock, VAR_9);
}
