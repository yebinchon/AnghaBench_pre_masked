
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_inode {int delegation; } ;
struct nfs_delegation {int lock; int * inode; int super_list; int flags; } ;
struct nfs_client {int cl_lock; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;
 struct nfs_delegation* FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static struct nfs_delegation *
FUNC_7(struct nfs_inode *VAR_1,
  struct nfs_delegation *VAR_2,
  struct nfs_client *VAR_3)
{
 struct nfs_delegation *VAR_4 =
  FUNC_3(VAR_1->delegation,
    FUNC_1(&VAR_3->cl_lock));

 if (VAR_4 == ((void*)0) || VAR_2 != VAR_4)
  return ((void*)0);

 FUNC_5(&VAR_2->lock);
 FUNC_4(VAR_0, &VAR_2->flags);
 FUNC_0(&VAR_2->super_list);
 VAR_2->inode = ((void*)0);
 FUNC_2(VAR_1->delegation, ((void*)0));
 FUNC_6(&VAR_2->lock);
 return VAR_2;
}
