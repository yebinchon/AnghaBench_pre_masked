
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct npc_mcam_alloc_entry_rsp {int count; int entry; int* entry_list; int free_count; } ;
struct npc_mcam_alloc_entry_req {scalar_t__ priority; int count; int ref_entry; scalar_t__ contig; } ;
struct npc_mcam {int bmap_fcnt; unsigned long* bmap; int lprio_start; int bmap_entries; int hprio_end; int lprio_count; unsigned long* bmap_reverse; int* entry2pfvf_map; int lock; int * entry2cntr_map; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (unsigned long*,int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct npc_mcam*,struct npc_mcam_alloc_entry_req*,int*,int*,int*) ;
 int FUNC_4 (unsigned long*,int,int,int,int*) ;
 int FUNC_5 (unsigned long*,int,int) ;
 int FUNC_6 (struct npc_mcam*,int) ;

__attribute__((used)) static int FUNC_7(struct npc_mcam *VAR_5, u16 VAR_6,
      struct npc_mcam_alloc_entry_req *VAR_7,
      struct npc_mcam_alloc_entry_rsp *VAR_8)
{
 u16 VAR_9[VAR_0];
 u16 VAR_10, VAR_11, VAR_12;
 u16 VAR_13, VAR_14, VAR_15;
 int VAR_16, VAR_17;
 bool VAR_18 = 0;
 unsigned long *VAR_19;
 u16 VAR_20;

 FUNC_1(&VAR_5->lock);


 if (!VAR_5->bmap_fcnt) {
  FUNC_2(&VAR_5->lock);
  return VAR_1;
 }
 if (VAR_7->priority) {
  FUNC_3(VAR_5, VAR_7,
         &VAR_13, &VAR_14, &VAR_18);
  goto alloc;
 }





 VAR_12 = FUNC_5(VAR_5->bmap,
       VAR_5->lprio_start,
       VAR_5->bmap_entries);
 VAR_11 = FUNC_5(VAR_5->bmap, 0, VAR_5->hprio_end);
 VAR_10 = VAR_5->bmap_fcnt - VAR_12 - VAR_11;


 if (VAR_10 > VAR_7->count) {
  VAR_13 = VAR_5->hprio_end;
  VAR_14 = VAR_5->lprio_start;
 } else if ((VAR_10 + (VAR_11 / 2) + (VAR_12 / 2)) > VAR_7->count) {



  VAR_13 = VAR_5->hprio_end / 2;
  VAR_14 = VAR_5->bmap_entries - (VAR_5->lprio_count / 2);
  VAR_18 = 1;
 } else {



  VAR_18 = 1;
  VAR_13 = 0;
  VAR_14 = VAR_5->bmap_entries;
 }

alloc:
 if (VAR_18) {
  VAR_19 = VAR_5->bmap_reverse;
  VAR_13 = VAR_5->bmap_entries - VAR_13;
  VAR_14 = VAR_5->bmap_entries - VAR_14;
  VAR_15 = VAR_13;
  VAR_13 = VAR_14;
  VAR_14 = VAR_15;
 } else {
  VAR_19 = VAR_5->bmap;
 }

 if (VAR_7->contig) {



  VAR_15 = FUNC_4(VAR_19, VAR_14, VAR_13,
      VAR_7->count, &VAR_20);
  VAR_8->count = VAR_20;
  if (VAR_18)
   VAR_8->entry = VAR_5->bmap_entries - VAR_15 - VAR_20;
  else
   VAR_8->entry = VAR_15;
 } else {



  VAR_8->count = 0;
  VAR_17 = VAR_13;
  for (VAR_16 = 0; VAR_16 < VAR_7->count; VAR_16++) {
   VAR_15 = FUNC_0(VAR_19, VAR_14, VAR_17);
   if (VAR_15 >= VAR_14)
    break;

   VAR_17 = VAR_13 + (VAR_15 - VAR_13) + 1;


   if (VAR_18)
    VAR_15 = VAR_5->bmap_entries - VAR_15 - 1;
   VAR_9[VAR_16] = VAR_15;
   VAR_8->count++;
  }
 }




 if (!VAR_7->priority && (VAR_8->count < VAR_7->count) &&
     ((VAR_14 - VAR_13) != VAR_5->bmap_entries)) {
  VAR_18 = 1;
  VAR_13 = 0;
  VAR_14 = VAR_5->bmap_entries;
  goto alloc;
 }




 if (VAR_7->priority && VAR_8->count < VAR_7->count) {
  if (VAR_7->priority == VAR_4 &&
      (VAR_13 != (VAR_7->ref_entry + 1))) {
   VAR_13 = VAR_7->ref_entry + 1;
   VAR_14 = VAR_5->bmap_entries;
   VAR_18 = 0;
   goto alloc;
  } else if ((VAR_7->priority == VAR_2) &&
      ((VAR_14 - VAR_13) != VAR_7->ref_entry)) {
   VAR_13 = 0;
   VAR_14 = VAR_7->ref_entry;
   VAR_18 = 1;
   goto alloc;
  }
 }





 if (!VAR_7->contig && VAR_8->count) {
  VAR_15 = 0;
  for (VAR_16 = VAR_8->count - 1; VAR_16 >= 0; VAR_16--) {
   if (VAR_18)
    VAR_8->entry_list[VAR_15++] = VAR_9[VAR_16];
   else
    VAR_8->entry_list[VAR_16] = VAR_9[VAR_16];
  }
 }


 for (VAR_16 = 0; VAR_16 < VAR_8->count; VAR_16++) {
  VAR_15 = VAR_7->contig ?
   (VAR_8->entry + VAR_16) : VAR_8->entry_list[VAR_16];
  FUNC_6(VAR_5, VAR_15);
  VAR_5->entry2pfvf_map[VAR_15] = VAR_6;
  VAR_5->entry2cntr_map[VAR_15] = VAR_3;
 }


 VAR_8->free_count = VAR_5->bmap_fcnt;

 FUNC_2(&VAR_5->lock);
 return 0;
}
