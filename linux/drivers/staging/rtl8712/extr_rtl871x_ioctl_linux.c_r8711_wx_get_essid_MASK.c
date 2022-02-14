
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
struct _adapter {struct mlme_priv mlmepriv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct mlme_priv*,int) ;
 int FUNC_1 (char*,int ,int) ;
 struct _adapter* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_3,
    struct iw_request_info *VAR_4,
    union iwreq_data *VAR_5, char *VAR_6)
{
 struct _adapter *VAR_7 = FUNC_2(VAR_3);
 struct mlme_priv *VAR_8 = &VAR_7->mlmepriv;
 struct wlan_bssid_ex *VAR_9 = &VAR_8->cur_network.network;
 u32 VAR_10, VAR_11 = 0;

 if (FUNC_0(VAR_8, VAR_2 | VAR_1)) {
  VAR_10 = VAR_9->Ssid.SsidLength;
  VAR_5->essid.length = VAR_10;
  FUNC_1(VAR_6, VAR_9->Ssid.Ssid, VAR_10);
  VAR_5->essid.flags = 1;
 } else {
  VAR_11 = -VAR_0;
 }
 return VAR_11;
}
