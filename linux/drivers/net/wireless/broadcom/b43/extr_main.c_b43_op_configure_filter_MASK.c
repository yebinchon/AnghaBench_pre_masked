
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ieee80211_hw {int dummy; } ;
struct b43_wldev {int dummy; } ;
struct b43_wl {unsigned int filter_flags; int mutex; struct b43_wldev* current_dev; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_0 (struct b43_wldev*) ;
 scalar_t__ FUNC_1 (struct b43_wldev*) ;
 struct b43_wl* FUNC_2 (struct ieee80211_hw*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct ieee80211_hw *VAR_7,
        unsigned int VAR_8, unsigned int *VAR_9,
        u64 VAR_10)
{
 struct b43_wl *VAR_11 = FUNC_2(VAR_7);
 struct b43_wldev *VAR_12;

 FUNC_3(&VAR_11->mutex);
 VAR_12 = VAR_11->current_dev;
 if (!VAR_12) {
  *VAR_9 = 0;
  goto out_unlock;
 }

 *VAR_9 &= VAR_1 |
    VAR_4 |
    VAR_6 |
    VAR_3 |
    VAR_5 |
    VAR_2;

 VAR_8 &= VAR_1 |
     VAR_4 |
     VAR_6 |
     VAR_3 |
     VAR_5 |
     VAR_2;

 VAR_11->filter_flags = *VAR_9;

 if (VAR_8 && FUNC_1(VAR_12) >= VAR_0)
  FUNC_0(VAR_12);

out_unlock:
 FUNC_4(&VAR_11->mutex);
}
