
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct nfs4_slot_table {scalar_t__ max_slotid; } ;
struct nfs4_slot {int dummy; } ;


 int VAR_0 ;
 struct nfs4_slot* FUNC_0 (int ) ;
 int VAR_1 ;
 struct nfs4_slot* FUNC_1 (struct nfs4_slot_table*,scalar_t__,int ,int ) ;

struct nfs4_slot *FUNC_2(struct nfs4_slot_table *VAR_2, u32 VAR_3)
{
 if (VAR_3 <= VAR_2->max_slotid)
  return FUNC_1(VAR_2, VAR_3, 0, VAR_1);
 return FUNC_0(-VAR_0);
}
