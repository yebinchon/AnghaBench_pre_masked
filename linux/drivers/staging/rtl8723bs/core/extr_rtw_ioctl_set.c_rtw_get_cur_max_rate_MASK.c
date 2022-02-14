
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u16 ;
struct wlan_bssid_ex {int* SupportedRates; } ;
struct TYPE_5__ {int supp_mcs_set; } ;
struct TYPE_6__ {TYPE_2__ ht_cap; } ;
struct sta_info {scalar_t__ bw_mode; TYPE_3__ htpriv; int wireless_mode; } ;
struct TYPE_4__ {struct wlan_bssid_ex network; } ;
struct mlme_priv {TYPE_1__ cur_network; } ;
struct adapter {int stapriv; struct mlme_priv mlmepriv; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct mlme_priv*,int ) ;
 int FUNC_2 (struct mlme_priv*) ;
 scalar_t__ FUNC_3 (struct sta_info*) ;
 struct sta_info* FUNC_4 (int *,int ) ;
 int FUNC_5 (struct adapter*,int ,scalar_t__*) ;
 int FUNC_6 (scalar_t__,int,scalar_t__,int ) ;

u16 FUNC_7(struct adapter *VAR_4)
{
 int VAR_5 = 0;
 u16 VAR_6 = 0, VAR_7 = 0;
 struct mlme_priv *VAR_8 = &VAR_4->mlmepriv;
 struct wlan_bssid_ex *VAR_9 = &VAR_8->cur_network.network;
 struct sta_info *VAR_10 = ((void*)0);
 u8 VAR_11 = 0;
 u8 VAR_12 = 0;

 if ((FUNC_1(VAR_8, VAR_3) != 1)
  && (FUNC_1(VAR_8, VAR_2) != 1))
  return 0;

 VAR_10 = FUNC_4(&VAR_4->stapriv, FUNC_2(VAR_8));
 if (VAR_10 == ((void*)0))
  return 0;

 VAR_11 = FUNC_3(VAR_10);

 if (FUNC_0(VAR_10->wireless_mode)) {
  FUNC_5(VAR_4, VAR_1, (u8 *)(&VAR_12));

  VAR_7 = FUNC_6(
   VAR_12,
   ((VAR_10->bw_mode == VAR_0)?1:0),
   VAR_11,
   VAR_10->htpriv.ht_cap.supp_mcs_set
  );
 } else {
  while ((VAR_9->SupportedRates[VAR_5] != 0) && (VAR_9->SupportedRates[VAR_5] != 0xFF)) {
   VAR_6 = VAR_9->SupportedRates[VAR_5]&0x7F;
   if (VAR_6 > VAR_7)
    VAR_7 = VAR_6;
   VAR_5++;
  }

  VAR_7 = VAR_7*10/2;
 }

 return VAR_7;
}
