
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pnfs_layout_segment {int dummy; } ;
struct TYPE_5__ {int committed; } ;
struct pnfs_commit_bucket {TYPE_2__ direct_verf; int committing; int written; } ;
struct nfs_commit_info {TYPE_3__* inode; TYPE_1__* ds; } ;
struct nfs4_ff_layout_segment {int dummy; } ;
typedef int gfp_t ;
struct TYPE_6__ {int i_lock; } ;
struct TYPE_4__ {int nbuckets; struct pnfs_commit_bucket* buckets; } ;


 int VAR_0 ;
 struct nfs4_ff_layout_segment* FUNC_0 (struct pnfs_layout_segment*) ;
 int FUNC_1 (struct pnfs_layout_segment*) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int FUNC_3 (struct nfs4_ff_layout_segment*) ;
 struct pnfs_commit_bucket* FUNC_4 (int,int,int ) ;
 int FUNC_5 (struct pnfs_commit_bucket*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int
FUNC_8(struct pnfs_layout_segment *VAR_2,
       struct nfs_commit_info *VAR_3,
       gfp_t VAR_4)
{
 struct nfs4_ff_layout_segment *VAR_5 = FUNC_0(VAR_2);
 struct pnfs_commit_bucket *VAR_6;
 int VAR_7;

 if (VAR_3->ds->nbuckets != 0) {





  return 0;
 }

 VAR_7 = FUNC_3(VAR_5) * FUNC_1(VAR_2);

 VAR_6 = FUNC_4(VAR_7, sizeof(struct pnfs_commit_bucket),
     VAR_4);
 if (!VAR_6)
  return -VAR_0;
 else {
  int VAR_8;

  FUNC_6(&VAR_3->inode->i_lock);
  if (VAR_3->ds->nbuckets != 0)
   FUNC_5(VAR_6);
  else {
   VAR_3->ds->buckets = VAR_6;
   VAR_3->ds->nbuckets = VAR_7;
   for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
    FUNC_2(&VAR_6[VAR_8].written);
    FUNC_2(&VAR_6[VAR_8].committing);

    VAR_6[VAR_8].direct_verf.committed =
     VAR_1;
   }
  }
  FUNC_7(&VAR_3->inode->i_lock);
  return 0;
 }
}
