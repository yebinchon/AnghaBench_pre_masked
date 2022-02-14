
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct wlan_bssid_ex {int dummy; } ;
struct ndis_802_11_fix_ie {int dummy; } ;
struct TYPE_9__ {int IELength; scalar_t__ IEs; } ;
struct TYPE_8__ {TYPE_2__ network; } ;
struct mlme_priv {TYPE_1__ cur_network; } ;
struct adapter {struct mlme_priv mlmepriv; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlme_priv*,int ) ;
 scalar_t__ FUNC_1 (TYPE_2__*,struct wlan_bssid_ex*,int ) ;
 int FUNC_2 (TYPE_2__*,TYPE_2__*,TYPE_2__*,TYPE_2__*) ;
 int FUNC_3 (struct adapter*,scalar_t__,int ) ;
 int FUNC_4 (TYPE_2__*,struct wlan_bssid_ex*,struct adapter*,int) ;

__attribute__((used)) static void FUNC_5(struct adapter *VAR_1, struct wlan_bssid_ex *VAR_2)
{
 struct mlme_priv *VAR_3 = &(VAR_1->mlmepriv);

 FUNC_2(&(VAR_3->cur_network.network),
  &(VAR_3->cur_network.network),
  &(VAR_3->cur_network.network),
  &(VAR_3->cur_network.network));

 if ((FUNC_0(VAR_3, VAR_0) == 1) && (FUNC_1(&(VAR_3->cur_network.network), VAR_2, 0))) {



  {
   FUNC_4(&(VAR_3->cur_network.network), VAR_2, VAR_1, 1);
   FUNC_3(VAR_1, (VAR_3->cur_network.network.IEs) + sizeof(struct ndis_802_11_fix_ie),
         VAR_3->cur_network.network.IELength);
  }
 }
}
