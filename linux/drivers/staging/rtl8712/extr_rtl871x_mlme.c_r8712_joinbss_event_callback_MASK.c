
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef union pn48 {int dummy; } pn48 ;
typedef union Keytype {int dummy; } Keytype ;
struct TYPE_11__ {scalar_t__ DwellTime; scalar_t__ HopPattern; scalar_t__ HopSet; scalar_t__ Length; } ;
struct TYPE_12__ {scalar_t__ ATIMWindow; scalar_t__ BeaconPeriod; scalar_t__ DSConfig; scalar_t__ Length; TYPE_1__ FHConfig; } ;
struct TYPE_14__ {scalar_t__ SsidLength; } ;
struct TYPE_15__ {int Length; scalar_t__ Privacy; scalar_t__ Rssi; scalar_t__ NetworkTypeInUse; scalar_t__ InfrastructureMode; scalar_t__ IELength; scalar_t__ IEs; int MacAddress; TYPE_2__ Configuration; TYPE_4__ Ssid; } ;
typedef TYPE_5__ u8 ;
typedef int u32 ;
struct wlan_network {scalar_t__ join_res; scalar_t__ network_type; int fixed; scalar_t__ aid; TYPE_5__ network; } ;
struct wlan_bssid_ex {int dummy; } ;
struct sta_priv {int sta_hash_lock; } ;
struct sta_info {scalar_t__ aid; int qos_option; int mac_id; int ieee8021x_blocked; int rxpn; int txpn; int tkiptxmickey; int tkiprxmickey; int x_UncstKey; int XPrivacy; } ;
struct mlme_priv {int lock; int assoc_timer; int fw_state; int scanned_queue; struct wlan_network cur_network; } ;
struct list_head {int dummy; } ;
struct TYPE_13__ {int AuthAlgrthm; int binstallGrpkey; int busetkipkey; int bgrpkey_handshake; int PrivacyAlgrthm; } ;
struct _adapter {TYPE_3__ securitypriv; struct mlme_priv mlmepriv; struct sta_priv stapriv; } ;
struct NDIS_802_11_FIXED_IEs {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct mlme_priv*,int ) ;
 scalar_t__ FUNC_1 (struct mlme_priv*,int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_7 ;
 int FUNC_3 (struct wlan_network*) ;
 struct wlan_network* FUNC_4 (int,int ) ;
 void* FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (TYPE_5__*,TYPE_5__*,int) ;
 int FUNC_8 (TYPE_5__*,int ,int) ;
 int FUNC_9 (int *,scalar_t__) ;
 scalar_t__ FUNC_10 (int) ;
 struct sta_info* FUNC_11 (struct sta_priv*,int ) ;
 struct wlan_network* FUNC_12 (int *,int ) ;
 int FUNC_13 (struct _adapter*,struct sta_info*) ;
 struct sta_info* FUNC_14 (struct sta_priv*,int ) ;
 int FUNC_15 (TYPE_5__*) ;
 int FUNC_16 (struct _adapter*) ;
 int FUNC_17 (struct _adapter*,scalar_t__,scalar_t__) ;
 int FUNC_18 (int *,unsigned long) ;
 int FUNC_19 (int *,unsigned long) ;
 int FUNC_20 (struct _adapter*,scalar_t__,scalar_t__) ;

void FUNC_21(struct _adapter *VAR_8, u8 *VAR_9)
{
 unsigned long VAR_10 = 0, VAR_11;
 struct sta_info *VAR_12 = ((void*)0), *VAR_13 = ((void*)0);
 struct sta_priv *VAR_14 = &VAR_8->stapriv;
 struct mlme_priv *VAR_15 = &VAR_8->mlmepriv;
 struct wlan_network *VAR_16 = &VAR_15->cur_network;
 struct wlan_network *VAR_17 = ((void*)0), *VAR_18 = ((void*)0);
 unsigned int VAR_19 = 0;
 struct wlan_network *VAR_20;

 if (sizeof(struct list_head) == 4 * sizeof(u32)) {
  VAR_20 = FUNC_4(sizeof(struct wlan_network), VAR_1);
  if (!VAR_20)
   return;
  FUNC_7((u8 *)VAR_20 + 16, (u8 *)VAR_9 + 8,
         sizeof(struct wlan_network) - 16);
 } else {
  VAR_20 = (struct wlan_network *)VAR_9;
 }
 VAR_19 = !FUNC_6(VAR_20->network.MacAddress,
       VAR_16->network.MacAddress, VAR_0);
 VAR_20->network.Length =
   FUNC_15(&VAR_20->network);
 FUNC_18(&VAR_15->lock, VAR_10);
 if (VAR_20->network.Length > sizeof(struct wlan_bssid_ex))
  goto ignore_joinbss_callback;
 if (VAR_20->join_res > 0) {
  if (FUNC_1(VAR_15, VAR_6)) {

   if (FUNC_1(VAR_15, VAR_5)) {
    if (VAR_19) {
     VAR_18 =
         FUNC_12(&VAR_15->
         scanned_queue,
         VAR_16->network.MacAddress);
    } else {
     VAR_17 =
          FUNC_12(&VAR_15->
          scanned_queue,
          VAR_16->network.MacAddress);
     VAR_17->fixed = 0;

     VAR_13 = FUNC_14(VAR_14,
          VAR_16->network.MacAddress);
     FUNC_18(&VAR_14->
      sta_hash_lock, VAR_11);
     FUNC_13(VAR_8, VAR_13);
     FUNC_19(&(VAR_14->
      sta_hash_lock), VAR_11);

     VAR_18 =
       FUNC_12(&VAR_15->
       scanned_queue,
       VAR_20->network.
       MacAddress);
     if (VAR_18)
      VAR_18->fixed = 1;
    }
   } else {
    VAR_18 = FUNC_12(&VAR_15->
      scanned_queue,
      VAR_20->network.MacAddress);
    if (VAR_18)
     VAR_18->fixed = 1;
   }

   if (VAR_18 == ((void*)0)) {
    if (FUNC_1(VAR_15,
     VAR_6))
     VAR_15->fw_state ^=
       VAR_6;
    goto ignore_joinbss_callback;
   }


   if (FUNC_1(VAR_15, VAR_4)) {
    if (VAR_19) {
     VAR_12 =
       FUNC_14(VAR_14,
       VAR_20->network.MacAddress);
     if (VAR_12 == ((void*)0))
      VAR_12 =
       FUNC_11(VAR_14,
       VAR_20->network.MacAddress);
    } else {
     VAR_12 =
       FUNC_11(VAR_14,
       VAR_20->network.MacAddress);
    }
    if (VAR_12) {
     VAR_12->aid = VAR_20->join_res;
     VAR_12->qos_option = 1;
     VAR_12->mac_id = 5;
     if (VAR_8->securitypriv.
         AuthAlgrthm == 2) {
      VAR_8->securitypriv.
       binstallGrpkey =
        0;
      VAR_8->securitypriv.
       busetkipkey =
        0;
      VAR_8->securitypriv.
       bgrpkey_handshake =
        0;
      VAR_12->ieee8021x_blocked
        = 1;
      VAR_12->XPrivacy =
        VAR_8->securitypriv.
        PrivacyAlgrthm;
      FUNC_8((u8 *)&VAR_12->
        x_UncstKey,
        0,
        sizeof(union Keytype));
      FUNC_8((u8 *)&VAR_12->
        tkiprxmickey,
        0,
        sizeof(union Keytype));
      FUNC_8((u8 *)&VAR_12->
        tkiptxmickey,
        0,
        sizeof(union Keytype));
      FUNC_8((u8 *)&VAR_12->
        txpn, 0,
        sizeof(union pn48));
      FUNC_8((u8 *)&VAR_12->
        rxpn, 0,
        sizeof(union pn48));
     }
    } else {
     if (FUNC_1(VAR_15,
         VAR_6))
      VAR_15->fw_state ^=
        VAR_6;
     goto ignore_joinbss_callback;
    }
   }


   FUNC_7(&VAR_16->network, &VAR_20->network,
    VAR_20->network.Length);
   VAR_16->aid = VAR_20->join_res;

   switch (VAR_20->network.InfrastructureMode) {
   case 128:
    VAR_15->fw_state = VAR_4;
    break;
   case 129:
    VAR_15->fw_state = VAR_2;
    break;
   default:
    VAR_15->fw_state = VAR_3;
    break;
   }
   FUNC_17(VAR_8,
       (VAR_16->network.IEs) +
       sizeof(struct NDIS_802_11_FIXED_IEs),
       (VAR_16->network.IELength));

   FUNC_20(VAR_8, VAR_16->network.IEs,
          VAR_16->network.IELength);

   if (FUNC_1(VAR_15, VAR_4))
    FUNC_16(VAR_8);
   FUNC_2(&VAR_15->assoc_timer);
  } else {
   goto ignore_joinbss_callback;
  }
 } else {
  if (FUNC_1(VAR_15, VAR_6)) {
   FUNC_9(&VAR_15->assoc_timer,
      VAR_7 + FUNC_10(1));
   FUNC_0(VAR_15, VAR_6);
  }
 }
ignore_joinbss_callback:
 FUNC_19(&VAR_15->lock, VAR_10);
 if (sizeof(struct list_head) == 4 * sizeof(u32))
  FUNC_3(VAR_20);
}
