
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct ocfs2_slot_map {int * sm_slots; } ;
struct ocfs2_slot_info {int si_num_slots; TYPE_1__** si_bh; } ;
struct TYPE_2__ {scalar_t__ b_data; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct ocfs2_slot_info*,int) ;
 int FUNC_2 (struct ocfs2_slot_info*,int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct ocfs2_slot_info *VAR_1)
{
 int VAR_2;
 struct ocfs2_slot_map *VAR_3;

 VAR_3 = (struct ocfs2_slot_map *)VAR_1->si_bh[0]->b_data;

 for (VAR_2 = 0; VAR_2 < VAR_1->si_num_slots; VAR_2++) {
  if (FUNC_0(VAR_3->sm_slots[VAR_2]) == (u16)VAR_0)
   FUNC_1(VAR_1, VAR_2);
  else
   FUNC_2(VAR_1, VAR_2, FUNC_0(VAR_3->sm_slots[VAR_2]));
 }
}
