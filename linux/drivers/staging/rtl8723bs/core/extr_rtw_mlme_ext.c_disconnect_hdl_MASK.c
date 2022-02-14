
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct wlan_bssid_ex {int MacAddress; } ;
struct mlme_ext_info {int state; int network; } ;
struct mlme_ext_priv {struct mlme_ext_info mlmext_info; } ;
struct disconnect_parm {int deauth_timeout_ms; } ;
struct adapter {struct mlme_ext_priv mlmeextpriv; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct adapter*) ;
 int FUNC_1 (struct adapter*,int ,int ,int,int) ;
 int FUNC_2 (struct adapter*) ;
 int FUNC_3 (struct adapter*,int ,scalar_t__*) ;
 int FUNC_4 (struct adapter*) ;

u8 FUNC_5(struct adapter *VAR_5, unsigned char *VAR_6)
{
 struct disconnect_parm *VAR_7 = (struct disconnect_parm *)VAR_6;
 struct mlme_ext_priv *VAR_8 = &VAR_5->mlmeextpriv;
 struct mlme_ext_info *VAR_9 = &(VAR_8->mlmext_info);
 struct wlan_bssid_ex *VAR_10 = (struct wlan_bssid_ex *)(&(VAR_9->network));
 u8 VAR_11;

 if (FUNC_0(VAR_5)) {
   FUNC_1(VAR_5, VAR_10->MacAddress, VAR_4, VAR_7->deauth_timeout_ms/100, 100);
 }

 if (((VAR_9->state&0x03) == VAR_2) || ((VAR_9->state&0x03) == VAR_3)) {

  VAR_11 = 0;
  FUNC_3(VAR_5, VAR_1, (u8 *)(&VAR_11));
 }

 FUNC_4(VAR_5);

 FUNC_2(VAR_5);

 return VAR_0;
}
