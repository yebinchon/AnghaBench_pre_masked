
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct mwifiex_uap_bss_param {int power_constraint; } ;
struct mwifiex_private {int dummy; } ;
struct TYPE_2__ {int tail_len; int tail; } ;
struct cfg80211_ap_settings {TYPE_1__ beacon; } ;


 int VAR_0 ;
 int * FUNC_0 (int ,int ,int ) ;

void FUNC_1(struct mwifiex_private *VAR_1,
       struct mwifiex_uap_bss_param *VAR_2,
       struct cfg80211_ap_settings *VAR_3)
{
 const u8 *VAR_4;

 VAR_4 = FUNC_0(VAR_0, VAR_3->beacon.tail,
      VAR_3->beacon.tail_len);
 if (VAR_4)
  VAR_2->power_constraint = *(VAR_4 + 2);
 else
  VAR_2->power_constraint = 0;
}
