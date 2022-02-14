
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_device {int dummy; } ;
struct ba_record {int valid; int timer; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct ieee80211_device *VAR_0, struct ba_record *VAR_1)
{
 VAR_1->valid = 0;
 FUNC_0(&VAR_1->timer);
}
