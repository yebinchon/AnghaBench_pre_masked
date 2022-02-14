
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int length; int offset; } ;
struct pnfs_layout_segment {TYPE_4__ pls_range; TYPE_5__* pls_layout; } ;
struct nfs_server {int dummy; } ;
struct nfs4_pnfs_ds {TYPE_1__* ds_clp; } ;
struct nfs4_ff_layout_mirror {TYPE_3__* mirror_ds; } ;
struct inode {int dummy; } ;
struct TYPE_11__ {struct inode* plh_inode; } ;
struct TYPE_9__ {TYPE_2__* ds_versions; int id_node; struct nfs4_pnfs_ds* ds; } ;
struct TYPE_8__ {unsigned int rsize; unsigned int wsize; int minor_version; int version; } ;
struct TYPE_7__ {int cl_rpcclient; } ;


 int FUNC_0 (TYPE_5__*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct nfs_server* FUNC_1 (struct inode*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct pnfs_layout_segment*) ;
 int FUNC_3 (TYPE_5__*,struct nfs4_ff_layout_mirror*) ;
 int FUNC_4 (struct pnfs_layout_segment*) ;
 int FUNC_5 (int ,struct nfs4_ff_layout_mirror*,int ,int ,int ,int ,int ) ;
 int FUNC_6 (struct nfs_server*,struct nfs4_pnfs_ds*,int *,int ,int ,int ,int ) ;
 unsigned int FUNC_7 (int ,int *) ;
 int FUNC_8 (struct inode*,struct pnfs_layout_segment*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 () ;

struct nfs4_pnfs_ds *
FUNC_11(struct pnfs_layout_segment *VAR_5,
     struct nfs4_ff_layout_mirror *VAR_6,
     bool VAR_7)
{
 struct nfs4_pnfs_ds *VAR_8 = ((void*)0);
 struct inode *VAR_9 = VAR_5->pls_layout->plh_inode;
 struct nfs_server *VAR_10 = FUNC_1(VAR_9);
 unsigned int VAR_11;
 int VAR_12;

 if (!FUNC_3(VAR_5->pls_layout, VAR_6))
  goto noconnect;

 VAR_8 = VAR_6->mirror_ds->ds;

 FUNC_10();
 if (VAR_8->ds_clp)
  goto out;




 VAR_12 = FUNC_6(VAR_10, VAR_8, &VAR_6->mirror_ds->id_node,
        VAR_4, VAR_3,
        VAR_6->mirror_ds->ds_versions[0].version,
        VAR_6->mirror_ds->ds_versions[0].minor_version);


 if (!VAR_12) {
  VAR_11 =
   FUNC_7(FUNC_9(VAR_8->ds_clp->cl_rpcclient),
           ((void*)0));
  if (VAR_6->mirror_ds->ds_versions[0].rsize > VAR_11)
   VAR_6->mirror_ds->ds_versions[0].rsize = VAR_11;
  if (VAR_6->mirror_ds->ds_versions[0].wsize > VAR_11)
   VAR_6->mirror_ds->ds_versions[0].wsize = VAR_11;
  goto out;
 }
noconnect:
 FUNC_5(FUNC_0(VAR_5->pls_layout),
     VAR_6, VAR_5->pls_range.offset,
     VAR_5->pls_range.length, VAR_1,
     VAR_2, VAR_0);
 FUNC_4(VAR_5);
 if (VAR_7 || !FUNC_2(VAR_5))
  FUNC_8(VAR_9, VAR_5);
 VAR_8 = ((void*)0);
out:
 return VAR_8;
}
