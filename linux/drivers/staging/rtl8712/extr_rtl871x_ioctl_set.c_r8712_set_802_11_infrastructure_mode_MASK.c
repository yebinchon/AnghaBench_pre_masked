
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int InfrastructureMode; } ;
struct wlan_network {TYPE_1__ network; } ;
struct mlme_priv {int lock; struct wlan_network cur_network; } ;
struct _adapter {struct mlme_priv mlmepriv; } ;
typedef enum NDIS_802_11_NETWORK_INFRASTRUCTURE { ____Placeholder_NDIS_802_11_NETWORK_INFRASTRUCTURE } NDIS_802_11_NETWORK_INFRASTRUCTURE ;







 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct mlme_priv*,int) ;
 scalar_t__ FUNC_1 (struct mlme_priv*,int) ;
 int FUNC_2 (struct _adapter*) ;
 int FUNC_3 (struct _adapter*) ;
 int FUNC_4 (struct _adapter*) ;
 int FUNC_5 (struct mlme_priv*,int) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

void FUNC_8(struct _adapter *VAR_5,
 enum NDIS_802_11_NETWORK_INFRASTRUCTURE VAR_6)
{
 unsigned long VAR_7;
 struct mlme_priv *VAR_8 = &VAR_5->mlmepriv;
 struct wlan_network *VAR_9 = &VAR_8->cur_network;
 enum NDIS_802_11_NETWORK_INFRASTRUCTURE *VAR_10 =
    &(VAR_9->network.InfrastructureMode);

 if (*VAR_10 != VAR_6) {
  FUNC_6(&VAR_8->lock, VAR_7);
  if (FUNC_1(VAR_8, VAR_4) ||
      (*VAR_10 == 130))
   FUNC_2(VAR_5);
  if (FUNC_1(VAR_8,
      VAR_4 | VAR_0))
   FUNC_3(VAR_5);
  if (FUNC_1(VAR_8, VAR_4) ||
      (*VAR_10 == 129) ||
      (*VAR_10 == 130)) {




   FUNC_4(VAR_5);
  }
  *VAR_10 = VAR_6;



  FUNC_0(VAR_8, VAR_3 | VAR_2 |
         VAR_1 | VAR_0);
  switch (VAR_6) {
  case 130:
   FUNC_5(VAR_8, VAR_1);
   break;
  case 129:
   FUNC_5(VAR_8, VAR_3);
   break;
  case 132:
   FUNC_5(VAR_8, VAR_2);
   break;
  case 131:
  case 128:
   break;
  }
  FUNC_7(&VAR_8->lock, VAR_7);
 }
}
