
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_open_context {int list; int dentry; } ;
struct nfs_inode {int cache_validity; int open_files; } ;
struct inode {int i_lock; } ;


 struct nfs_inode* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct inode* FUNC_1 (int ) ;
 int FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct nfs_open_context *VAR_3)
{
 struct inode *VAR_4 = FUNC_1(VAR_3->dentry);
 struct nfs_inode *VAR_5 = FUNC_0(VAR_4);

 FUNC_4(&VAR_4->i_lock);
 if (FUNC_3(&VAR_5->open_files) &&
     (VAR_5->cache_validity & VAR_0))
  VAR_5->cache_validity |= VAR_1 |
   VAR_2;
 FUNC_2(&VAR_3->list, &VAR_5->open_files);
 FUNC_5(&VAR_4->i_lock);
}
