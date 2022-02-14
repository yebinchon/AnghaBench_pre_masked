
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_low_level_stats {int dummy; } ;
struct ieee80211_hw {int dummy; } ;
struct b43legacy_wl {int irq_lock; int ieee_stats; } ;


 struct b43legacy_wl* FUNC_0 (struct ieee80211_hw*) ;
 int FUNC_1 (struct ieee80211_low_level_stats*,int *,int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct ieee80211_hw *VAR_0,
      struct ieee80211_low_level_stats *VAR_1)
{
 struct b43legacy_wl *VAR_2 = FUNC_0(VAR_0);
 unsigned long VAR_3;

 FUNC_2(&VAR_2->irq_lock, VAR_3);
 FUNC_1(VAR_1, &VAR_2->ieee_stats, sizeof(*VAR_1));
 FUNC_3(&VAR_2->irq_lock, VAR_3);

 return 0;
}
