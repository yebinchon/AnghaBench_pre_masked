
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnt_private {int wake_up_count; int PortOffset; struct ieee80211_hw* hw; } ;
struct ieee80211_conf {int listen_interval; } ;
struct ieee80211_hw {struct ieee80211_conf conf; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_1 ;

bool
FUNC_1(
 struct vnt_private *VAR_2
)
{
 struct ieee80211_hw *VAR_3 = VAR_2->hw;
 struct ieee80211_conf *VAR_4 = &VAR_3->conf;
 bool VAR_5 = 0;

 if (VAR_4->listen_interval > 1) {
  if (!VAR_2->wake_up_count)
   VAR_2->wake_up_count = VAR_4->listen_interval;

  --VAR_2->wake_up_count;

  if (VAR_2->wake_up_count == 1) {

   FUNC_0(VAR_2->PortOffset,
          VAR_0, VAR_1);
   VAR_5 = 1;
  }
 }

 return VAR_5;
}
