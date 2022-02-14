
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct nfs_commit_info {int inode; TYPE_2__* mds; TYPE_3__* ds; } ;
struct list_head {int dummy; } ;
struct inode {int dummy; } ;
struct TYPE_10__ {int commit_mutex; } ;
struct TYPE_9__ {TYPE_1__* pnfs_curr_ld; } ;
struct TYPE_8__ {scalar_t__ nwritten; } ;
struct TYPE_7__ {int list; } ;
struct TYPE_6__ {int (* recover_commit_reqs ) (struct list_head*,struct nfs_commit_info*) ;} ;


 TYPE_5__* FUNC_0 (int ) ;
 TYPE_4__* FUNC_1 (struct inode*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,struct list_head*,struct nfs_commit_info*,int ) ;
 int FUNC_5 (struct list_head*,struct nfs_commit_info*) ;

__attribute__((used)) static void
FUNC_6(struct inode *VAR_0,
      struct list_head *VAR_1,
      struct nfs_commit_info *VAR_2)
{
 FUNC_2(&FUNC_0(VAR_2->inode)->commit_mutex);




 FUNC_4(&VAR_2->mds->list, VAR_1, VAR_2, 0);
 FUNC_3(&FUNC_0(VAR_2->inode)->commit_mutex);
}
