
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct wlan_bssid_ex {int MacAddress; } ;
struct mlme_ext_info {int state; int network; } ;
struct mlme_ext_priv {int link_timer; int cur_bwmode; int cur_ch_offset; int cur_channel; struct mlme_ext_info mlmext_info; } ;
struct disconnect_parm {int deauth_timeout_ms; } ;
struct TYPE_2__ {int wireless_mode; } ;
struct adapter {TYPE_1__ registrypriv; struct mlme_ext_priv mlmeextpriv; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct adapter*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct adapter*) ;
 scalar_t__ FUNC_3 (struct adapter*) ;
 int FUNC_4 (struct adapter*,int ,int ,int,int) ;
 scalar_t__* VAR_11 ;
 int FUNC_5 (struct adapter*) ;
 int FUNC_6 (struct adapter*,int ,scalar_t__*) ;
 int FUNC_7 (struct adapter*,int ,int ,int ) ;
 int FUNC_8 (struct adapter*,int ) ;

u8 FUNC_9(struct adapter *VAR_12, unsigned char *VAR_13)
{
 struct disconnect_parm *VAR_14 = (struct disconnect_parm *)VAR_13;
 struct mlme_ext_priv *VAR_15 = &VAR_12->mlmeextpriv;
 struct mlme_ext_info *VAR_16 = &VAR_15->mlmext_info;
 struct wlan_bssid_ex *VAR_17 = (struct wlan_bssid_ex *)(&VAR_16->network);
 u8 VAR_18;

 if (FUNC_3(VAR_12))
  FUNC_4(VAR_12, VAR_17->MacAddress, VAR_9, VAR_14->deauth_timeout_ms/100, 100);

 FUNC_6(VAR_12, VAR_5, ((void*)0));
 FUNC_6(VAR_12, VAR_4, VAR_11);


 FUNC_8(VAR_12, VAR_12->registrypriv.wireless_mode);

 if (((VAR_16->state & 0x03) == VAR_6) || ((VAR_16->state & 0x03) == VAR_7)) {

  VAR_18 = 0;
  FUNC_6(VAR_12, VAR_3, (u8 *)(&VAR_18));
 }


 FUNC_0(VAR_12, VAR_10);

 VAR_16->state = VAR_8;


 VAR_15->cur_bwmode = VAR_2;
 VAR_15->cur_ch_offset = VAR_1;

 FUNC_7(VAR_12, VAR_15->cur_channel, VAR_15->cur_ch_offset, VAR_15->cur_bwmode);

 FUNC_2(VAR_12);

 FUNC_1(&VAR_15->link_timer);

 FUNC_5(VAR_12);

 return VAR_0;
}
