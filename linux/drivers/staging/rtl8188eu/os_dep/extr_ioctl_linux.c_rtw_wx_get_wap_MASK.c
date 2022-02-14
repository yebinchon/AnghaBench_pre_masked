
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int sa_data; int sa_family; } ;
union iwreq_data {TYPE_2__ ap_addr; } ;
struct wlan_bssid_ex {int MacAddress; } ;
struct net_device {int dummy; } ;
struct TYPE_3__ {struct wlan_bssid_ex network; } ;
struct mlme_priv {TYPE_1__ cur_network; } ;
struct iw_request_info {int dummy; } ;
struct adapter {struct mlme_priv mlmepriv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (struct mlme_priv*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ) ;
 scalar_t__ FUNC_4 (struct net_device*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_7,
       struct iw_request_info *VAR_8,
       union iwreq_data *VAR_9, char *VAR_10)
{
 struct adapter *VAR_11 = (struct adapter *)FUNC_4(VAR_7);
 struct mlme_priv *VAR_12 = &(VAR_11->mlmepriv);
 struct wlan_bssid_ex *VAR_13 = &VAR_12->cur_network.network;

 VAR_9->ap_addr.sa_family = VAR_0;

 FUNC_2(VAR_9->ap_addr.sa_data);

 FUNC_0(VAR_6, VAR_5, ("rtw_wx_get_wap\n"));

 if (FUNC_1(VAR_12, VAR_4) ||
     FUNC_1(VAR_12, VAR_2) ||
     FUNC_1(VAR_12, VAR_3))
  FUNC_3(VAR_9->ap_addr.sa_data, VAR_13->MacAddress, VAR_1);
 else
  FUNC_2(VAR_9->ap_addr.sa_data);
 return 0;
}
