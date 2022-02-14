
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_bss_conf {int aid; int bssid; } ;
struct ar5523_cmd_set_associd {int bssid; void* timoffset; void* associd; void* defaultrateix; } ;
struct ar5523 {int dummy; } ;
typedef int associd ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ar5523*,int ,struct ar5523_cmd_set_associd*,int,int ) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct ar5523_cmd_set_associd*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct ar5523 *VAR_2,
    struct ieee80211_bss_conf *VAR_3)
{
 struct ar5523_cmd_set_associd VAR_4;

 FUNC_3(&VAR_4, 0, sizeof(VAR_4));
 VAR_4.defaultrateix = FUNC_1(0);
 VAR_4.associd = FUNC_1(VAR_3->aid);
 VAR_4.timoffset = FUNC_1(0x3b);
 FUNC_2(VAR_4.bssid, VAR_3->bssid, VAR_0);
 return FUNC_0(VAR_2, VAR_1, &VAR_4,
    sizeof(VAR_4), 0);
}
