
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct pnfs_layout_segment {int dummy; } ;
struct TYPE_8__ {int committed; } ;
struct pnfs_commit_bucket {int clseg; int wlseg; TYPE_2__ direct_verf; int committing; int written; } ;
struct nfs_commit_info {TYPE_5__* inode; TYPE_4__* ds; } ;
struct nfs4_filelayout_segment {scalar_t__ stripe_type; TYPE_1__* dsaddr; scalar_t__ commit_through_mds; } ;
typedef int gfp_t ;
struct TYPE_9__ {int committed; } ;
struct TYPE_12__ {int clseg; int wlseg; TYPE_3__ direct_verf; int committing; int written; } ;
struct TYPE_11__ {int i_lock; } ;
struct TYPE_10__ {int nbuckets; TYPE_6__* buckets; } ;
struct TYPE_7__ {int ds_num; int stripe_count; } ;


 int VAR_0 ;
 struct nfs4_filelayout_segment* FUNC_0 (struct pnfs_layout_segment*) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct pnfs_commit_bucket* FUNC_2 (int,int,int ) ;
 int FUNC_3 (struct pnfs_commit_bucket*) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_6__*,struct pnfs_commit_bucket*) ;

__attribute__((used)) static int
FUNC_8(struct pnfs_layout_segment *VAR_3,
        struct nfs_commit_info *VAR_4,
        gfp_t VAR_5)
{
 struct nfs4_filelayout_segment *VAR_6 = FUNC_0(VAR_3);
 struct pnfs_commit_bucket *VAR_7;
 int VAR_8, VAR_9;

 if (VAR_6->commit_through_mds)
  return 0;

 VAR_8 = (VAR_6->stripe_type == VAR_2) ?
  VAR_6->dsaddr->ds_num : VAR_6->dsaddr->stripe_count;

 if (VAR_4->ds->nbuckets >= VAR_8) {






  return 0;
 }

 VAR_7 = FUNC_2(VAR_8, sizeof(struct pnfs_commit_bucket),
     VAR_5);
 if (!VAR_7)
  return -VAR_0;
 for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++) {
  FUNC_1(&VAR_7[VAR_9].written);
  FUNC_1(&VAR_7[VAR_9].committing);

  VAR_7[VAR_9].direct_verf.committed = VAR_1;
 }

 FUNC_5(&VAR_4->inode->i_lock);
 if (VAR_4->ds->nbuckets >= VAR_8)
  goto out;
 for (VAR_9 = 0; VAR_9 < VAR_4->ds->nbuckets; VAR_9++) {
  FUNC_4(&VAR_4->ds->buckets[VAR_9].written,
       &VAR_7[VAR_9].written);
  FUNC_4(&VAR_4->ds->buckets[VAR_9].committing,
       &VAR_7[VAR_9].committing);
  VAR_7[VAR_9].direct_verf.committed =
   VAR_4->ds->buckets[VAR_9].direct_verf.committed;
  VAR_7[VAR_9].wlseg = VAR_4->ds->buckets[VAR_9].wlseg;
  VAR_7[VAR_9].clseg = VAR_4->ds->buckets[VAR_9].clseg;
 }
 FUNC_7(VAR_4->ds->buckets, VAR_7);
 VAR_4->ds->nbuckets = VAR_8;
out:
 FUNC_6(&VAR_4->inode->i_lock);
 FUNC_3(VAR_7);
 return 0;
}
