
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union iwreq_data {int name; } ;
typedef int u8 ;
typedef scalar_t__ u32 ;
struct wlan_bssid_ex {int* rates; scalar_t__ IELength; int * IEs; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {struct wlan_bssid_ex network; } ;
struct mlme_priv {TYPE_1__ cur_network; } ;
struct iw_request_info {int dummy; } ;
struct _adapter {struct mlme_priv mlmepriv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mlme_priv*,int) ;
 struct _adapter* FUNC_1 (struct net_device*) ;
 char* FUNC_2 (int *,int ,scalar_t__*,scalar_t__) ;
 scalar_t__ FUNC_3 (int*) ;
 scalar_t__ FUNC_4 (int*) ;
 int FUNC_5 (int ,int ,char*) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_4,
        struct iw_request_info *VAR_5,
        union iwreq_data *VAR_6, char *VAR_7)
{
 struct _adapter *VAR_8 = FUNC_1(VAR_4);
 u32 VAR_9 = 0;
 char *VAR_10;
 u8 VAR_11 = 0;
 struct mlme_priv *VAR_12 = &(VAR_8->mlmepriv);
 struct wlan_bssid_ex *VAR_13 = &VAR_12->cur_network.network;
 u8 *VAR_14;

 if (FUNC_0(VAR_12, VAR_2 | VAR_1) ==
     1) {

  VAR_10 = FUNC_2(&VAR_13->IEs[12], VAR_3,
     &VAR_9, VAR_13->IELength - 12);
  if (VAR_10 && VAR_9 > 0)
   VAR_11 = 1;
  VAR_14 = VAR_13->rates;
  if (FUNC_4(VAR_14)) {
   if (VAR_11)
    FUNC_5(VAR_6->name, VAR_0,
      "IEEE 802.11bn");
   else
    FUNC_5(VAR_6->name, VAR_0,
      "IEEE 802.11b");
  } else if (FUNC_3(VAR_14)) {
   if (VAR_11)
    FUNC_5(VAR_6->name, VAR_0,
      "IEEE 802.11bgn");
   else
    FUNC_5(VAR_6->name, VAR_0,
      "IEEE 802.11bg");
  } else {
   if (VAR_11)
    FUNC_5(VAR_6->name, VAR_0,
      "IEEE 802.11gn");
   else
    FUNC_5(VAR_6->name, VAR_0,
      "IEEE 802.11g");
  }
 } else {
  FUNC_5(VAR_6->name, VAR_0, "unassociated");
 }
 return 0;
}
