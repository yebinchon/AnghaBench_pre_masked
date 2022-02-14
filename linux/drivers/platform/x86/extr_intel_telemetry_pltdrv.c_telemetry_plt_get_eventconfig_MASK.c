
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t u32 ;
struct telemetry_evtconfig {size_t* evtmap; int num_evts; int period; } ;
struct TYPE_9__ {int ssram_evts_used; TYPE_3__* telem_evts; int curr_period; } ;
struct TYPE_7__ {int ssram_evts_used; TYPE_1__* telem_evts; int curr_period; } ;
struct TYPE_10__ {int telem_lock; TYPE_4__ ioss_config; TYPE_2__ pss_config; } ;
struct TYPE_8__ {size_t evt_id; } ;
struct TYPE_6__ {size_t evt_id; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 TYPE_5__* VAR_1 ;

__attribute__((used)) static int FUNC_2(struct telemetry_evtconfig *VAR_2,
     struct telemetry_evtconfig *VAR_3,
     int VAR_4, int VAR_5)
{
 u32 *VAR_6, *VAR_7;
 u32 VAR_8;

 VAR_6 = VAR_2->evtmap;
 VAR_7 = VAR_3->evtmap;

 FUNC_0(&(VAR_1->telem_lock));
 VAR_2->num_evts = VAR_1->pss_config.ssram_evts_used;
 VAR_3->num_evts = VAR_1->ioss_config.ssram_evts_used;

 VAR_2->period = VAR_1->pss_config.curr_period;
 VAR_3->period = VAR_1->ioss_config.curr_period;

 if ((VAR_4 < VAR_1->pss_config.ssram_evts_used) ||
     (VAR_5 < VAR_1->ioss_config.ssram_evts_used)) {
  FUNC_1(&(VAR_1->telem_lock));
  return -VAR_0;
 }

 for (VAR_8 = 0; VAR_8 < VAR_1->pss_config.ssram_evts_used;
      VAR_8++) {
  VAR_6[VAR_8] =
  VAR_1->pss_config.telem_evts[VAR_8].evt_id;
 }

 for (VAR_8 = 0; VAR_8 < VAR_1->ioss_config.ssram_evts_used;
      VAR_8++) {
  VAR_7[VAR_8] =
  VAR_1->ioss_config.telem_evts[VAR_8].evt_id;
 }

 FUNC_1(&(VAR_1->telem_lock));
 return 0;
}
