
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct radar_detector_specs {int dummy; } ;
struct pulse_event {scalar_t__ ts; int freq; } ;
struct pri_sequence {int count_falses; int count; int pri; } ;
struct pri_detector {int (* reset ) (struct pri_detector*,scalar_t__) ;TYPE_1__* rs; struct pri_sequence* (* add_pulse ) (struct pri_detector*,struct pulse_event*) ;} ;
struct dfs_pattern_detector {scalar_t__ region; scalar_t__ last_pulse_ts; size_t num_radar_types; int common; } ;
struct channel_detector {struct pri_detector** detectors; } ;
struct TYPE_2__ {int type_id; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ,char*,int ,int ,int ,int ,int ) ;
 struct channel_detector* FUNC_1 (struct dfs_pattern_detector*,int ) ;
 int FUNC_2 (struct dfs_pattern_detector*) ;
 int FUNC_3 (struct radar_detector_specs*,TYPE_1__*,int) ;
 struct pri_sequence* FUNC_4 (struct pri_detector*,struct pulse_event*) ;
 int FUNC_5 (struct pri_detector*,scalar_t__) ;

__attribute__((used)) static bool
FUNC_6(struct dfs_pattern_detector *VAR_2, struct pulse_event *VAR_3,
       struct radar_detector_specs *VAR_4)
{
 u32 VAR_5;
 struct channel_detector *VAR_6;





 if (VAR_2->region == VAR_1)
  return 1;

 VAR_6 = FUNC_1(VAR_2, VAR_3->freq);
 if (VAR_6 == ((void*)0))
  return 0;


 if (VAR_3->ts < VAR_2->last_pulse_ts)
  FUNC_2(VAR_2);
 VAR_2->last_pulse_ts = VAR_3->ts;


 for (VAR_5 = 0; VAR_5 < VAR_2->num_radar_types; VAR_5++) {
  struct pri_detector *VAR_7 = VAR_6->detectors[VAR_5];
  struct pri_sequence *VAR_8 = VAR_7->add_pulse(VAR_7, VAR_3);
  if (VAR_8 != ((void*)0)) {
   if (VAR_4 != ((void*)0))
    FUNC_3(VAR_4, VAR_7->rs, sizeof(*VAR_4));
   FUNC_0(VAR_2->common, VAR_0,
    "DFS: radar found on freq=%d: id=%d, pri=%d, "
    "count=%d, count_false=%d\n",
    VAR_3->freq, VAR_7->rs->type_id,
    VAR_8->pri, VAR_8->count, VAR_8->count_falses);
   VAR_7->reset(VAR_7, VAR_2->last_pulse_ts);
   return 1;
  }
 }
 return 0;
}
