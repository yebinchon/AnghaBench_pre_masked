
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wlan_bssid_ex {int dummy; } ;
struct ndis_802_11_fixed_ie {int dummy; } ;
struct TYPE_5__ {int ie_length; scalar_t__ ies; } ;
struct TYPE_4__ {TYPE_2__ network; } ;
struct mlme_priv {TYPE_1__ cur_network; } ;
struct adapter {struct mlme_priv mlmepriv; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct mlme_priv*,int ) ;
 scalar_t__ FUNC_1 (TYPE_2__*,struct wlan_bssid_ex*) ;
 int FUNC_2 (struct adapter*,scalar_t__,int ) ;
 int FUNC_3 (TYPE_2__*,struct wlan_bssid_ex*,struct adapter*,int) ;

__attribute__((used)) static void FUNC_4(struct adapter *VAR_1, struct wlan_bssid_ex *VAR_2)
{
 struct mlme_priv *VAR_3 = &VAR_1->mlmepriv;

 if (FUNC_0(VAR_3, VAR_0) &&
     FUNC_1(&VAR_3->cur_network.network, VAR_2)) {
  FUNC_3(&VAR_3->cur_network.network, VAR_2, VAR_1, 1);
  FUNC_2(VAR_1, (VAR_3->cur_network.network.ies) + sizeof(struct ndis_802_11_fixed_ie),
          VAR_3->cur_network.network.ie_length);
 }
}
