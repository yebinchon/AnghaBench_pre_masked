
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wlan_bssid_ex {int dummy; } ;
struct sta_info {int mac_id; } ;
struct TYPE_2__ {scalar_t__ LowPowerTransitionCount; scalar_t__ TrafficTransitionCount; } ;
struct mlme_priv {TYPE_1__ LinkDetectInfo; } ;
struct mlme_ext_info {int state; int network; } ;
struct mlme_ext_priv {int link_timer; int cur_bwmode; int cur_ch_offset; int cur_channel; struct mlme_ext_info mlmext_info; } ;
struct adapter {int stapriv; struct mlme_ext_priv mlmeextpriv; struct mlme_priv mlmepriv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct adapter*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct adapter*) ;
 int FUNC_3 (struct wlan_bssid_ex*) ;
 int * VAR_6 ;
 struct sta_info* FUNC_4 (int *,int ) ;
 int FUNC_5 (struct adapter*,int ) ;
 int FUNC_6 (struct adapter*,int ,int *) ;
 int FUNC_7 (struct adapter*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_8(struct adapter *VAR_7)
{
 struct mlme_priv *VAR_8 = &VAR_7->mlmepriv;
 struct mlme_ext_priv *VAR_9 = &VAR_7->mlmeextpriv;
 struct mlme_ext_info *VAR_10 = &(VAR_9->mlmext_info);
 struct wlan_bssid_ex *VAR_11 = (struct wlan_bssid_ex *)(&(VAR_10->network));
 {
  struct sta_info *VAR_12;
  VAR_12 = FUNC_4(&VAR_7->stapriv, FUNC_3(VAR_11));
  if (VAR_12)
   FUNC_5(VAR_7, VAR_12->mac_id);
 }

 FUNC_6(VAR_7, VAR_3, ((void*)0));
 FUNC_6(VAR_7, VAR_2, VAR_6);


 FUNC_0(VAR_7, VAR_5);

 VAR_10->state = VAR_4;


 VAR_9->cur_bwmode = VAR_0;
 VAR_9->cur_ch_offset = VAR_1;

 FUNC_7(VAR_7, VAR_9->cur_channel, VAR_9->cur_ch_offset, VAR_9->cur_bwmode);

 FUNC_2(VAR_7);

 FUNC_1(&VAR_9->link_timer);


 VAR_8->LinkDetectInfo.TrafficTransitionCount = 0;
 VAR_8->LinkDetectInfo.LowPowerTransitionCount = 0;

}
