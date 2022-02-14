
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct ts_common_info {int inact_timer; int setup_timer; } ;
struct ieee80211_device {int dummy; } ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *,scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct ieee80211_device *VAR_1,
      struct ts_common_info *VAR_2, u32 VAR_3)
{
 FUNC_0(&VAR_2->setup_timer);
 FUNC_0(&VAR_2->inact_timer);

 if (VAR_3 != 0)
  FUNC_1(&VAR_2->inact_timer,
     VAR_0 + FUNC_2(VAR_3));
}
