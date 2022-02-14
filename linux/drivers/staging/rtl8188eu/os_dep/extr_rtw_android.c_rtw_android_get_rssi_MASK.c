
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* ssid; } ;
struct TYPE_5__ {TYPE_1__ ssid; } ;
struct wlan_network {TYPE_2__ network; } ;
struct net_device {int dummy; } ;
struct mlme_priv {struct wlan_network cur_network; } ;
struct TYPE_6__ {int rssi; } ;
struct adapter {TYPE_3__ recvpriv; struct mlme_priv mlmepriv; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct mlme_priv*,int ) ;
 scalar_t__ FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (char*,int,char*,char*,int) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_1, char *VAR_2,
    int VAR_3)
{
 struct adapter *VAR_4 = (struct adapter *)FUNC_1(VAR_1);
 struct mlme_priv *VAR_5 = &(VAR_4->mlmepriv);
 struct wlan_network *VAR_6 = &VAR_5->cur_network;
 int VAR_7 = 0;

 if (FUNC_0(VAR_5, VAR_0)) {
  VAR_7 += FUNC_2(&VAR_2[VAR_7], VAR_3,
       "%s rssi %d",
       VAR_6->network.ssid.ssid,
       VAR_4->recvpriv.rssi);
 }
 return VAR_7;
}
