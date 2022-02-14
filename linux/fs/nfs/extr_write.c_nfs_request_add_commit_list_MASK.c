
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nfs_page {scalar_t__ wb_page; } ;
struct nfs_commit_info {int inode; TYPE_1__* mds; } ;
struct TYPE_4__ {int commit_mutex; } ;
struct TYPE_3__ {int list; } ;


 TYPE_2__* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__,struct nfs_commit_info*) ;
 int FUNC_4 (struct nfs_page*,int *,struct nfs_commit_info*) ;

void
FUNC_5(struct nfs_page *VAR_0, struct nfs_commit_info *VAR_1)
{
 FUNC_1(&FUNC_0(VAR_1->inode)->commit_mutex);
 FUNC_4(VAR_0, &VAR_1->mds->list, VAR_1);
 FUNC_2(&FUNC_0(VAR_1->inode)->commit_mutex);
 if (VAR_0->wb_page)
  FUNC_3(VAR_0->wb_page, VAR_1);
}
