
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_fattr {int dummy; } ;
struct inode {int i_lock; } ;


 int FUNC_0 (struct nfs_fattr*) ;
 int FUNC_1 (struct inode*,struct nfs_fattr*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct inode *VAR_0, struct nfs_fattr *VAR_1)
{
 int VAR_2;

 FUNC_2(&VAR_0->i_lock);
 FUNC_0(VAR_1);
 VAR_2 = FUNC_1(VAR_0, VAR_1);
 FUNC_3(&VAR_0->i_lock);
 return VAR_2;
}
