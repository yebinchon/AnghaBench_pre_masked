
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs4_slot_table {int complete; int slot_waitq; int slot_tbl_waitq; int slot_tbl_lock; int highest_used_slotid; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char const*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct nfs4_slot_table *VAR_1, const char *VAR_2)
{
 VAR_1->highest_used_slotid = VAR_0;
 FUNC_3(&VAR_1->slot_tbl_lock);
 FUNC_2(&VAR_1->slot_tbl_waitq, VAR_2);
 FUNC_1(&VAR_1->slot_waitq);
 FUNC_0(&VAR_1->complete);
}
