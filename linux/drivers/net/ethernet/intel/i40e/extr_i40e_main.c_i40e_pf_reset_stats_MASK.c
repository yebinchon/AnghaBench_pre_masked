
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i40e_pf {int stat_offsets_loaded; scalar_t__ hw_csum_rx_error; TYPE_1__** veb; int stats_offsets; int stats; } ;
struct TYPE_2__ {int stat_offsets_loaded; int tc_stats_offsets; int tc_stats; int stats_offsets; int stats; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int) ;

void FUNC_1(struct i40e_pf *VAR_1)
{
 int VAR_2;

 FUNC_0(&VAR_1->stats, 0, sizeof(VAR_1->stats));
 FUNC_0(&VAR_1->stats_offsets, 0, sizeof(VAR_1->stats_offsets));
 VAR_1->stat_offsets_loaded = 0;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  if (VAR_1->veb[VAR_2]) {
   FUNC_0(&VAR_1->veb[VAR_2]->stats, 0,
          sizeof(VAR_1->veb[VAR_2]->stats));
   FUNC_0(&VAR_1->veb[VAR_2]->stats_offsets, 0,
          sizeof(VAR_1->veb[VAR_2]->stats_offsets));
   FUNC_0(&VAR_1->veb[VAR_2]->tc_stats, 0,
          sizeof(VAR_1->veb[VAR_2]->tc_stats));
   FUNC_0(&VAR_1->veb[VAR_2]->tc_stats_offsets, 0,
          sizeof(VAR_1->veb[VAR_2]->tc_stats_offsets));
   VAR_1->veb[VAR_2]->stat_offsets_loaded = 0;
  }
 }
 VAR_1->hw_csum_rx_error = 0;
}
