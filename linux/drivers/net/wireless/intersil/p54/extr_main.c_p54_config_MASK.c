
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct p54_common {int output_power; int conf_mutex; TYPE_3__* hw; struct ieee80211_channel* curchan; } ;
struct ieee80211_conf {int power_level; } ;
struct ieee80211_hw {struct ieee80211_conf conf; struct p54_common* priv; } ;
struct ieee80211_channel {int dummy; } ;
struct TYPE_4__ {struct ieee80211_channel* chan; } ;
struct TYPE_5__ {TYPE_1__ chandef; } ;
struct TYPE_6__ {TYPE_2__ conf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct p54_common*) ;
 int FUNC_4 (struct p54_common*) ;
 int FUNC_5 (struct p54_common*,int ,int ) ;
 int FUNC_6 (struct p54_common*) ;
 int FUNC_7 (struct p54_common*) ;
 int FUNC_8 (struct ieee80211_hw*) ;

__attribute__((used)) static int FUNC_9(struct ieee80211_hw *VAR_5, u32 VAR_6)
{
 int VAR_7 = 0;
 struct p54_common *VAR_8 = VAR_5->priv;
 struct ieee80211_conf *VAR_9 = &VAR_5->conf;

 FUNC_1(&VAR_8->conf_mutex);
 if (VAR_6 & VAR_2)
  VAR_8->output_power = VAR_9->power_level << 2;
 if (VAR_6 & VAR_0) {
  struct ieee80211_channel *VAR_10;
  FUNC_0(FUNC_8(VAR_5));
  VAR_10 = VAR_8->curchan;
  VAR_8->curchan = ((void*)0);
  VAR_7 = FUNC_5(VAR_8, VAR_4, 0);
  if (VAR_7) {
   VAR_8->curchan = VAR_10;
   goto out;
  }




  VAR_8->curchan = VAR_8->hw->conf.chandef.chan;
  FUNC_4(VAR_8);
  FUNC_0(FUNC_3(VAR_8));
 }
 if (VAR_6 & VAR_3) {
  FUNC_0(FUNC_8(VAR_5));
  VAR_7 = FUNC_6(VAR_8);
  if (VAR_7)
   goto out;
  FUNC_0(FUNC_8(VAR_5));
 }
 if (VAR_6 & VAR_1) {
  FUNC_0(FUNC_8(VAR_5));
  VAR_7 = FUNC_7(VAR_8);
  if (VAR_7)
   goto out;
  FUNC_0(FUNC_8(VAR_5));
 }

out:
 FUNC_2(&VAR_8->conf_mutex);
 return VAR_7;
}
