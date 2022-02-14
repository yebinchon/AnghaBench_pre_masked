
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lm_lockstruct {int ls_recover_size; int ls_recover_spin; scalar_t__ ls_recover_block; scalar_t__* ls_recover_submit; } ;
struct gfs2_sbd {struct lm_lockstruct sd_lockstruct; } ;
struct dlm_slot {int slot; } ;


 int FUNC_0 (struct gfs2_sbd*,char*,int,scalar_t__,int) ;
 int FUNC_1 (struct gfs2_sbd*,char*,int,scalar_t__,scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(void *VAR_0, struct dlm_slot *VAR_1)
{
 struct gfs2_sbd *VAR_2 = VAR_0;
 struct lm_lockstruct *VAR_3 = &VAR_2->sd_lockstruct;
 int VAR_4 = VAR_1->slot - 1;

 FUNC_2(&VAR_3->ls_recover_spin);
 if (VAR_3->ls_recover_size < VAR_4 + 1) {
  FUNC_0(VAR_2, "recover_slot jid %d gen %u short size %d\n",
         VAR_4, VAR_3->ls_recover_block, VAR_3->ls_recover_size);
  FUNC_3(&VAR_3->ls_recover_spin);
  return;
 }

 if (VAR_3->ls_recover_submit[VAR_4]) {
  FUNC_1(VAR_2, "recover_slot jid %d gen %u prev %u\n",
   VAR_4, VAR_3->ls_recover_block, VAR_3->ls_recover_submit[VAR_4]);
 }
 VAR_3->ls_recover_submit[VAR_4] = VAR_3->ls_recover_block;
 FUNC_3(&VAR_3->ls_recover_spin);
}
