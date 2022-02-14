
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct survey_info {scalar_t__ time; int filled; } ;
struct p54_common {int chan_num; int * survey; int conf_mutex; struct ieee80211_channel* curchan; } ;
struct ieee80211_hw {struct p54_common* priv; } ;
struct ieee80211_channel {int hw_value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct survey_info*,int *,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct ieee80211_hw*) ;

__attribute__((used)) static int FUNC_5(struct ieee80211_hw *VAR_4, int VAR_5,
    struct survey_info *VAR_6)
{
 struct p54_common *VAR_7 = VAR_4->priv;
 struct ieee80211_channel *VAR_8;
 int VAR_9, VAR_10;
 bool VAR_11 = 0;

 if (VAR_5 >= VAR_7->chan_num)
  return -VAR_0;


 for (VAR_10 = 0; VAR_10 < 1; VAR_10++) {
  VAR_8 = VAR_7->curchan;
  if (VAR_8 && VAR_8->hw_value == VAR_5) {
   FUNC_2(&VAR_7->conf_mutex);
   VAR_9 = FUNC_4(VAR_4);
   FUNC_3(&VAR_7->conf_mutex);
   if (VAR_9)
    return VAR_9;

   VAR_11 = 1;
  }

  FUNC_0(VAR_6, &VAR_7->survey[VAR_5], sizeof(*VAR_6));

  if (VAR_11) {

   if (VAR_6->time != 0) {
    VAR_6->filled |= VAR_3;
   } else {






    FUNC_1(100);
    continue;
   }
  }
  return 0;
 }
 return -VAR_1;

}
