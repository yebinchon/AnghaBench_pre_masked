
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct ieee80211_device {int dummy; } ;
struct ba_record {int valid; int timer; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct ieee80211_device *VAR_1, struct ba_record *VAR_2, u16 VAR_3)
{
 VAR_2->valid = 1;
 if (VAR_3 != 0)
  FUNC_0(&VAR_2->timer, VAR_0 + FUNC_1(VAR_3));
}
