
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wlan_bssid_ex {int dummy; } ;
struct TYPE_5__ {int IELength; scalar_t__ IEs; } ;
struct TYPE_4__ {TYPE_2__ network; } ;
struct mlme_priv {TYPE_1__ cur_network; } ;
struct _adapter {struct mlme_priv mlmepriv; } ;
struct NDIS_802_11_FIXED_IEs {int dummy; } ;


 scalar_t__ FUNC_0 (TYPE_2__*,struct wlan_bssid_ex*) ;
 int FUNC_1 (struct _adapter*,scalar_t__,int ) ;
 int FUNC_2 (TYPE_2__*,struct wlan_bssid_ex*,struct _adapter*) ;

__attribute__((used)) static void FUNC_3(struct _adapter *VAR_0,
       struct wlan_bssid_ex *VAR_1)
{
 struct mlme_priv *VAR_2 = &VAR_0->mlmepriv;

 if (FUNC_0(&(VAR_2->cur_network.network), VAR_1)) {
  FUNC_2(&(VAR_2->cur_network.network),
          VAR_1, VAR_0);
  FUNC_1(VAR_0,
          (VAR_2->cur_network.network.IEs) +
          sizeof(struct NDIS_802_11_FIXED_IEs),
          VAR_2->cur_network.network.IELength);
 }
}
