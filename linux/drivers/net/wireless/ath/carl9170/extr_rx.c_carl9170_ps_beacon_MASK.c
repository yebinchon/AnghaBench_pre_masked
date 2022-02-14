
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct ieee80211_tim_ie {int dtim_count; int bitmap_ctrl; } ;
struct ieee80211_hdr {int dummy; } ;
struct ath_common {int curaid; } ;
struct TYPE_6__ {int dtim_counter; int off_override; int last_beacon; } ;
struct ar9170 {TYPE_3__ ps; struct ath_common common; TYPE_2__* hw; } ;
struct TYPE_4__ {int flags; int ps_dtim_period; } ;
struct TYPE_5__ {TYPE_1__ conf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (struct ath_common*,struct ieee80211_hdr*) ;
 int* FUNC_2 (void*,unsigned int,int ) ;
 int FUNC_3 (struct ar9170*) ;
 int FUNC_4 (struct ieee80211_tim_ie*,int,int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct ar9170 *VAR_5, void *VAR_6, unsigned int VAR_7)
{
 struct ieee80211_hdr *VAR_8 = VAR_6;
 struct ieee80211_tim_ie *VAR_9;
 struct ath_common *VAR_10 = &VAR_5->common;
 u8 *VAR_11;
 u8 VAR_12;
 bool VAR_13;

 if (FUNC_5(!(VAR_5->hw->conf.flags & VAR_1)))
  return;


 if (VAR_7 <= 40 + VAR_0)
  return;



 if (!FUNC_1(VAR_10, VAR_8) || !VAR_10->curaid)
  return;

 VAR_5->ps.last_beacon = VAR_4;

 VAR_11 = FUNC_2(VAR_6, VAR_7 - VAR_0, VAR_3);
 if (!VAR_11)
  return;

 if (VAR_11[1] < sizeof(*VAR_9))
  return;

 VAR_12 = VAR_11[1];
 VAR_9 = (struct ieee80211_tim_ie *) &VAR_11[2];

 if (!FUNC_0(!VAR_5->hw->conf.ps_dtim_period))
  VAR_5->ps.dtim_counter = (VAR_9->dtim_count - 1) %
   VAR_5->hw->conf.ps_dtim_period;




 VAR_13 = FUNC_4(VAR_9, VAR_12, VAR_5->common.curaid);


 VAR_13 |= !!(VAR_9->bitmap_ctrl & 0x01);

 if (!VAR_13) {

  VAR_5->ps.off_override &= ~VAR_2;
  FUNC_3(VAR_5);
 } else {

  VAR_5->ps.off_override |= VAR_2;
 }
}
