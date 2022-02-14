
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211_vif {int dummy; } ;
struct ieee80211_bss_conf {int dummy; } ;
struct ar5523_cmd_rateset {int dummy; } ;
struct TYPE_2__ {void* wlanmode; int rateset; } ;
struct ar5523_cmd_create_connection {TYPE_1__ connattr; void* size; void* bssid; void* connid; } ;
struct ar5523 {int dummy; } ;
typedef int create ;


 int VAR_0 ;
 int FUNC_0 (struct ar5523*,int ,struct ar5523_cmd_create_connection*,int,int ) ;
 int FUNC_1 (struct ar5523*,struct ieee80211_bss_conf*,int *,int) ;
 int FUNC_2 (struct ar5523*,struct ieee80211_bss_conf*) ;
 void* FUNC_3 (int) ;
 int FUNC_4 (struct ar5523_cmd_create_connection*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct ar5523 *VAR_1,
        struct ieee80211_vif *VAR_2,
        struct ieee80211_bss_conf *VAR_3)
{
 struct ar5523_cmd_create_connection VAR_4;
 int VAR_5;

 FUNC_4(&VAR_4, 0, sizeof(VAR_4));
 VAR_4.connid = FUNC_3(2);
 VAR_4.bssid = FUNC_3(0);

 VAR_4.size = FUNC_3(sizeof(struct ar5523_cmd_rateset));

 FUNC_1(VAR_1, VAR_3, &VAR_4.connattr.rateset, 0);

 VAR_5 = FUNC_2(VAR_1, VAR_3);
 VAR_4.connattr.wlanmode = FUNC_3(VAR_5);

 return FUNC_0(VAR_1, VAR_0, &VAR_4,
    sizeof(VAR_4), 0);
}
