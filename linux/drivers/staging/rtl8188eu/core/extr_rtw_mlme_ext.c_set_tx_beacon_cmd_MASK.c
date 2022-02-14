
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wlan_bssid_ex {scalar_t__ ie_length; scalar_t__ ies; } ;
struct mlme_ext_info {int hidden_ssid_mode; int network; } ;
struct mlme_ext_priv {struct mlme_ext_info mlmext_info; } ;
struct cmd_priv {int dummy; } ;
struct cmd_obj {int dummy; } ;
struct adapter {struct mlme_ext_priv mlmeextpriv; struct cmd_priv cmdpriv; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct cmd_obj*,struct wlan_bssid_ex*,int ) ;
 int FUNC_1 (struct cmd_obj*) ;
 struct wlan_bssid_ex* FUNC_2 (int *,int,int ) ;
 struct cmd_obj* FUNC_3 (int,int ) ;
 int FUNC_4 (struct cmd_priv*,struct cmd_obj*) ;
 int FUNC_5 (scalar_t__,scalar_t__,int ) ;

u8 FUNC_6(struct adapter *VAR_4)
{
 struct cmd_obj *VAR_5;
 struct wlan_bssid_ex *VAR_6;
 struct cmd_priv *VAR_7 = &VAR_4->cmdpriv;
 struct mlme_ext_priv *VAR_8 = &VAR_4->mlmeextpriv;
 struct mlme_ext_info *VAR_9 = &VAR_8->mlmext_info;
 u8 VAR_10;
 int VAR_11 = 0;

 VAR_5 = FUNC_3(sizeof(struct cmd_obj), VAR_0);
 if (!VAR_5) {
  VAR_10 = VAR_2;
  goto exit;
 }

 VAR_6 = FUNC_2(&VAR_9->network,
    sizeof(struct wlan_bssid_ex), VAR_0);
 if (VAR_6 == ((void*)0)) {
  FUNC_1(VAR_5);
  VAR_10 = VAR_2;
  goto exit;
 }

 VAR_11 = FUNC_5(VAR_6->ies+VAR_1,
          VAR_6->ie_length-VAR_1,
          VAR_9->hidden_ssid_mode);
 VAR_6->ie_length += VAR_11;

 FUNC_0(VAR_5, VAR_6, VAR_3);

 VAR_10 = FUNC_4(VAR_7, VAR_5);

exit:
 return VAR_10;
}
