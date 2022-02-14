
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct ieee80211_device {int beacon_lock; } ;


 int VAR_0 ;
 struct ieee80211_device* FUNC_0 (int ,struct timer_list*,int ) ;
 struct ieee80211_device* VAR_1 ;
 int FUNC_1 (struct ieee80211_device*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct timer_list *VAR_2)
{
 struct ieee80211_device *VAR_3 =
  FUNC_0(VAR_3, VAR_2, VAR_0);
 unsigned long VAR_4;

 FUNC_2(&VAR_3->beacon_lock, VAR_4);
 FUNC_1(VAR_3);
 FUNC_3(&VAR_3->beacon_lock, VAR_4);
}
