
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ocfs2_slot_map_extended {TYPE_2__* se_slots; } ;
struct ocfs2_slot_info {int si_blocks; int si_slots_per_block; int si_num_slots; TYPE_1__** si_bh; } ;
struct TYPE_4__ {int es_node_num; scalar_t__ es_valid; } ;
struct TYPE_3__ {scalar_t__ b_data; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct ocfs2_slot_info*,int) ;
 int FUNC_2 (struct ocfs2_slot_info*,int,int ) ;

__attribute__((used)) static void FUNC_3(struct ocfs2_slot_info *VAR_0)
{
 int VAR_1, VAR_2, VAR_3;
 struct ocfs2_slot_map_extended *VAR_4;

 VAR_3 = 0;
 for (VAR_1 = 0; VAR_1 < VAR_0->si_blocks; VAR_1++) {
  VAR_4 = (struct ocfs2_slot_map_extended *)VAR_0->si_bh[VAR_1]->b_data;
  for (VAR_2 = 0;
       (VAR_2 < VAR_0->si_slots_per_block) &&
       (VAR_3 < VAR_0->si_num_slots);
       VAR_2++, VAR_3++) {
   if (VAR_4->se_slots[VAR_2].es_valid)
    FUNC_2(VAR_0, VAR_3,
            FUNC_0(VAR_4->se_slots[VAR_2].es_node_num));
   else
    FUNC_1(VAR_0, VAR_3);
  }
 }
}
