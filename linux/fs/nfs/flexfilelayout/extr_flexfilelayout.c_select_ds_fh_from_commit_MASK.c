
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct pnfs_layout_segment {int dummy; } ;
struct nfs_fh {int dummy; } ;
struct nfs4_ff_layout_segment {TYPE_1__** mirror_array; } ;
struct TYPE_2__ {struct nfs_fh* fh_versions; } ;


 struct nfs4_ff_layout_segment* FUNC_0 (struct pnfs_layout_segment*) ;

__attribute__((used)) static struct nfs_fh *
FUNC_1(struct pnfs_layout_segment *VAR_0, u32 VAR_1)
{
 struct nfs4_ff_layout_segment *VAR_2 = FUNC_0(VAR_0);




 return &VAR_2->mirror_array[VAR_1]->fh_versions[0];
}
