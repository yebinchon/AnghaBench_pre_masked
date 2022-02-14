
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfs_page {int wb_flags; } ;
struct nfs_commit_info {TYPE_1__* mds; } ;
struct list_head {int dummy; } ;
struct TYPE_2__ {int ncommit; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct nfs_page*,struct list_head*) ;
 int FUNC_2 (int ,int *) ;

void
FUNC_3(struct nfs_page *VAR_1, struct list_head *VAR_2,
       struct nfs_commit_info *VAR_3)
{
 FUNC_2(VAR_0, &VAR_1->wb_flags);
 FUNC_1(VAR_1, VAR_2);
 FUNC_0(&VAR_3->mds->ncommit);
}
