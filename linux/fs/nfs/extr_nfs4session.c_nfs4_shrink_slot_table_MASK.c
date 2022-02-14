
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct nfs4_slot_table {scalar_t__ max_slots; struct nfs4_slot* slots; } ;
struct nfs4_slot {struct nfs4_slot* next; } ;


 int FUNC_0 (struct nfs4_slot*) ;

__attribute__((used)) static void FUNC_1(struct nfs4_slot_table *VAR_0, u32 VAR_1)
{
 struct nfs4_slot **VAR_2;
 if (VAR_1 >= VAR_0->max_slots)
  return;

 VAR_2 = &VAR_0->slots;
 while (VAR_1--)
  VAR_2 = &(*VAR_2)->next;
 while (*VAR_2) {
  struct nfs4_slot *VAR_3 = *VAR_2;

  *VAR_2 = VAR_3->next;
  FUNC_0(VAR_3);
  VAR_0->max_slots--;
 }
}
