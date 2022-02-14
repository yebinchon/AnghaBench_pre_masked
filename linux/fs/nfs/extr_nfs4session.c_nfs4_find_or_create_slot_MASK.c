
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct nfs4_slot_table {int max_slots; struct nfs4_slot* slots; } ;
struct nfs4_slot {scalar_t__ slot_nr; struct nfs4_slot* next; } ;
typedef int gfp_t ;


 int VAR_0 ;
 struct nfs4_slot* FUNC_0 (int ) ;
 struct nfs4_slot* FUNC_1 (struct nfs4_slot_table*,int ,scalar_t__,int ) ;

__attribute__((used)) static struct nfs4_slot *FUNC_2(struct nfs4_slot_table *VAR_1,
  u32 VAR_2, u32 VAR_3, gfp_t VAR_4)
{
 struct nfs4_slot **VAR_5, *VAR_6;

 VAR_5 = &VAR_1->slots;
 for (;;) {
  if (*VAR_5 == ((void*)0)) {
   *VAR_5 = FUNC_1(VAR_1, VAR_1->max_slots,
     VAR_3, VAR_4);
   if (*VAR_5 == ((void*)0))
    break;
   VAR_1->max_slots++;
  }
  VAR_6 = *VAR_5;
  if (VAR_6->slot_nr == VAR_2)
   return VAR_6;
  VAR_5 = &VAR_6->next;
 }
 return FUNC_0(-VAR_0);
}
