
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int length; int flags; } ;
union iwreq_data {TYPE_3__ essid; } ;
typedef int u32 ;
struct TYPE_5__ {int SsidLength; int Ssid; } ;
struct wlan_bssid_ex {TYPE_2__ Ssid; } ;
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
 int FUNC_1 (struct mlme_priv*,int ) ;
 int FUNC_2 (char*,int ,int) ;
 scalar_t__ FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_4,
         struct iw_request_info *VAR_5,
         union iwreq_data *VAR_6, char *VAR_7)
{
 u32 VAR_8, VAR_9 = 0;
 struct adapter *VAR_10 = (struct adapter *)FUNC_3(VAR_4);
 struct mlme_priv *VAR_11 = &(VAR_10->mlmepriv);
 struct wlan_bssid_ex *VAR_12 = &VAR_11->cur_network.network;

 FUNC_0(VAR_3, VAR_2, ("rtw_wx_get_essid\n"));

 if ((FUNC_1(VAR_11, VAR_1) == 1) ||
       (FUNC_1(VAR_11, VAR_0) == 1)) {
  VAR_8 = VAR_12->Ssid.SsidLength;

  VAR_6->essid.length = VAR_8;

  FUNC_2(VAR_7, VAR_12->Ssid.Ssid, VAR_8);

  VAR_6->essid.flags = 1;
 } else {
  VAR_9 = -1;
  goto exit;
 }

exit:
 return VAR_9;
}
