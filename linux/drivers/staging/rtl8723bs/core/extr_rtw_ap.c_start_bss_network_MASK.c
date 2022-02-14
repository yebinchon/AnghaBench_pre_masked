
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct TYPE_5__ {int DSConfig; scalar_t__ BeaconPeriod; } ;
struct wlan_bssid_ex {int* MacAddress; int* SupportedRates; int Length; scalar_t__ IELength; scalar_t__ IEs; TYPE_1__ Configuration; } ;
struct security_priv {scalar_t__ dot11PrivacyAlgrthm; scalar_t__ dot11AuthAlgrthm; } ;
struct registry_priv {int bw_mode; } ;
struct ndis_802_11_fix_ie {int dummy; } ;
struct TYPE_8__ {int network_type; int join_res; int network; } ;
struct TYPE_7__ {scalar_t__ ht_option; } ;
struct TYPE_6__ {scalar_t__ qos_option; } ;
struct mlme_priv {TYPE_4__ cur_network; TYPE_3__ htpriv; TYPE_2__ qospriv; } ;
struct mlme_ext_info {int WMM_enable; int HT_enable; struct wlan_bssid_ex network; } ;
struct mlme_ext_priv {int bstart_bss; int cur_channel; int cur_bwmode; int cur_ch_offset; int cur_wireless_mode; struct mlme_ext_info mlmext_info; } ;
struct adapter {struct mlme_ext_priv mlmeextpriv; struct security_priv securitypriv; struct mlme_priv mlmepriv; struct registry_priv registrypriv; } ;
struct HT_info_element {int* infos; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,...) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_2 (struct adapter*,int ) ;
 int FUNC_3 (struct adapter*,int ,int) ;
 int FUNC_4 (struct adapter*,int*) ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 int FUNC_5 (struct adapter*) ;
 int FUNC_6 (struct wlan_bssid_ex*,struct wlan_bssid_ex*,int ) ;
 int FUNC_7 (struct wlan_bssid_ex*) ;
 int* FUNC_8 (scalar_t__,int ,int*,scalar_t__) ;
 int FUNC_9 (scalar_t__,scalar_t__,int *,int *) ;
 int FUNC_10 (struct adapter*,int ,int*) ;
 scalar_t__ FUNC_11 (struct adapter*) ;
 int FUNC_12 (struct adapter*,int,int,int) ;
 int FUNC_13 (struct adapter*,int ,int *,int) ;
 int FUNC_14 (struct adapter*) ;
 int FUNC_15 (struct adapter*,int ) ;
 int FUNC_16 (struct adapter*) ;
 int FUNC_17 (struct adapter*) ;

