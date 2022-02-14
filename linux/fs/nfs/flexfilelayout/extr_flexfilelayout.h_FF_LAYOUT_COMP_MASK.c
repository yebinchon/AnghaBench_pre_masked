
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct pnfs_layout_segment {int dummy; } ;
struct nfs4_ff_layout_segment {size_t mirror_array_cnt; struct nfs4_ff_layout_mirror** mirror_array; } ;
struct nfs4_ff_layout_mirror {int dummy; } ;


 struct nfs4_ff_layout_segment* FUNC_0 (struct pnfs_layout_segment*) ;

__attribute__((used)) static inline struct nfs4_ff_layout_mirror *
FUNC_1(struct pnfs_layout_segment *VAR_0, u32 VAR_1)
{
 struct nfs4_ff_layout_segment *VAR_2 = FUNC_0(VAR_0);

 if (VAR_1 < VAR_2->mirror_array_cnt)
  return VAR_2->mirror_array[VAR_1];
 return ((void*)0);
}
