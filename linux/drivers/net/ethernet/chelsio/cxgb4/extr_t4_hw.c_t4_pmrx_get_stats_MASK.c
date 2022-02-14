
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_3__ {int pm_stats_cnt; } ;
struct TYPE_4__ {int chip; TYPE_1__ arch; } ;
struct adapter {TYPE_2__ params; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct adapter*,int ,int ,int*,int,int ) ;
 int FUNC_2 (struct adapter*,int ) ;
 int FUNC_3 (struct adapter*,int ) ;
 int FUNC_4 (struct adapter*,int ,int) ;

void FUNC_5(struct adapter *VAR_6, u32 VAR_7[], u64 VAR_8[])
{
 int VAR_9;
 u32 VAR_10[2];

 for (VAR_9 = 0; VAR_9 < VAR_6->params.arch.pm_stats_cnt; VAR_9++) {
  FUNC_4(VAR_6, VAR_3, VAR_9 + 1);
  VAR_7[VAR_9] = FUNC_2(VAR_6, VAR_4);
  if (FUNC_0(VAR_6->params.chip)) {
   VAR_8[VAR_9] = FUNC_3(VAR_6, VAR_5);
  } else {
   FUNC_1(VAR_6, VAR_0,
      VAR_1, VAR_10, 2,
      VAR_2);
   VAR_8[VAR_9] = (((u64)VAR_10[0] << 32) | VAR_10[1]);
  }
 }
}
