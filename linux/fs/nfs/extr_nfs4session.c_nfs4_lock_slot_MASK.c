
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct nfs4_slot_table {scalar_t__ highest_used_slotid; int generation; int used_slots; } ;
struct nfs4_slot {scalar_t__ slot_nr; int generation; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,int ) ;

__attribute__((used)) static void FUNC_1(struct nfs4_slot_table *VAR_1,
  struct nfs4_slot *VAR_2)
{
 u32 VAR_3 = VAR_2->slot_nr;

 FUNC_0(VAR_3, VAR_1->used_slots);
 if (VAR_3 > VAR_1->highest_used_slotid ||
     VAR_1->highest_used_slotid == VAR_0)
  VAR_1->highest_used_slotid = VAR_3;
 VAR_2->generation = VAR_1->generation;
}
