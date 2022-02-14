
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u32 ;
struct pnfs_layout_segment {int dummy; } ;
struct list_head {int dummy; } ;
struct pnfs_commit_bucket {int * wlseg; struct list_head written; } ;
struct nfs_page {int wb_page; int wb_flags; } ;
struct nfs_commit_info {int inode; TYPE_2__* ds; TYPE_1__* completion_ops; } ;
struct TYPE_6__ {int commit_mutex; } ;
struct TYPE_5__ {int nwritten; struct pnfs_commit_bucket* buckets; } ;
struct TYPE_4__ {int (* resched_write ) (struct nfs_commit_info*,struct nfs_page*) ;} ;


 TYPE_3__* FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct list_head*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,struct nfs_commit_info*) ;
 int FUNC_6 (struct nfs_page*,struct list_head*,struct nfs_commit_info*) ;
 int * FUNC_7 (struct pnfs_layout_segment*) ;
 int FUNC_8 (struct pnfs_layout_segment*) ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 (struct nfs_commit_info*,struct nfs_page*) ;

void
FUNC_11(struct nfs_page *VAR_1,
    struct pnfs_layout_segment *VAR_2,
    struct nfs_commit_info *VAR_3,
    u32 VAR_4)
{
 struct list_head *VAR_5;
 struct pnfs_commit_bucket *VAR_6;

 FUNC_3(&FUNC_0(VAR_3->inode)->commit_mutex);
 VAR_6 = VAR_3->ds->buckets;
 VAR_5 = &VAR_6[VAR_4].written;
 if (FUNC_2(VAR_5)) {
  if (!FUNC_8(VAR_2)) {
   FUNC_4(&FUNC_0(VAR_3->inode)->commit_mutex);
   VAR_3->completion_ops->resched_write(VAR_3, VAR_1);
   return;
  }






  FUNC_1(VAR_6[VAR_4].wlseg != ((void*)0));
  VAR_6[VAR_4].wlseg = FUNC_7(VAR_2);
 }
 FUNC_9(VAR_0, &VAR_1->wb_flags);
 VAR_3->ds->nwritten++;

 FUNC_6(VAR_1, VAR_5, VAR_3);
 FUNC_4(&FUNC_0(VAR_3->inode)->commit_mutex);
 FUNC_5(VAR_1->wb_page, VAR_3);
}
