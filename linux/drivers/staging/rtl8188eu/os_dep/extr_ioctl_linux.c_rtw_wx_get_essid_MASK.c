
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int flags; scalar_t__ length; } ;
union iwreq_data {TYPE_3__ essid; } ;
typedef scalar_t__ u32 ;
struct TYPE_5__ {int ssid; scalar_t__ ssid_length; } ;
struct wlan_bssid_ex {TYPE_2__ ssid; } ;
struct net_device {int dummy; } ;
struct TYPE_4__ {struct wlan_bssid_ex network; } ;
struct mlme_priv {TYPE_1__ cur_network; } ;
struct iw_request_info {int dummy; } ;
struct adapter {struct mlme_priv mlmepriv; } ;


 int FUNC_0 (int ,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct mlme_priv*,int ) ;
 int FUNC_2 (char*,int ,scalar_t__) ;
 scalar_t__ FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_4,
         struct iw_request_info *VAR_5,
         union iwreq_data *VAR_6, char *VAR_7)
{
 u32 VAR_8;
 struct adapter *VAR_9 = (struct adapter *)FUNC_3(VAR_4);
 struct mlme_priv *VAR_10 = &(VAR_9->mlmepriv);
 struct wlan_bssid_ex *VAR_11 = &VAR_10->cur_network.network;

 FUNC_0(VAR_3, VAR_2, ("rtw_wx_get_essid\n"));

 if ((FUNC_1(VAR_10, VAR_1)) ||
     (FUNC_1(VAR_10, VAR_0))) {
  VAR_8 = VAR_11->ssid.ssid_length;
  FUNC_2(VAR_7, VAR_11->ssid.ssid, VAR_8);
 } else {
  VAR_8 = 0;
  *VAR_7 = 0;
 }
 VAR_6->essid.length = VAR_8;
 VAR_6->essid.flags = 1;

 return 0;
}
