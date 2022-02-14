
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct survey_info {int filled; int noise; int time; int time_busy; int channel; } ;
struct mac80211_hwsim_data {int mutex; TYPE_1__* survey_data; } ;
struct ieee80211_hw {struct mac80211_hwsim_data* priv; } ;
struct TYPE_2__ {scalar_t__ start; scalar_t__ end; int channel; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct ieee80211_hw *VAR_4, int VAR_5,
         struct survey_info *VAR_6)
{
 struct mac80211_hwsim_data *VAR_7 = VAR_4->priv;

 if (VAR_5 < 0 || VAR_5 >= FUNC_0(VAR_7->survey_data))
  return -VAR_0;

 FUNC_2(&VAR_7->mutex);
 VAR_6->channel = VAR_7->survey_data[VAR_5].channel;
 if (!VAR_6->channel) {
  FUNC_3(&VAR_7->mutex);
  return -VAR_0;
 }







 VAR_6->filled = VAR_1 |
    VAR_2 |
    VAR_3;
 VAR_6->noise = -92;
 VAR_6->time =
  FUNC_1(VAR_7->survey_data[VAR_5].end -
     VAR_7->survey_data[VAR_5].start);

 VAR_6->time_busy = VAR_6->time/8;
 FUNC_3(&VAR_7->mutex);

 return 0;
}
