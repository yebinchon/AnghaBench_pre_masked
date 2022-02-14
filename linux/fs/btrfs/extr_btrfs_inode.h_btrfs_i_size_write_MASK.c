
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct btrfs_inode {int disk_i_size; int vfs_inode; } ;


 int FUNC_0 (int *,int ) ;

__attribute__((used)) static inline void FUNC_1(struct btrfs_inode *VAR_0, u64 VAR_1)
{
 FUNC_0(&VAR_0->vfs_inode, VAR_1);
 VAR_0->disk_i_size = VAR_1;
}
