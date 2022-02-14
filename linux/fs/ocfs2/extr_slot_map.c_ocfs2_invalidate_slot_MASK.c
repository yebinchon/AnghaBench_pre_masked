
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_slot_info {int si_num_slots; TYPE_1__* si_slots; } ;
struct TYPE_2__ {scalar_t__ sl_valid; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(struct ocfs2_slot_info *VAR_0,
      int VAR_1)
{
 FUNC_0((VAR_1 < 0) || (VAR_1 >= VAR_0->si_num_slots));
 VAR_0->si_slots[VAR_1].sl_valid = 0;
}
