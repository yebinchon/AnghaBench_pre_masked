
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct pnfs_layout_segment {int dummy; } ;
struct nfs4_ff_layout_mirror {TYPE_1__* mirror_ds; } ;
struct nfs4_deviceid_node {int dummy; } ;
struct TYPE_2__ {struct nfs4_deviceid_node id_node; } ;


 struct nfs4_ff_layout_mirror* FUNC_0 (struct pnfs_layout_segment*,scalar_t__) ;
 scalar_t__ FUNC_1 (struct pnfs_layout_segment*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct nfs4_deviceid_node*) ;

__attribute__((used)) static bool FUNC_4(struct pnfs_layout_segment *VAR_0)
{
 struct nfs4_ff_layout_mirror *VAR_1;
 struct nfs4_deviceid_node *VAR_2;
 u32 VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_1(VAR_0); VAR_3++) {
  VAR_1 = FUNC_0(VAR_0, VAR_3);
  if (VAR_1) {
   if (!VAR_1->mirror_ds)
    return 1;
   if (FUNC_2(VAR_1->mirror_ds))
    continue;
   VAR_2 = &VAR_1->mirror_ds->id_node;
   if (!FUNC_3(VAR_2))
    return 1;
  }
 }

 return 0;
}
