
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pnfs_layout_segment {int dummy; } ;
struct nfs4_pnfs_ds {int dummy; } ;
struct nfs4_ff_layout_segment {int mirror_array_cnt; } ;
struct nfs4_ff_layout_mirror {TYPE_1__* mirror_ds; } ;
struct TYPE_2__ {int id_node; } ;


 struct nfs4_ff_layout_mirror* FUNC_0 (struct pnfs_layout_segment*,int) ;
 struct nfs4_ff_layout_segment* FUNC_1 (struct pnfs_layout_segment*) ;
 struct nfs4_pnfs_ds* FUNC_2 (struct pnfs_layout_segment*,struct nfs4_ff_layout_mirror*,int) ;
 scalar_t__ FUNC_3 (int *) ;

__attribute__((used)) static struct nfs4_pnfs_ds *
FUNC_4(struct pnfs_layout_segment *VAR_0,
        int VAR_1, int *VAR_2,
        bool VAR_3)
{
 struct nfs4_ff_layout_segment *VAR_4 = FUNC_1(VAR_0);
 struct nfs4_ff_layout_mirror *VAR_5;
 struct nfs4_pnfs_ds *VAR_6;
 bool VAR_7 = 0;
 int VAR_8;


 for (VAR_8 = VAR_1; VAR_8 < VAR_4->mirror_array_cnt; VAR_8++) {
  if (VAR_8+1 == VAR_4->mirror_array_cnt)
   VAR_7 = !VAR_3;

  VAR_5 = FUNC_0(VAR_0, VAR_8);
  VAR_6 = FUNC_2(VAR_0, VAR_5, VAR_7);
  if (!VAR_6)
   continue;

  if (VAR_3 &&
      FUNC_3(&VAR_5->mirror_ds->id_node))
   continue;

  *VAR_2 = VAR_8;
  return VAR_6;
 }

 return ((void*)0);
}
