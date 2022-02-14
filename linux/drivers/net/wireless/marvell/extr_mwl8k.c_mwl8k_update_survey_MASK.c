
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u64 ;
typedef int u32 ;
struct survey_info {size_t noise; int filled; struct ieee80211_channel* channel; int time; void* time_rx; void* time_busy; } ;
struct mwl8k_priv {TYPE_2__* hw; scalar_t__ channel_time; scalar_t__ regs; struct survey_info* survey; TYPE_1__* acs_chan; } ;
struct ieee80211_channel {int dummy; } ;
typedef size_t s8 ;
struct TYPE_4__ {int wiphy; } ;
struct TYPE_3__ {int center_freq; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t FUNC_0 (struct mwl8k_priv*,int ) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (TYPE_2__*,int ,int ,size_t*) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static void FUNC_5(struct mwl8k_priv *VAR_9,
    struct ieee80211_channel *VAR_10)
{
 u32 VAR_11, VAR_12;
 s8 VAR_13 = 0, VAR_14;
 struct survey_info *VAR_15;

 VAR_14 = FUNC_0(VAR_9, VAR_9->acs_chan->center_freq);
 if (VAR_14 >= VAR_2) {
  FUNC_4(VAR_9->hw->wiphy, "Failed to update survey\n");
  return;
 }

 VAR_15 = &VAR_9->survey[VAR_14];

 VAR_11 = FUNC_1(VAR_9->regs + VAR_3);
 VAR_11 /= 1000;
 VAR_15->time_busy = (u64) VAR_11;

 VAR_12 = FUNC_1(VAR_9->regs + VAR_1);
 VAR_12 /= 1000;
 VAR_15->time_rx = (u64) VAR_12;

 VAR_9->channel_time = VAR_8 - VAR_9->channel_time;
 VAR_15->time = FUNC_2(VAR_9->channel_time);

 VAR_15->channel = VAR_10;

 FUNC_3(VAR_9->hw, 0, VAR_0, &VAR_13);


 VAR_15->noise = VAR_13 * -1;

 VAR_15->filled = VAR_4 |
    VAR_5 |
    VAR_6 |
    VAR_7;
}
