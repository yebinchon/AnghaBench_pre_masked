
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_bss_conf {int dummy; } ;
struct ar5523_cmd_rateset {int dummy; } ;
struct ar5523_cmd_rates {int rateset; void* size; void* connid; } ;
struct ar5523 {int dummy; } ;
typedef int rates ;


 int VAR_0 ;
 int FUNC_0 (struct ar5523*,int ,struct ar5523_cmd_rates*,int,int ) ;
 int FUNC_1 (struct ar5523*,struct ieee80211_bss_conf*,int *,int) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (struct ar5523_cmd_rates*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct ar5523 *VAR_1,
      struct ieee80211_bss_conf *VAR_2)
{
 struct ar5523_cmd_rates VAR_3;

 FUNC_3(&VAR_3, 0, sizeof(VAR_3));
 VAR_3.connid = FUNC_2(2);
 VAR_3.size = FUNC_2(sizeof(struct ar5523_cmd_rateset));
 FUNC_1(VAR_1, VAR_2, &VAR_3.rateset, 1);

 return FUNC_0(VAR_1, VAR_0, &VAR_3,
    sizeof(VAR_3), 0);
}
