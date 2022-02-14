
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct nfs_pgio_mirror {int pg_bsize; } ;
struct nfs_pageio_descriptor {int pg_mirror_idx; scalar_t__ pg_error; scalar_t__ pg_maxretrans; int * pg_lseg; int pg_inode; struct nfs_pgio_mirror* pg_mirrors; } ;
struct nfs_page {int dummy; } ;
struct nfs4_pnfs_ds {int dummy; } ;
struct nfs4_ff_layout_mirror {TYPE_2__* mirror_ds; } ;
struct TYPE_8__ {int layout; } ;
struct TYPE_7__ {int flags; } ;
struct TYPE_6__ {TYPE_1__* ds_versions; } ;
struct TYPE_5__ {int rsize; } ;


 struct nfs4_ff_layout_mirror* FUNC_0 (int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__* FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_3__* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *) ;
 struct nfs4_pnfs_ds* FUNC_4 (int *,int ,int*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct nfs_pageio_descriptor*,struct nfs_page*,int) ;
 scalar_t__ VAR_4 ;
 int FUNC_7 (struct nfs_pageio_descriptor*) ;
 int FUNC_8 (struct nfs_pageio_descriptor*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int ,int ,int ,int ,int ,int *) ;

__attribute__((used)) static void
FUNC_12(struct nfs_pageio_descriptor *VAR_5,
   struct nfs_page *VAR_6)
{
 struct nfs_pgio_mirror *VAR_7;
 struct nfs4_ff_layout_mirror *VAR_8;
 struct nfs4_pnfs_ds *VAR_9;
 int VAR_10;

retry:
 FUNC_8(VAR_5);

 if (!VAR_5->pg_lseg) {
  FUNC_6(VAR_5, VAR_6, 0);
  if (!VAR_5->pg_lseg)
   goto out_nolseg;
 }
 if (FUNC_3(VAR_5->pg_lseg)) {
  FUNC_6(VAR_5, VAR_6, 1);
  if (!VAR_5->pg_lseg)
   goto out_nolseg;
 }

 VAR_9 = FUNC_4(VAR_5->pg_lseg, 0, &VAR_10);
 if (!VAR_9) {
  if (!FUNC_5(VAR_5->pg_lseg))
   goto out_mds;
  FUNC_9(VAR_5->pg_lseg);
  VAR_5->pg_lseg = ((void*)0);

  FUNC_10(1);
  goto retry;
 }

 VAR_8 = FUNC_0(VAR_5->pg_lseg, VAR_10);

 VAR_5->pg_mirror_idx = VAR_10;


 VAR_7 = &VAR_5->pg_mirrors[0];
 VAR_7->pg_bsize = VAR_8->mirror_ds->ds_versions[0].rsize;

 if (FUNC_2(VAR_5->pg_inode)->flags &
   (VAR_2|VAR_3))
  VAR_5->pg_maxretrans = VAR_4;
 return;
out_nolseg:
 if (VAR_5->pg_error < 0)
  return;
out_mds:
 FUNC_11(VAR_5->pg_inode,
   0, VAR_1, VAR_0,
   FUNC_1(VAR_5->pg_inode)->layout,
   VAR_5->pg_lseg);
 FUNC_9(VAR_5->pg_lseg);
 VAR_5->pg_lseg = ((void*)0);
 VAR_5->pg_maxretrans = 0;
 FUNC_7(VAR_5);
}
