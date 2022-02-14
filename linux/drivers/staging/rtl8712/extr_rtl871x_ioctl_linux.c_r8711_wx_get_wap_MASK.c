
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
struct _adapter {struct mlme_priv mlmepriv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct mlme_priv*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 struct _adapter* FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_4,
    struct iw_request_info *VAR_5,
    union iwreq_data *VAR_6, char *VAR_7)
{
 struct _adapter *VAR_8 = FUNC_3(VAR_4);
 struct mlme_priv *VAR_9 = &VAR_8->mlmepriv;
 struct wlan_bssid_ex *VAR_10 = &VAR_9->cur_network.network;

 VAR_6->ap_addr.sa_family = VAR_0;
 if (FUNC_0(VAR_9, VAR_3 | VAR_1 |
         VAR_2))
  FUNC_2(VAR_6->ap_addr.sa_data, VAR_10->MacAddress);
 else
  FUNC_1(VAR_6->ap_addr.sa_data);
 return 0;
}
