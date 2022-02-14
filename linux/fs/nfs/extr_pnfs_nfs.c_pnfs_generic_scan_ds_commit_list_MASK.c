
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct list_head {int dummy; } ;
struct pnfs_commit_bucket {int * wlseg; int * clseg; struct list_head committing; struct list_head written; } ;
struct nfs_commit_info {TYPE_1__* ds; int inode; } ;
struct TYPE_4__ {int commit_mutex; } ;
struct TYPE_3__ {int nwritten; int ncommitting; } ;


 TYPE_2__* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct list_head*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct list_head*,struct list_head*,struct nfs_commit_info*,int) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int
FUNC_6(struct pnfs_commit_bucket *VAR_0,
     struct nfs_commit_info *VAR_1,
     int VAR_2)
{
 struct list_head *VAR_3 = &VAR_0->written;
 struct list_head *VAR_4 = &VAR_0->committing;
 int VAR_5;

 FUNC_2(&FUNC_0(VAR_1->inode)->commit_mutex);
 VAR_5 = FUNC_3(VAR_3, VAR_4, VAR_1, VAR_2);
 if (VAR_5) {
  VAR_1->ds->nwritten -= VAR_5;
  VAR_1->ds->ncommitting += VAR_5;
  if (VAR_0->clseg == ((void*)0))
   VAR_0->clseg = FUNC_4(VAR_0->wlseg);
  if (FUNC_1(VAR_3)) {
   FUNC_5(VAR_0->wlseg);
   VAR_0->wlseg = ((void*)0);
  }
 }
 return VAR_5;
}
