
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct txpwr_limits {int dummy; } ;
struct ieee80211_channel {int flags; } ;
struct brcms_cm_info {struct brcms_c_info* wlc; } ;
struct brcms_c_info {int hw; TYPE_1__* protection; TYPE_5__* pub; } ;
struct TYPE_10__ {TYPE_3__* ieee_hw; } ;
struct TYPE_7__ {struct ieee80211_channel* chan; } ;
struct TYPE_9__ {TYPE_2__ chandef; } ;
struct TYPE_8__ {TYPE_4__ conf; } ;
struct TYPE_6__ {int gmode_user; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int,struct txpwr_limits*) ;
 int FUNC_1 (struct brcms_cm_info*,struct txpwr_limits*,int ) ;
 int FUNC_2 (struct brcms_cm_info*,int ,struct txpwr_limits*) ;
 int FUNC_3 (struct brcms_c_info*,int ,int) ;

void
FUNC_4(struct brcms_cm_info *VAR_3, u16 VAR_4,
    u8 VAR_5)
{
 struct brcms_c_info *VAR_6 = VAR_3->wlc;
 struct ieee80211_channel *VAR_7 = VAR_6->pub->ieee_hw->conf.chandef.chan;
 struct txpwr_limits VAR_8;

 FUNC_2(VAR_3, VAR_4, &VAR_8);

 FUNC_1(
  VAR_3, &VAR_8, VAR_5
 );


 if (VAR_7->flags & VAR_2)
  FUNC_3(VAR_6, VAR_0, 0);
 else
  FUNC_3(VAR_6, VAR_6->protection->gmode_user, 0);

 FUNC_0(VAR_6->hw, VAR_4,
         !!(VAR_7->flags & VAR_1),
         &VAR_8);
}
