
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct wlan_bssid_ex {unsigned char* SupportedRates; } ;
struct mlme_ext_info {int HT_enable; scalar_t__ VHT_enable; scalar_t__ HT_caps_enable; scalar_t__ HT_info_enable; struct wlan_bssid_ex network; } ;
struct mlme_ext_priv {int cur_channel; int cur_wireless_mode; struct mlme_ext_info mlmext_info; } ;
struct TYPE_4__ {int (* SetHwRegHandler ) (struct adapter*,int ,int *) ;} ;
struct TYPE_3__ {int wireless_mode; } ;
struct adapter {TYPE_2__ HalFunc; TYPE_1__ registrypriv; struct mlme_ext_priv mlmeextpriv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (unsigned char*,int) ;
 int FUNC_1 (unsigned char*,int) ;
 int FUNC_2 (unsigned char*) ;
 int FUNC_3 (struct adapter*,int ,int *) ;
 int FUNC_4 (struct adapter*,int ,int *) ;
 int FUNC_5 (struct adapter*,int ) ;

void FUNC_6(struct adapter *VAR_11)
{
 int VAR_12, VAR_13 = 0;
 u32 VAR_14;
 struct mlme_ext_priv *VAR_15 = &VAR_11->mlmeextpriv;
 struct mlme_ext_info *VAR_16 = &(VAR_15->mlmext_info);
 struct wlan_bssid_ex *VAR_17 = &(VAR_16->network);
 unsigned char *VAR_18 = VAR_17->SupportedRates;

 VAR_12 = FUNC_2(VAR_17->SupportedRates);

 if ((VAR_16->HT_info_enable) && (VAR_16->HT_caps_enable))
  VAR_16->HT_enable = 1;

 if (VAR_15->cur_channel > 14) {
  if (VAR_16->VHT_enable)
   VAR_13 = VAR_5;
  else if (VAR_16->HT_enable)
   VAR_13 = VAR_10;

  VAR_13 |= VAR_4;
 } else {
  if (VAR_16->VHT_enable)
   VAR_13 = VAR_5;
  else if (VAR_16->HT_enable)
   VAR_13 = VAR_9;

  if ((FUNC_1(VAR_18, VAR_12)) == 1)
   VAR_13 |= VAR_6;
  else if ((FUNC_0(VAR_18, VAR_12)) == 1)
   VAR_13 |= VAR_7;
  else
   VAR_13 |= VAR_8;
 }

 VAR_15->cur_wireless_mode = VAR_13 & VAR_11->registrypriv.wireless_mode;

 VAR_14 = 0x0a0a0808;


 VAR_11->HalFunc.SetHwRegHandler(VAR_11, VAR_0, (u8 *)&VAR_14);

 VAR_11->HalFunc.SetHwRegHandler(VAR_11, VAR_1, (u8 *)&(VAR_15->cur_wireless_mode));

 if (VAR_15->cur_wireless_mode & VAR_6)
  FUNC_5(VAR_11, VAR_2);
  else
  FUNC_5(VAR_11, VAR_3);
}
