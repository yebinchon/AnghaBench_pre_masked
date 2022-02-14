
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct sta_priv {int dummy; } ;
struct sta_info {int dummy; } ;
struct rx_pkt_attrib {int tcpchk_valid; int tcp_chkrpt; int dst; } ;
struct net_device {int dummy; } ;
struct mlme_priv {int dummy; } ;
struct TYPE_11__ {int os_netif_err; int os_netif_ok; int os_indicate_ap_self; int os_indicate_ap_forward; int os_indicate_ap_mcast; } ;
struct adapter {TYPE_1__ rx_logs; struct net_device* pnetdev; int eeprompriv; struct sta_priv stapriv; struct mlme_priv mlmepriv; } ;
struct TYPE_12__ {void* ip_summed; struct net_device* dev; int protocol; } ;
typedef TYPE_2__ _pkt ;


 void* VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (TYPE_2__*,struct net_device*) ;
 int FUNC_3 (struct mlme_priv*,int ) ;
 int FUNC_4 (TYPE_2__*,struct net_device*) ;
 scalar_t__ FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int *) ;
 struct sta_info* FUNC_7 (struct adapter*) ;
 struct sta_info* FUNC_8 (struct sta_priv*,int ) ;
 int FUNC_9 (struct net_device*,TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*) ;
 TYPE_2__* FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (TYPE_2__*,int ) ;

void FUNC_13(struct adapter *VAR_5, _pkt *VAR_6, struct rx_pkt_attrib *VAR_7)
{
 struct mlme_priv*VAR_8 = &VAR_5->mlmepriv;
 int VAR_9;


 if (VAR_6) {
  if (FUNC_3(VAR_8, VAR_4) == 1) {
   _pkt *VAR_10 = ((void*)0);
   struct sta_info *VAR_11 = ((void*)0);
   struct sta_priv *VAR_12 = &VAR_5->stapriv;
   int VAR_13 = FUNC_1(VAR_7->dst);



   if (FUNC_5(VAR_7->dst, FUNC_6(&VAR_5->eeprompriv), VAR_2)) {


    if (VAR_13) {
     VAR_11 = FUNC_7(VAR_5);
     VAR_10 = FUNC_11(VAR_6);
    } else {
     VAR_11 = FUNC_8(VAR_12, VAR_7->dst);
    }

    if (VAR_11) {
     struct net_device *VAR_14 = (struct net_device*)VAR_5->pnetdev;




     VAR_6->dev = VAR_14;
     FUNC_12(VAR_6, FUNC_10(VAR_6));

     FUNC_2(VAR_6, VAR_14);

     if (VAR_13 && (VAR_10 != ((void*)0))) {
      VAR_6 = VAR_10;
      FUNC_0(VAR_5->rx_logs.os_indicate_ap_mcast);
     } else {
      FUNC_0(VAR_5->rx_logs.os_indicate_ap_forward);
      return;
     }
    }
   } else {


    FUNC_0(VAR_5->rx_logs.os_indicate_ap_self);
   }
  }

  VAR_6->protocol = FUNC_4(VAR_6, VAR_5->pnetdev);
  VAR_6->dev = VAR_5->pnetdev;
  VAR_6->ip_summed = VAR_0;


  VAR_9 = FUNC_9(VAR_5->pnetdev, VAR_6);
  if (VAR_9 == VAR_3)
   FUNC_0(VAR_5->rx_logs.os_netif_ok);
  else
   FUNC_0(VAR_5->rx_logs.os_netif_err);
 }
}
