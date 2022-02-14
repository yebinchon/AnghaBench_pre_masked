
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct wl1271 {int quirks; scalar_t__ reg_ch_conf_pending; } ;
typedef enum nl80211_band { ____Placeholder_nl80211_band } nl80211_band ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,long*) ;
 int FUNC_1 (int,int ) ;

void FUNC_2(struct wl1271 *VAR_2, u16 VAR_3,
         enum nl80211_band VAR_4)
{
 int VAR_5 = 0;

 if (!(VAR_2->quirks & VAR_1))
  return;

 VAR_5 = FUNC_1(VAR_4, VAR_3);

 if (VAR_5 >= 0 && VAR_5 <= VAR_0)
  FUNC_0(VAR_5, (long *)VAR_2->reg_ch_conf_pending);
}