void FUNC_18(struct adapter *VAR_23, u8 *VAR_24)
{
 u8 *VAR_25;
 u8 VAR_26, VAR_27, VAR_28, VAR_29;
 u16 VAR_30;
 u32 VAR_31;
 int VAR_32;
 struct registry_priv *VAR_33 = &VAR_23->registrypriv;
 struct mlme_priv *VAR_34 = &(VAR_23->mlmepriv);
 struct security_priv *VAR_35 = &(VAR_23->securitypriv);
 struct wlan_bssid_ex
  *VAR_36 = (struct wlan_bssid_ex *)&VAR_34->cur_network.network;
 struct mlme_ext_priv *VAR_37 = &(VAR_23->mlmeextpriv);
 struct mlme_ext_info *VAR_38 = &(VAR_37->mlmext_info);
 struct wlan_bssid_ex *VAR_39 = &(VAR_38->network);
 struct HT_info_element *VAR_40 = ((void*)0);
 u8 VAR_41 = 0;



 VAR_30 = (u16)VAR_36->Configuration.BeaconPeriod;
 VAR_27 = VAR_36->Configuration.DSConfig;
 VAR_28 = VAR_0;
 VAR_29 = VAR_3;




 if (!FUNC_9(VAR_36->IEs + VAR_16,
       VAR_36->IELength - VAR_16, ((void*)0), ((void*)0)))
  VAR_37->bstart_bss = 1;




 if (VAR_34->qospriv.qos_option)
  VAR_38->WMM_enable = 1;
 if (VAR_34->htpriv.ht_option) {
  VAR_38->WMM_enable = 1;
  VAR_38->HT_enable = 1;



  FUNC_16(VAR_23);
 }

 if (!VAR_34->cur_network.join_res) {


  if (
   (VAR_35->dot11PrivacyAlgrthm != VAR_21) &&
   (VAR_35->dot11PrivacyAlgrthm != VAR_20)
  )
   FUNC_5(VAR_23);
 }


 FUNC_2(VAR_23, VAR_18);


 FUNC_10(VAR_23, VAR_12, VAR_36->MacAddress);


 VAR_31 = 0x002F3217;
 FUNC_10(VAR_23, VAR_9, (u8 *)(&VAR_31));
 VAR_31 = 0x005E4317;
 FUNC_10(VAR_23, VAR_8, (u8 *)(&VAR_31));

 VAR_31 = 0x005ea42b;
 FUNC_10(VAR_23, VAR_6, (u8 *)(&VAR_31));
 VAR_31 = 0x0000A444;
 FUNC_10(VAR_23, VAR_7, (u8 *)(&VAR_31));


 VAR_26 = (
  VAR_35->dot11AuthAlgrthm == VAR_22
 ) ? 0xcc : 0xcf;
 FUNC_10(VAR_23, VAR_14, (u8 *)(&VAR_26));


 FUNC_10(VAR_23, VAR_11, (u8 *)(&VAR_30));

 FUNC_10(VAR_23, VAR_13, ((void*)0));

 if (!VAR_34->cur_network.join_res) {
  FUNC_3(VAR_23, VAR_2, 1);


 }


 VAR_25 = FUNC_8(
  (VAR_36->IEs + sizeof(struct ndis_802_11_fix_ie)),
  VAR_17,
  &VAR_32,
  (VAR_36->IELength - sizeof(struct ndis_802_11_fix_ie))
 );
 if (VAR_25 && VAR_32) {
  VAR_40 = (struct HT_info_element *)(VAR_25 + 2);

  if (VAR_27 > 14) {
   if ((VAR_33->bw_mode & 0xf0) > 0)
    VAR_41 = 1;
  } else {
   if ((VAR_33->bw_mode & 0x0f) > 0)
    VAR_41 = 1;
  }

  if ((VAR_41) && (VAR_40->infos[0] & FUNC_0(2))) {


   VAR_28 = VAR_1;
   switch (VAR_40->infos[0] & 0x3) {
   case 1:

    VAR_29 = VAR_4;
    break;

   case 3:

    VAR_29 = VAR_5;
    break;

   default:

    VAR_29 = VAR_3;
    break;
   }
  }
 }

 FUNC_12(VAR_23, VAR_27, VAR_29, VAR_28);
 FUNC_1(
  "CH =%d, BW =%d, offset =%d\n",
  VAR_27,
  VAR_28,
  VAR_29
 );
 VAR_37->cur_channel = VAR_27;
 VAR_37->cur_bwmode = VAR_28;
 VAR_37->cur_ch_offset = VAR_29;
 VAR_37->cur_wireless_mode = VAR_34->cur_network.network_type;


 FUNC_6(VAR_39, VAR_36, VAR_36->Length);


 FUNC_17(VAR_23);


 FUNC_4(VAR_23, VAR_36->SupportedRates);
 FUNC_10(VAR_23, VAR_10, VAR_36->SupportedRates);


 FUNC_15(
  VAR_23,
  FUNC_7((struct wlan_bssid_ex *)VAR_36)
 );

 if (VAR_37->bstart_bss) {
  FUNC_13(VAR_23, VAR_19, ((void*)0), 1);



  if (FUNC_11(VAR_23) == VAR_15)
   FUNC_1("issue_beacon, fail!\n");


 }


 FUNC_14(VAR_23);


}
