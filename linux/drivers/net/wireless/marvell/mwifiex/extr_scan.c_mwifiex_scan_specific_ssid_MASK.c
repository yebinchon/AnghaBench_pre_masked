
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mwifiex_user_scan_cfg {int num_ssids; struct cfg80211_ssid* ssid_list; } ;
struct mwifiex_private {scalar_t__ scan_block; struct mwifiex_adapter* adapter; } ;
struct mwifiex_adapter {scalar_t__ scan_processing; } ;
struct cfg80211_ssid {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mwifiex_user_scan_cfg*) ;
 struct mwifiex_user_scan_cfg* FUNC_1 (int,int ) ;
 int FUNC_2 (struct mwifiex_adapter*,int ,char*) ;
 int FUNC_3 (struct mwifiex_private*,struct mwifiex_user_scan_cfg*) ;

__attribute__((used)) static int FUNC_4(struct mwifiex_private *VAR_4,
          struct cfg80211_ssid *VAR_5)
{
 struct mwifiex_adapter *VAR_6 = VAR_4->adapter;
 int VAR_7;
 struct mwifiex_user_scan_cfg *VAR_8;

 if (VAR_6->scan_processing) {
  FUNC_2(VAR_6, VAR_3,
       "cmd: Scan already in process...\n");
  return -VAR_0;
 }

 if (VAR_4->scan_block) {
  FUNC_2(VAR_6, VAR_3,
       "cmd: Scan is blocked during association...\n");
  return -VAR_0;
 }

 VAR_8 = FUNC_1(sizeof(struct mwifiex_user_scan_cfg), VAR_2);
 if (!VAR_8)
  return -VAR_1;

 VAR_8->ssid_list = VAR_5;
 VAR_8->num_ssids = 1;

 VAR_7 = FUNC_3(VAR_4, VAR_8);

 FUNC_0(VAR_8);
 return VAR_7;
}
