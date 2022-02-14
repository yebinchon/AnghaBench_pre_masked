
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pnfs_layout_segment {int dummy; } ;
struct pnfs_commit_bucket {struct pnfs_layout_segment* wlseg; int written; } ;
struct nfs_commit_info {TYPE_1__* ds; int inode; } ;
struct list_head {int dummy; } ;
struct TYPE_4__ {int commit_mutex; } ;
struct TYPE_3__ {int nbuckets; int nwritten; struct pnfs_commit_bucket* buckets; } ;


 TYPE_2__* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,struct list_head*,struct nfs_commit_info*,int ) ;
 int FUNC_4 (struct pnfs_layout_segment*) ;

void FUNC_5(struct list_head *VAR_0,
          struct nfs_commit_info *VAR_1)
{
 struct pnfs_commit_bucket *VAR_2;
 struct pnfs_layout_segment *VAR_3;
 int VAR_4;
 int VAR_5;

 FUNC_2(&FUNC_0(VAR_1->inode)->commit_mutex);
restart:
 for (VAR_5 = 0, VAR_2 = VAR_1->ds->buckets; VAR_5 < VAR_1->ds->nbuckets; VAR_5++, VAR_2++) {
  VAR_4 = FUNC_3(&VAR_2->written, VAR_0, VAR_1, 0);
  if (!VAR_4)
   continue;
  VAR_1->ds->nwritten -= VAR_4;
  if (FUNC_1(&VAR_2->written)) {
   VAR_3 = VAR_2->wlseg;
   VAR_2->wlseg = ((void*)0);
   FUNC_4(VAR_3);
   goto restart;
  }
 }
}
