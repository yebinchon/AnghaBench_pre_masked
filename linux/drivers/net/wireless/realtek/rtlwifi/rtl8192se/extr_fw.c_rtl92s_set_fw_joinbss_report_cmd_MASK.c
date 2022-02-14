
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u8 ;
struct rtl_mac {int assoc_id; TYPE_2__* vif; int * bssid; } ;
struct ieee80211_hw {int dummy; } ;
struct h2c_joinbss_rpt_parm {int * bssid; void* ps_qos_info; void* opmode; } ;
struct TYPE_3__ {int beacon_int; } ;
struct TYPE_4__ {TYPE_1__ bss_conf; } ;


 int VAR_0 ;
 int FUNC_0 (void**,int ,int,int ) ;
 int FUNC_1 (struct ieee80211_hw*,int ,void**) ;
 struct rtl_mac* FUNC_2 (int ) ;
 int FUNC_3 (struct ieee80211_hw*) ;

void FUNC_4(struct ieee80211_hw *VAR_1,
  u8 VAR_2, u8 VAR_3)
{
 struct rtl_mac *VAR_4 = FUNC_2(FUNC_3(VAR_1));
 struct h2c_joinbss_rpt_parm VAR_5;

 VAR_5.opmode = VAR_2;
 VAR_5.ps_qos_info = VAR_3;
 VAR_5.bssid[0] = VAR_4->bssid[0];
 VAR_5.bssid[1] = VAR_4->bssid[1];
 VAR_5.bssid[2] = VAR_4->bssid[2];
 VAR_5.bssid[3] = VAR_4->bssid[3];
 VAR_5.bssid[4] = VAR_4->bssid[4];
 VAR_5.bssid[5] = VAR_4->bssid[5];
 FUNC_0((u8 *)(&VAR_5) + 8, 0, 16,
   VAR_4->vif->bss_conf.beacon_int);
 FUNC_0((u8 *)(&VAR_5) + 10, 0, 16, VAR_4->assoc_id);

 FUNC_1(VAR_1, VAR_0, (u8 *)&VAR_5);
}
