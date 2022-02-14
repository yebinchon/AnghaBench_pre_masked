
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nfs_commit_info {int inode; TYPE_1__* mds; } ;
struct list_head {int dummy; } ;
struct inode {int dummy; } ;
struct TYPE_4__ {int commit_mutex; } ;
struct TYPE_3__ {int list; int ncommit; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,struct list_head*,struct nfs_commit_info*,int const) ;
 scalar_t__ FUNC_5 (struct inode*,struct nfs_commit_info*,int const) ;

int
FUNC_6(struct inode *VAR_1, struct list_head *VAR_2,
  struct nfs_commit_info *VAR_3)
{
 int VAR_4 = 0;

 if (!FUNC_1(&VAR_3->mds->ncommit))
  return 0;
 FUNC_2(&FUNC_0(VAR_3->inode)->commit_mutex);
 if (FUNC_1(&VAR_3->mds->ncommit) > 0) {
  const int VAR_5 = VAR_0;

  VAR_4 = FUNC_4(&VAR_3->mds->list, VAR_2,
        VAR_3, VAR_5);
  VAR_4 += FUNC_5(VAR_1, VAR_3, VAR_5 - VAR_4);
 }
 FUNC_3(&FUNC_0(VAR_3->inode)->commit_mutex);
 return VAR_4;
}
