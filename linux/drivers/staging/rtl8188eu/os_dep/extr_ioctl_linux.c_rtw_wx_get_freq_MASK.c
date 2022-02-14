
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int m; int e; int i; } ;
union iwreq_data {TYPE_3__ freq; } ;
struct TYPE_6__ {int DSConfig; } ;
struct wlan_bssid_ex {TYPE_2__ Configuration; } ;
struct net_device {int dummy; } ;
struct TYPE_5__ {struct wlan_bssid_ex network; } ;
struct mlme_priv {TYPE_1__ cur_network; } ;
struct iw_request_info {int dummy; } ;
struct TYPE_8__ {int cur_channel; } ;
struct adapter {TYPE_4__ mlmeextpriv; struct mlme_priv mlmepriv; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct mlme_priv*,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_1,
        struct iw_request_info *VAR_2,
        union iwreq_data *VAR_3, char *VAR_4)
{
 struct adapter *VAR_5 = (struct adapter *)FUNC_2(VAR_1);
 struct mlme_priv *VAR_6 = &(VAR_5->mlmepriv);
 struct wlan_bssid_ex *VAR_7 = &VAR_6->cur_network.network;

 if (FUNC_0(VAR_6, VAR_0)) {

  VAR_3->freq.m = FUNC_1(VAR_7->Configuration.DSConfig) * 100000;
  VAR_3->freq.e = 1;
  VAR_3->freq.i = VAR_7->Configuration.DSConfig;
 } else {
  VAR_3->freq.m = FUNC_1(VAR_5->mlmeextpriv.cur_channel) * 100000;
  VAR_3->freq.e = 1;
  VAR_3->freq.i = VAR_5->mlmeextpriv.cur_channel;
 }

 return 0;
}
