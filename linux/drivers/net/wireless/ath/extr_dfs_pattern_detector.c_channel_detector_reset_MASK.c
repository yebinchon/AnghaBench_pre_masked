
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct dfs_pattern_detector {size_t num_radar_types; int last_pulse_ts; } ;
struct channel_detector {TYPE_1__** detectors; } ;
struct TYPE_2__ {int (* reset ) (TYPE_1__*,int ) ;} ;


 int FUNC_0 (TYPE_1__*,int ) ;

__attribute__((used)) static void FUNC_1(struct dfs_pattern_detector *VAR_0,
       struct channel_detector *VAR_1)
{
 u32 VAR_2;
 if (VAR_1 == ((void*)0))
  return;
 for (VAR_2 = 0; VAR_2 < VAR_0->num_radar_types; VAR_2++)
  VAR_1->detectors[VAR_2]->reset(VAR_1->detectors[VAR_2], VAR_0->last_pulse_ts);
}
