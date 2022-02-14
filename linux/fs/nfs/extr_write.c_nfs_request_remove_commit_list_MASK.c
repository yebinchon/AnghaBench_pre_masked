
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfs_page {int wb_flags; } ;
struct nfs_commit_info {TYPE_1__* mds; } ;
struct TYPE_2__ {int ncommit; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct nfs_page*) ;
 int FUNC_2 (int ,int *) ;

void
FUNC_3(struct nfs_page *VAR_1,
          struct nfs_commit_info *VAR_2)
{
 if (!FUNC_2(VAR_0, &(VAR_1)->wb_flags))
  return;
 FUNC_1(VAR_1);
 FUNC_0(&VAR_2->mds->ncommit);
}
