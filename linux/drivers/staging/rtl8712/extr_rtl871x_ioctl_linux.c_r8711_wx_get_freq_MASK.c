
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int m; int e; int i; } ;
union iwreq_data {TYPE_2__ freq; } ;
struct TYPE_6__ {int DSConfig; } ;
struct wlan_bssid_ex {TYPE_3__ Configuration; } ;
struct net_device {int dummy; } ;
struct TYPE_4__ {struct wlan_bssid_ex network; } ;
struct mlme_priv {TYPE_1__ cur_network; } ;
struct iw_request_info {int dummy; } ;
struct _adapter {struct mlme_priv mlmepriv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mlme_priv*,int ) ;
 int* VAR_2 ;
 struct _adapter* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_3,
        struct iw_request_info *VAR_4,
        union iwreq_data *VAR_5, char *VAR_6)
{
 struct _adapter *VAR_7 = FUNC_1(VAR_3);
 struct mlme_priv *VAR_8 = &VAR_7->mlmepriv;
 struct wlan_bssid_ex *VAR_9 = &VAR_8->cur_network.network;

 if (!FUNC_0(VAR_8, VAR_1))
  return -VAR_0;

 VAR_5->freq.m = VAR_2[
         VAR_9->Configuration.DSConfig - 1] * 100000;
 VAR_5->freq.e = 1;
 VAR_5->freq.i = VAR_9->Configuration.DSConfig;

 return 0;
}
