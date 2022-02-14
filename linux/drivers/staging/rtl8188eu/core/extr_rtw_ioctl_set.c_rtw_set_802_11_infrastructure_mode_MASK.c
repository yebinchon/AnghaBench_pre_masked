
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int InfrastructureMode; } ;
struct wlan_network {int join_res; TYPE_1__ network; } ;
struct mlme_priv {int lock; struct wlan_network cur_network; } ;
struct adapter {struct mlme_priv mlmepriv; } ;
typedef enum ndis_802_11_network_infra { ____Placeholder_ndis_802_11_network_infra } ndis_802_11_network_infra ;







 int FUNC_0 (int ,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct mlme_priv*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_2 (struct mlme_priv*,int ) ;
 int FUNC_3 (struct mlme_priv*) ;
 int FUNC_4 (struct adapter*,int ,int) ;
 int FUNC_5 (struct adapter*) ;
 int FUNC_6 (struct adapter*) ;
 int FUNC_7 (struct mlme_priv*,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct adapter*) ;
 int FUNC_11 (struct adapter*) ;

u8 FUNC_12(struct adapter *VAR_9,
 enum ndis_802_11_network_infra VAR_10)
{
 struct mlme_priv *VAR_11 = &VAR_9->mlmepriv;
 struct wlan_network *VAR_12 = &VAR_11->cur_network;
 enum ndis_802_11_network_infra *VAR_13 = &VAR_12->network.InfrastructureMode;

 FUNC_0(VAR_8, VAR_7,
   ("+rtw_set_802_11_infrastructure_mode: old =%d new =%d fw_state = 0x%08x\n",
    *VAR_13, VAR_10, FUNC_3(VAR_11)));

 if (*VAR_13 != VAR_10) {
  FUNC_8(&VAR_11->lock);

  FUNC_0(VAR_8, VAR_6, (" change mode!"));


  if (*VAR_13 == 132) {

   VAR_12->join_res = -1;




  }

  if (FUNC_2(VAR_11, VAR_5) ||
      *VAR_13 == 130)
   FUNC_4(VAR_9, 0, 1);

  if (FUNC_2(VAR_11, VAR_5) ||
      FUNC_2(VAR_11, VAR_0))
   FUNC_5(VAR_9);

  if (*VAR_13 == 129 ||
      *VAR_13 == 130) {
   if (FUNC_2(VAR_11, VAR_5))
    FUNC_6(VAR_9);
        }

  *VAR_13 = VAR_10;

  FUNC_1(VAR_11, ~VAR_3);

  switch (VAR_10) {
  case 130:
   FUNC_7(VAR_11, VAR_1);
   break;
  case 129:
   FUNC_7(VAR_11, VAR_4);
   break;
  case 132:
   FUNC_7(VAR_11, VAR_2);



   break;
  case 131:
  case 128:
   break;
  }
  FUNC_9(&VAR_11->lock);
 }

 return 1;
}
