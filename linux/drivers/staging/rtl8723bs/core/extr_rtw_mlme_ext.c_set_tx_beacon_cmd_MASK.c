
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wlan_bssid_ex {int dummy; } ;
struct mlme_ext_info {int hidden_ssid_mode; int network; } ;
struct mlme_ext_priv {struct mlme_ext_info mlmext_info; } ;
struct cmd_priv {int dummy; } ;
struct cmd_obj {int dummy; } ;
struct adapter {struct mlme_ext_priv mlmeextpriv; struct cmd_priv cmdpriv; } ;
struct TYPE_2__ {scalar_t__ IELength; scalar_t__ IEs; } ;
struct Tx_Beacon_param {TYPE_1__ network; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct cmd_obj*,struct Tx_Beacon_param*,int ) ;
 int FUNC_2 (struct cmd_obj*) ;
 int FUNC_3 (TYPE_1__*,int *,int) ;
 int FUNC_4 (struct cmd_priv*,struct cmd_obj*) ;
 void* FUNC_5 (int) ;
 int FUNC_6 (scalar_t__,scalar_t__,int ) ;

u8 FUNC_7(struct adapter *VAR_4)
{
 struct cmd_obj *VAR_5;
 struct Tx_Beacon_param *VAR_6;
 struct cmd_priv *VAR_7 = &(VAR_4->cmdpriv);
 struct mlme_ext_priv *VAR_8 = &VAR_4->mlmeextpriv;
 struct mlme_ext_info *VAR_9 = &(VAR_8->mlmext_info);
 u8 VAR_10 = VAR_2;
 int VAR_11 = 0;

 VAR_5 = FUNC_5(sizeof(struct cmd_obj));
 if (VAR_5 == ((void*)0)) {
  VAR_10 = VAR_1;
  goto exit;
 }

 VAR_6 = FUNC_5(sizeof(struct Tx_Beacon_param));
 if (VAR_6 == ((void*)0)) {
  FUNC_2(VAR_5);
  VAR_10 = VAR_1;
  goto exit;
 }

 FUNC_3(&(VAR_6->network), &(VAR_9->network), sizeof(struct wlan_bssid_ex));

 VAR_11 = FUNC_6(
  VAR_6->network.IEs+VAR_0
  , VAR_6->network.IELength-VAR_0
  , VAR_9->hidden_ssid_mode
 );
 VAR_6->network.IELength += VAR_11;

 FUNC_1(VAR_5, VAR_6, FUNC_0(VAR_3));

 VAR_10 = FUNC_4(VAR_7, VAR_5);

exit:
 return VAR_10;
}
