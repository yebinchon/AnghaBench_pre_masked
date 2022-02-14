
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_slot_info {int si_num_slots; TYPE_1__* si_slots; } ;
struct TYPE_2__ {unsigned int sl_node_num; scalar_t__ sl_valid; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct ocfs2_slot_info *VAR_1,
        unsigned int VAR_2)
{
 int VAR_3, VAR_4 = -VAR_0;

 for(VAR_3 = 0; VAR_3 < VAR_1->si_num_slots; VAR_3++) {
  if (VAR_1->si_slots[VAR_3].sl_valid &&
      (VAR_2 == VAR_1->si_slots[VAR_3].sl_node_num)) {
   VAR_4 = VAR_3;
   break;
  }
 }

 return VAR_4;
}
