
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct vnt_private {scalar_t__ bb_type; int current_rate; } ;
struct TYPE_4__ {TYPE_1__* chan; } ;
struct ieee80211_conf {int flags; TYPE_2__ chandef; int listen_interval; } ;
struct ieee80211_hw {struct ieee80211_conf conf; struct vnt_private* priv; } ;
struct TYPE_3__ {scalar_t__ band; int hw_value; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct vnt_private*) ;
 int FUNC_1 (struct vnt_private*,int ) ;
 int FUNC_2 (struct vnt_private*,int ,int ) ;
 int FUNC_3 (struct vnt_private*,int ) ;

__attribute__((used)) static int FUNC_4(struct ieee80211_hw *VAR_11, u32 VAR_12)
{
 struct vnt_private *VAR_13 = VAR_11->priv;
 struct ieee80211_conf *VAR_14 = &VAR_11->conf;

 if (VAR_12 & VAR_5) {
  if (VAR_14->flags & VAR_7)
   FUNC_1(VAR_13, VAR_14->listen_interval);
  else
   FUNC_0(VAR_13);
 }

 if ((VAR_12 & VAR_3) ||
     (VAR_14->flags & VAR_6)) {
  FUNC_3(VAR_13, VAR_14->chandef.chan->hw_value);

  if (VAR_14->chandef.chan->band == VAR_8)
   VAR_13->bb_type = VAR_0;
  else
   VAR_13->bb_type = VAR_2;
 }

 if (VAR_12 & VAR_4) {
  if (VAR_13->bb_type == VAR_1)
   VAR_13->current_rate = VAR_9;
  else
   VAR_13->current_rate = VAR_10;

  FUNC_2(VAR_13, VAR_13->current_rate,
    VAR_14->chandef.chan->hw_value);
 }

 return 0;
}
