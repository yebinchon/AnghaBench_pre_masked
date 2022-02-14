
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct npc_mcam_alloc_entry_req {scalar_t__ priority; scalar_t__ ref_entry; scalar_t__ count; } ;
struct npc_mcam {scalar_t__ bmap_entries; scalar_t__ hprio_end; scalar_t__ lprio_start; int bmap; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static void
FUNC_1(struct npc_mcam *VAR_1,
       struct npc_mcam_alloc_entry_req *VAR_2,
       u16 *VAR_3, u16 *VAR_4, bool *VAR_5)
{
 u16 VAR_6;

 if (VAR_2->priority == VAR_0)
  goto hprio;
 *VAR_5 = 0;
 *VAR_3 = VAR_2->ref_entry + 1;
 *VAR_4 = VAR_1->bmap_entries;

 if (VAR_2->ref_entry >= VAR_1->hprio_end)
  return;

 VAR_6 = FUNC_0(VAR_1->bmap,
           VAR_1->hprio_end, VAR_1->bmap_entries);
 if (VAR_6 > VAR_2->count)
  *VAR_3 = VAR_1->hprio_end;
 else
  *VAR_5 = 1;
 return;

hprio:
 *VAR_5 = 1;
 *VAR_3 = 0;
 *VAR_4 = VAR_2->ref_entry;

 if (VAR_2->ref_entry <= VAR_1->lprio_start)
  return;

 VAR_6 = FUNC_0(VAR_1->bmap,
           VAR_1->hprio_end, VAR_1->lprio_start);
 if (VAR_6 < VAR_2->count)
  return;
 *VAR_3 = VAR_1->hprio_end;
 *VAR_4 = VAR_1->lprio_start;
}
