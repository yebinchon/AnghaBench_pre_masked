
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct btrfs_root {int ino_cache_lock; struct inode* ino_cache_inode; int fs_info; } ;
struct btrfs_path {int dummy; } ;


 scalar_t__ FUNC_0 (struct inode*) ;
 struct inode* FUNC_1 (struct btrfs_root*,struct btrfs_path*,int ) ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (struct inode*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

struct inode *FUNC_6(struct btrfs_root *VAR_0,
        struct btrfs_path *VAR_1)
{
 struct inode *VAR_2 = ((void*)0);

 FUNC_4(&VAR_0->ino_cache_lock);
 if (VAR_0->ino_cache_inode)
  VAR_2 = FUNC_3(VAR_0->ino_cache_inode);
 FUNC_5(&VAR_0->ino_cache_lock);
 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_1(VAR_0, VAR_1, 0);
 if (FUNC_0(VAR_2))
  return VAR_2;

 FUNC_4(&VAR_0->ino_cache_lock);
 if (!FUNC_2(VAR_0->fs_info))
  VAR_0->ino_cache_inode = FUNC_3(VAR_2);
 FUNC_5(&VAR_0->ino_cache_lock);

 return VAR_2;
}
