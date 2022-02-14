
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_vif {int* hw_queue; scalar_t__ type; scalar_t__ cab_queue; } ;
struct ieee80211_hw {scalar_t__ queues; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 () ;

__attribute__((used)) static void FUNC_1(struct ieee80211_hw *VAR_4,
       struct ieee80211_vif *VAR_5)
{
 int VAR_6;

 if (!FUNC_0())
  return;

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++)
  VAR_5->hw_queue[VAR_6] = VAR_6;

 if (VAR_5->type == VAR_2 ||
     VAR_5->type == VAR_3)
  VAR_5->cab_queue = VAR_4->queues - 2;
 else
  VAR_5->cab_queue = VAR_0;
}
