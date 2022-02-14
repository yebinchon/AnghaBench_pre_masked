
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs4_slot_table {int slot_tbl_lock; int slot_tbl_state; } ;


 int VAR_0 ;
 int FUNC_0 (struct nfs4_slot_table*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(struct nfs4_slot_table *VAR_1)
{
 if (FUNC_3(VAR_0, &VAR_1->slot_tbl_state)) {
  FUNC_1(&VAR_1->slot_tbl_lock);
  FUNC_0(VAR_1);
  FUNC_2(&VAR_1->slot_tbl_lock);
 }
}
