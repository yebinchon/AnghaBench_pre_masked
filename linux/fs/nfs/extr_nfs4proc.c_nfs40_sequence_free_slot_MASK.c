
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs4_slot_table {int slot_tbl_lock; } ;
struct nfs4_slot {struct nfs4_slot_table* table; } ;
struct nfs4_sequence_res {struct nfs4_slot* sr_slot; } ;


 int FUNC_0 (struct nfs4_slot_table*,struct nfs4_slot*) ;
 int FUNC_1 (struct nfs4_slot_table*,struct nfs4_slot*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct nfs4_sequence_res *VAR_0)
{
 struct nfs4_slot *VAR_1 = VAR_0->sr_slot;
 struct nfs4_slot_table *VAR_2;

 VAR_2 = VAR_1->table;
 FUNC_2(&VAR_2->slot_tbl_lock);
 if (!FUNC_0(VAR_2, VAR_1))
  FUNC_1(VAR_2, VAR_1);
 FUNC_3(&VAR_2->slot_tbl_lock);

 VAR_0->sr_slot = ((void*)0);
}
