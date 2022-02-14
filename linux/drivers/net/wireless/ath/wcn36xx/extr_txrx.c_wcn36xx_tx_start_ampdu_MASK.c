
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct wcn36xx_sta {scalar_t__* ampdu_state; int ampdu_lock; scalar_t__ non_agg_frame_ct; } ;
struct wcn36xx {TYPE_1__* hw; } ;
struct sk_buff {scalar_t__ data; } ;
struct ieee80211_sta {int dummy; } ;
struct ieee80211_hdr {int frame_control; } ;
struct TYPE_2__ {int conf; } ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int *) ;
 size_t* FUNC_2 (struct ieee80211_hdr*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct ieee80211_sta*,size_t,int ) ;
 scalar_t__ FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 struct ieee80211_sta* FUNC_8 (struct wcn36xx_sta*) ;

__attribute__((used)) static void FUNC_9(struct wcn36xx *VAR_5,
       struct wcn36xx_sta *VAR_6,
       struct sk_buff *VAR_7)
{
 struct ieee80211_hdr *VAR_8 = (struct ieee80211_hdr *)VAR_7->data;
 struct ieee80211_sta *VAR_9;
 u8 *VAR_10, VAR_11;

 if (!FUNC_1(&VAR_5->hw->conf))
  return;

 VAR_9 = FUNC_8(VAR_6);

 if (FUNC_0(!FUNC_3(VAR_8->frame_control)))
  return;

 if (FUNC_5(VAR_7) == VAR_0)
  return;

 VAR_10 = FUNC_2(VAR_8);
 VAR_11 = VAR_10[0] & VAR_1;

 FUNC_6(&VAR_6->ampdu_lock);
 if (VAR_6->ampdu_state[VAR_11] != VAR_2)
  goto out_unlock;

 if (VAR_6->non_agg_frame_ct++ >= VAR_4) {
  VAR_6->ampdu_state[VAR_11] = VAR_3;
  VAR_6->non_agg_frame_ct = 0;
  FUNC_4(VAR_9, VAR_11, 0);
 }
out_unlock:
 FUNC_7(&VAR_6->ampdu_lock);
}
