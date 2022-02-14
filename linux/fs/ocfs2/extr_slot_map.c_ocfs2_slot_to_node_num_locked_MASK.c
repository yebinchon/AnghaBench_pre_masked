
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_super {int max_slots; int osb_lock; struct ocfs2_slot_info* slot_info; } ;
struct ocfs2_slot_info {TYPE_1__* si_slots; } ;
struct TYPE_2__ {unsigned int sl_node_num; int sl_valid; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;

int FUNC_2(struct ocfs2_super *VAR_1, int VAR_2,
      unsigned int *VAR_3)
{
 struct ocfs2_slot_info *VAR_4 = VAR_1->slot_info;

 FUNC_1(&VAR_1->osb_lock);

 FUNC_0(VAR_2 < 0);
 FUNC_0(VAR_2 >= VAR_1->max_slots);

 if (!VAR_4->si_slots[VAR_2].sl_valid)
  return -VAR_0;

 *VAR_3 = VAR_4->si_slots[VAR_2].sl_node_num;
 return 0;
}
