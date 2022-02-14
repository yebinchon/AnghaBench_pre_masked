
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs4_slot_table {scalar_t__ highest_used_slotid; int slot_tbl_lock; int complete; int slot_tbl_state; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct nfs4_slot_table *VAR_2)
{
 FUNC_1(VAR_1, &VAR_2->slot_tbl_state);
 FUNC_2(&VAR_2->slot_tbl_lock);
 if (VAR_2->highest_used_slotid != VAR_0) {
  FUNC_0(&VAR_2->complete);
  FUNC_3(&VAR_2->slot_tbl_lock);
  return FUNC_4(&VAR_2->complete);
 }
 FUNC_3(&VAR_2->slot_tbl_lock);
 return 0;
}
