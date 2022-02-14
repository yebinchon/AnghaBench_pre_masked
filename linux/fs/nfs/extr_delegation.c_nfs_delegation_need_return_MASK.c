
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfs_delegation {int lock; struct inode* inode; int flags; } ;
struct inode {int dummy; } ;
struct TYPE_2__ {int open_files; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ,int *) ;
 scalar_t__ FUNC_5 (int ,int *) ;

__attribute__((used)) static bool FUNC_6(struct nfs_delegation *VAR_3)
{
 bool VAR_4 = 0;

 if (FUNC_5(VAR_1, &VAR_3->flags))
  goto out;
 if (FUNC_4(VAR_0, &VAR_3->flags))
  VAR_4 = 1;
 if (FUNC_4(VAR_2, &VAR_3->flags) && !VAR_4) {
  struct inode *VAR_5;

  FUNC_2(&VAR_3->lock);
  VAR_5 = VAR_3->inode;
  if (VAR_5 && FUNC_1(&FUNC_0(VAR_5)->open_files))
   VAR_4 = 1;
  FUNC_3(&VAR_3->lock);
 }
out:
 return VAR_4;
}
