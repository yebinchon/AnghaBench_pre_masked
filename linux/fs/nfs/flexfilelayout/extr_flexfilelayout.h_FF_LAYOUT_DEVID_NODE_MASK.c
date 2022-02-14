
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pnfs_layout_segment {int dummy; } ;
struct nfs4_ff_layout_mirror {struct nfs4_ff_layout_ds* mirror_ds; } ;
struct nfs4_deviceid_node {int dummy; } ;
struct nfs4_ff_layout_ds {struct nfs4_deviceid_node id_node; } ;


 struct nfs4_ff_layout_mirror* FUNC_0 (struct pnfs_layout_segment*,int ) ;
 int FUNC_1 (struct nfs4_ff_layout_ds*) ;

__attribute__((used)) static inline struct nfs4_deviceid_node *
FUNC_2(struct pnfs_layout_segment *VAR_0, u32 VAR_1)
{
 struct nfs4_ff_layout_mirror *VAR_2 = FUNC_0(VAR_0, VAR_1);

 if (VAR_2 != ((void*)0)) {
  struct nfs4_ff_layout_ds *VAR_3 = VAR_2->mirror_ds;

  if (!FUNC_1(VAR_3))
   return &VAR_3->id_node;
 }
 return ((void*)0);
}
