
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u32 ;
struct lan78xx_statstage {int dummy; } ;
struct TYPE_2__ {int access_lock; int curr_stat; int rollover_max; int rollover_count; } ;
struct lan78xx_net {int intf; TYPE_1__ stats; } ;
typedef int lan78xx_stats ;


 int FUNC_0 (struct lan78xx_net*,struct lan78xx_statstage*) ;
 scalar_t__ FUNC_1 (struct lan78xx_net*,struct lan78xx_statstage*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct lan78xx_net *VAR_0)
{
 u32 *VAR_1, *VAR_2, *VAR_3;
 u64 *VAR_4;
 int VAR_5;
 struct lan78xx_statstage VAR_6;

 if (FUNC_4(VAR_0->intf) < 0)
  return;

 VAR_1 = (u32 *)&VAR_6;
 VAR_2 = (u32 *)&VAR_0->stats.rollover_count;
 VAR_3 = (u32 *)&VAR_0->stats.rollover_max;
 VAR_4 = (u64 *)&VAR_0->stats.curr_stat;

 FUNC_2(&VAR_0->stats.access_lock);

 if (FUNC_1(VAR_0, &VAR_6) > 0)
  FUNC_0(VAR_0, &VAR_6);

 for (VAR_5 = 0; VAR_5 < (sizeof(VAR_6) / (sizeof(u32))); VAR_5++)
  VAR_4[VAR_5] = (u64)VAR_1[VAR_5] + ((u64)VAR_2[VAR_5] * ((u64)VAR_3[VAR_5] + 1));

 FUNC_3(&VAR_0->stats.access_lock);

 FUNC_5(VAR_0->intf);
}
