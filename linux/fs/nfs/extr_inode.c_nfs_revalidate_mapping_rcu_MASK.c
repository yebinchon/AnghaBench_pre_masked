
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_inode {unsigned long flags; int cache_validity; } ;
struct inode {int i_lock; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 struct nfs_inode* FUNC_1 (struct inode*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (struct inode*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ,unsigned long*) ;

int FUNC_6(struct inode *VAR_3)
{
 struct nfs_inode *VAR_4 = FUNC_1(VAR_3);
 unsigned long *VAR_5 = &VAR_4->flags;
 int VAR_6 = 0;

 if (FUNC_0(VAR_3))
  goto out;
 if (FUNC_2(VAR_3)) {
  VAR_6 = -VAR_0;
  goto out;
 }
 FUNC_3(&VAR_3->i_lock);
 if (FUNC_5(VAR_1, VAR_5) ||
     (VAR_4->cache_validity & VAR_2))
  VAR_6 = -VAR_0;
 FUNC_4(&VAR_3->i_lock);
out:
 return VAR_6;
}
