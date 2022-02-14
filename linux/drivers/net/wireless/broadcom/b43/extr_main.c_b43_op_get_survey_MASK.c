
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct survey_info {int noise; int filled; int channel; } ;
struct TYPE_4__ {int chan; } ;
struct ieee80211_conf {TYPE_2__ chandef; } ;
struct ieee80211_hw {struct ieee80211_conf conf; } ;
struct TYPE_3__ {int link_noise; } ;
struct b43_wldev {TYPE_1__ stats; } ;
struct b43_wl {struct b43_wldev* current_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct b43_wl* FUNC_0 (struct ieee80211_hw*) ;

__attribute__((used)) static int FUNC_1(struct ieee80211_hw *VAR_2, int VAR_3,
        struct survey_info *VAR_4)
{
 struct b43_wl *VAR_5 = FUNC_0(VAR_2);
 struct b43_wldev *VAR_6 = VAR_5->current_dev;
 struct ieee80211_conf *VAR_7 = &VAR_2->conf;

 if (VAR_3 != 0)
  return -VAR_0;

 VAR_4->channel = VAR_7->chandef.chan;
 VAR_4->filled = VAR_1;
 VAR_4->noise = VAR_6->stats.link_noise;

 return 0;
}
