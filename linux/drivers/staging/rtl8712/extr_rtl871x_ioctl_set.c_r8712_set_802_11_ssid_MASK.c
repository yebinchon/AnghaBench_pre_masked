
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wlan_network {int dummy; } ;
struct ndis_802_11_ssid {int SsidLength; int Ssid; } ;
struct TYPE_4__ {int Ssid; int SsidLength; } ;
struct mlme_priv {int assoc_by_bssid; int lock; TYPE_2__ assoc_ssid; struct wlan_network cur_network; } ;
struct TYPE_3__ {scalar_t__ btkip_countermeasure; } ;
struct _adapter {TYPE_1__ securitypriv; int hw_init_completed; struct mlme_priv mlmepriv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct mlme_priv*,int) ;
 scalar_t__ FUNC_1 (struct mlme_priv*,int) ;
 int FUNC_2 (struct _adapter*) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (TYPE_2__*,struct ndis_802_11_ssid*,int) ;
 int FUNC_5 (struct _adapter*) ;
 int FUNC_6 (struct _adapter*) ;
 int FUNC_7 (struct _adapter*) ;
 int FUNC_8 (struct _adapter*,struct wlan_network*) ;
 int FUNC_9 (struct mlme_priv*,int ) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (struct ndis_802_11_ssid*) ;

void FUNC_13(struct _adapter *VAR_6,
      struct ndis_802_11_ssid *VAR_7)
{
 unsigned long VAR_8;
 struct mlme_priv *VAR_9 = &VAR_6->mlmepriv;
 struct wlan_network *VAR_10 = &VAR_9->cur_network;

 if (!VAR_6->hw_init_completed)
  return;
 FUNC_10(&VAR_9->lock, VAR_8);
 if (FUNC_1(VAR_9, VAR_5 | VAR_4)) {
  FUNC_1(VAR_9, VAR_4);
  goto _Abort_Set_SSID;
 }
 if (FUNC_1(VAR_9, VAR_3 | VAR_0)) {
  if ((VAR_9->assoc_ssid.SsidLength == VAR_7->SsidLength) &&
      (!FUNC_3(&VAR_9->assoc_ssid.Ssid, VAR_7->Ssid,
      VAR_7->SsidLength))) {
   if (!FUNC_1(VAR_9, VAR_2)) {
    if (!FUNC_8(VAR_6,
         VAR_10)) {




     FUNC_5(VAR_6);
     if (FUNC_1(VAR_9,
         VAR_3))
      FUNC_7(VAR_6);
     FUNC_6(VAR_6);
     if (FUNC_1(VAR_9,
          VAR_0)) {
      FUNC_0(VAR_9,
          VAR_0);
      FUNC_9(VAR_9,
           VAR_1);
     }
    } else {



     goto _Abort_Set_SSID;
    }
   }
  } else {
   FUNC_5(VAR_6);
   if (FUNC_1(VAR_9, VAR_3))
    FUNC_7(VAR_6);
   FUNC_6(VAR_6);
   if (FUNC_1(VAR_9,
       VAR_0)) {
    FUNC_0(VAR_9,
           VAR_0);
    FUNC_9(VAR_9, VAR_1);
   }
  }
 }
 if (VAR_6->securitypriv.btkip_countermeasure)
  goto _Abort_Set_SSID;
 if (!FUNC_12(VAR_7))
  goto _Abort_Set_SSID;
 FUNC_4(&VAR_9->assoc_ssid, VAR_7, sizeof(struct ndis_802_11_ssid));
 VAR_9->assoc_by_bssid = 0;
 FUNC_2(VAR_6);
 goto done;
_Abort_Set_SSID:
done:
 FUNC_11(&VAR_9->lock, VAR_8);
}
