
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct v9fs_inode {struct inode vfs_inode; int v_mutex; scalar_t__ cache_validity; int * writeback_fid; int fscache_lock; int * fscache; } ;
struct super_block {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;

struct inode *FUNC_2(struct super_block *VAR_2)
{
 struct v9fs_inode *VAR_3;
 VAR_3 = (struct v9fs_inode *)FUNC_0(VAR_1,
       VAR_0);
 if (!VAR_3)
  return ((void*)0);




 VAR_3->writeback_fid = ((void*)0);
 VAR_3->cache_validity = 0;
 FUNC_1(&VAR_3->v_mutex);
 return &VAR_3->vfs_inode;
}
