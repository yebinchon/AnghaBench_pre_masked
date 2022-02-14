
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {scalar_t__ DSConfig; } ;
struct wlan_bssid_ex {TYPE_1__ Configuration; } ;
struct mlme_ext_info {int state; int bcn_interval; int network; } ;
struct mlme_ext_priv {int cur_channel; struct mlme_ext_info mlmext_info; } ;
struct TYPE_5__ {int* MacAddress; } ;
struct TYPE_6__ {TYPE_2__ dev_network; } ;
struct adapter {TYPE_3__ registrypriv; struct mlme_ext_priv mlmeextpriv; } ;


 int VAR_0 ;
 int FUNC_0 (char*,unsigned short) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ,char*) ;
 int FUNC_2 (struct adapter*,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (struct adapter*) ;
 unsigned short VAR_12 ;
 int FUNC_4 (struct wlan_bssid_ex*) ;
 int FUNC_5 (struct adapter*,int) ;
 unsigned short FUNC_6 (struct wlan_bssid_ex*) ;
 int FUNC_7 (struct adapter*,int ,int*) ;
 int FUNC_8 (struct adapter*) ;
 scalar_t__ FUNC_9 (struct adapter*) ;
 int FUNC_10 (struct adapter*,int,int ,int ) ;
 int FUNC_11 (struct adapter*) ;
 int FUNC_12 (struct adapter*,unsigned short) ;
 int FUNC_13 (struct adapter*) ;

void FUNC_14(struct adapter *VAR_13)
{
 unsigned short VAR_14;
 u8 VAR_15;
 u8 VAR_16;
 struct mlme_ext_priv *VAR_17 = &VAR_13->mlmeextpriv;
 struct mlme_ext_info *VAR_18 = &(VAR_17->mlmext_info);
 struct wlan_bssid_ex *VAR_19 = (struct wlan_bssid_ex *)(&(VAR_18->network));
 VAR_17->cur_channel = (u8)VAR_19->Configuration.DSConfig;
 VAR_18->bcn_interval = FUNC_4(VAR_19);


 FUNC_13(VAR_13);


 VAR_14 = FUNC_6((struct wlan_bssid_ex *)VAR_19);
 FUNC_12(VAR_13, VAR_14);
 if (VAR_14&VAR_12) {
  VAR_15 = 0xcf;
  FUNC_7(VAR_13, VAR_5, (u8 *)(&VAR_15));

  FUNC_7(VAR_13, VAR_3, ((void*)0));



  FUNC_10(VAR_13, VAR_17->cur_channel, VAR_1, VAR_0);

  FUNC_3(VAR_13);


  VAR_18->state = VAR_6;
  FUNC_2(VAR_13, (VAR_18->state & 0x3));


  if (FUNC_9(VAR_13) == VAR_9) {
   FUNC_1(VAR_11, VAR_10, ("issuing beacon frame fail....\n"));

   FUNC_5(VAR_13, -1);
   VAR_18->state = VAR_8;
  } else {
   FUNC_7(VAR_13, VAR_2, VAR_13->registrypriv.dev_network.MacAddress);
   VAR_16 = 0;
   FUNC_7(VAR_13, VAR_4, (u8 *)(&VAR_16));

   FUNC_5(VAR_13, 1);
   VAR_18->state |= VAR_7;
   FUNC_8(VAR_13);
  }
 } else {
  FUNC_0("start_create_ibss, invalid cap:%x\n", VAR_14);
  return;
 }

 FUNC_11(VAR_13);

}
