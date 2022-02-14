
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct wiphy {size_t n_iface_combinations; int interface_modes; struct ieee80211_iface_combination* iface_combinations; } ;
struct qtnf_mac_info {size_t n_if_comb; int radar_detect_widths; struct ieee80211_iface_combination* if_comb; } ;
struct ieee80211_iface_combination {size_t n_limits; TYPE_1__* limits; int radar_detect_widths; } ;
struct TYPE_2__ {int types; } ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(struct wiphy *VAR_1, struct qtnf_mac_info *VAR_2)
{
 struct ieee80211_iface_combination *VAR_3;
 size_t VAR_4;
 u16 VAR_5 = 0;
 size_t VAR_6, VAR_7;

 VAR_3 = VAR_2->if_comb;
 VAR_4 = VAR_2->n_if_comb;

 if (!VAR_3 || !VAR_4)
  return -VAR_0;

 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
  VAR_3[VAR_6].radar_detect_widths = VAR_2->radar_detect_widths;

  for (VAR_7 = 0; VAR_7 < VAR_3[VAR_6].n_limits; VAR_7++)
   VAR_5 |= VAR_3[VAR_6].limits[VAR_7].types;
 }

 VAR_1->iface_combinations = VAR_3;
 VAR_1->n_iface_combinations = VAR_4;
 VAR_1->interface_modes = VAR_5;

 return 0;
}
