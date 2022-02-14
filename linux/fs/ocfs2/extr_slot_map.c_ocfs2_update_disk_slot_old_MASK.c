
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_slot_map {void** sm_slots; } ;
struct ocfs2_slot_info {int si_num_slots; struct buffer_head** si_bh; TYPE_1__* si_slots; } ;
struct buffer_head {scalar_t__ b_data; } ;
struct TYPE_2__ {int sl_node_num; scalar_t__ sl_valid; } ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct ocfs2_slot_info *VAR_1,
           int VAR_2,
           struct buffer_head **VAR_3)
{
 int VAR_4;
 struct ocfs2_slot_map *VAR_5;

 VAR_5 = (struct ocfs2_slot_map *)VAR_1->si_bh[0]->b_data;
 for (VAR_4 = 0; VAR_4 < VAR_1->si_num_slots; VAR_4++) {
  if (VAR_1->si_slots[VAR_4].sl_valid)
   VAR_5->sm_slots[VAR_4] =
    FUNC_0(VAR_1->si_slots[VAR_4].sl_node_num);
  else
   VAR_5->sm_slots[VAR_4] = FUNC_0(VAR_0);
 }
 *VAR_3 = VAR_1->si_bh[0];
}
