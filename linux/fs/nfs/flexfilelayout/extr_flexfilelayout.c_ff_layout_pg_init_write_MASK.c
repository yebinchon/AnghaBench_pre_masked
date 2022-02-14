
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct nfs_pgio_mirror {int pg_bsize; } ;
struct nfs_pageio_descriptor {int pg_mirror_count; scalar_t__ pg_maxretrans; int * pg_lseg; int pg_inode; struct nfs_pgio_mirror* pg_mirrors; int pg_dreq; int pg_error; } ;
struct nfs_page {int dummy; } ;
struct nfs_commit_info {int dummy; } ;
struct nfs4_pnfs_ds {int dummy; } ;
struct nfs4_ff_layout_mirror {TYPE_2__* mirror_ds; } ;
struct TYPE_8__ {int layout; } ;
struct TYPE_7__ {int flags; } ;
struct TYPE_6__ {TYPE_1__* ds_versions; } ;
struct TYPE_5__ {int wsize; } ;


 struct nfs4_ff_layout_mirror* FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int *) ;
 int VAR_2 ;
 TYPE_4__* FUNC_3 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_3__* FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (int *,struct nfs_commit_info*,int ) ;
 int FUNC_8 (int *) ;
 scalar_t__ VAR_5 ;
 struct nfs4_pnfs_ds* FUNC_9 (int *,struct nfs4_ff_layout_mirror*,int) ;
 int FUNC_10 (struct nfs_commit_info*,int ,int ) ;
 int FUNC_11 (struct nfs_pageio_descriptor*) ;
 int FUNC_12 (struct nfs_page*) ;
 int FUNC_13 (struct nfs_pageio_descriptor*) ;
 int FUNC_14 (int *) ;
 int * FUNC_15 (int ,int ,int ,int ,int ,int,int ) ;
 int FUNC_16 (int) ;
 int FUNC_17 (int ,int ,int ,int ,int ,int *) ;

__attribute__((used)) static void
FUNC_18(struct nfs_pageio_descriptor *VAR_6,
   struct nfs_page *VAR_7)
{
 struct nfs4_ff_layout_mirror *VAR_8;
 struct nfs_pgio_mirror *VAR_9;
 struct nfs_commit_info VAR_10;
 struct nfs4_pnfs_ds *VAR_11;
 int VAR_12;
 int VAR_13;

retry:
 FUNC_13(VAR_6);
 if (!VAR_6->pg_lseg) {
  VAR_6->pg_lseg = FUNC_15(VAR_6->pg_inode,
         FUNC_12(VAR_7),
         0,
         VAR_2,
         VAR_1,
         0,
         VAR_0);
  if (FUNC_2(VAR_6->pg_lseg)) {
   VAR_6->pg_error = FUNC_5(VAR_6->pg_lseg);
   VAR_6->pg_lseg = ((void*)0);
   return;
  }
 }

 if (VAR_6->pg_lseg == ((void*)0))
  goto out_mds;

 FUNC_10(&VAR_10, VAR_6->pg_inode, VAR_6->pg_dreq);
 VAR_13 = FUNC_7(VAR_6->pg_lseg, &VAR_10, VAR_0);
 if (VAR_13 < 0)
  goto out_mds;


 if (FUNC_6(VAR_6->pg_mirror_count !=
     FUNC_1(VAR_6->pg_lseg)))
  goto out_mds;

 for (VAR_12 = 0; VAR_12 < VAR_6->pg_mirror_count; VAR_12++) {
  VAR_8 = FUNC_0(VAR_6->pg_lseg, VAR_12);
  VAR_11 = FUNC_9(VAR_6->pg_lseg, VAR_8, 1);
  if (!VAR_11) {
   if (!FUNC_8(VAR_6->pg_lseg))
    goto out_mds;
   FUNC_14(VAR_6->pg_lseg);
   VAR_6->pg_lseg = ((void*)0);

   FUNC_16(1);
   goto retry;
  }
  VAR_9 = &VAR_6->pg_mirrors[VAR_12];
  VAR_9->pg_bsize = VAR_8->mirror_ds->ds_versions[0].wsize;
 }

 if (FUNC_4(VAR_6->pg_inode)->flags &
   (VAR_3|VAR_4))
  VAR_6->pg_maxretrans = VAR_5;
 return;

out_mds:
 FUNC_17(VAR_6->pg_inode,
   0, VAR_2, VAR_1,
   FUNC_3(VAR_6->pg_inode)->layout,
   VAR_6->pg_lseg);
 FUNC_14(VAR_6->pg_lseg);
 VAR_6->pg_lseg = ((void*)0);
 VAR_6->pg_maxretrans = 0;
 FUNC_11(VAR_6);
}
