
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs4_slot_table {int dummy; } ;
struct nfs4_slot {int slot_nr; } ;


 int FUNC_0 (struct nfs4_slot_table*,struct nfs4_slot*) ;
 scalar_t__ FUNC_1 (struct nfs4_slot_table*,int ) ;

bool FUNC_2(struct nfs4_slot_table *VAR_0, struct nfs4_slot *VAR_1)
{
 if (FUNC_1(VAR_0, VAR_1->slot_nr))
  return 0;
 FUNC_0(VAR_0, VAR_1);
 return 1;
}
