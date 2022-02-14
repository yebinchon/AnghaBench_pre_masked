
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


union iwreq_data {int name; } ;
typedef int u8 ;
typedef scalar_t__ u32 ;
struct TYPE_4__ {int DSConfig; } ;
struct wlan_bssid_ex {TYPE_2__ Configuration; int SupportedRates; scalar_t__ IELength; int * IEs; } ;
struct net_device {int dummy; } ;
struct TYPE_3__ {struct wlan_bssid_ex network; } ;
struct mlme_priv {TYPE_1__ cur_network; } ;
struct iw_request_info {int cmd; } ;
struct adapter {struct mlme_priv mlmepriv; } ;
typedef int NDIS_802_11_RATES_EX ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct mlme_priv*,int) ;
 char* FUNC_2 (int *,int ,scalar_t__*,scalar_t__) ;
 scalar_t__ FUNC_3 (int*) ;
 scalar_t__ FUNC_4 (int*) ;
 scalar_t__ FUNC_5 (struct net_device*) ;
 int FUNC_6 (int ,int ,char*) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_6,
        struct iw_request_info *VAR_7,
        union iwreq_data *VAR_8, char *VAR_9)
{
 struct adapter *VAR_10 = (struct adapter *)FUNC_5(VAR_6);
 u32 VAR_11 = 0;
 char *VAR_12;
 u8 VAR_13 =0, VAR_14 =0;
 struct mlme_priv *VAR_15 = &(VAR_10->mlmepriv);
 struct wlan_bssid_ex *VAR_16 = &VAR_15->cur_network.network;
 NDIS_802_11_RATES_EX* VAR_17 = ((void*)0);

 FUNC_0(VAR_5, VAR_4, ("cmd_code =%x\n", VAR_7->cmd));

 if (FUNC_1(VAR_15, VAR_2|VAR_1) == 1) {

  VAR_12 = FUNC_2(&VAR_16->IEs[12], VAR_3, &VAR_11, VAR_16->IELength-12);
  if (VAR_12 && VAR_11>0)
   VAR_13 = 1;

  VAR_17 = &VAR_16->SupportedRates;

  if (FUNC_4((u8 *)VAR_17)) {
   if (VAR_13)
    FUNC_6(VAR_8->name, VAR_0, "IEEE 802.11bn");
   else
    FUNC_6(VAR_8->name, VAR_0, "IEEE 802.11b");
  } else if (FUNC_3((u8 *)VAR_17)) {
   if (VAR_13)
    FUNC_6(VAR_8->name, VAR_0, "IEEE 802.11bgn");
   else
    FUNC_6(VAR_8->name, VAR_0, "IEEE 802.11bg");
  } else {
   if (VAR_16->Configuration.DSConfig > 14) {
    if (VAR_14)
     FUNC_6(VAR_8->name, VAR_0, "IEEE 802.11AC");
    else if (VAR_13)
     FUNC_6(VAR_8->name, VAR_0, "IEEE 802.11an");
    else
     FUNC_6(VAR_8->name, VAR_0, "IEEE 802.11a");
   } else {
    if (VAR_13)
     FUNC_6(VAR_8->name, VAR_0, "IEEE 802.11gn");
    else
     FUNC_6(VAR_8->name, VAR_0, "IEEE 802.11g");
   }
  }
 } else {


  FUNC_6(VAR_8->name, VAR_0, "unassociated");
 }
 return 0;
}
