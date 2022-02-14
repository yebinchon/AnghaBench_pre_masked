
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct squashfs_sb_info {int meta_index_mutex; } ;
struct meta_index {scalar_t__ locked; } ;
struct inode {TYPE_1__* i_sb; } ;
struct TYPE_2__ {struct squashfs_sb_info* s_fs_info; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct inode *VAR_0, struct meta_index *VAR_1)
{
 struct squashfs_sb_info *VAR_2 = VAR_0->i_sb->s_fs_info;
 FUNC_0(&VAR_2->meta_index_mutex);
 VAR_1->locked = 0;
 FUNC_1(&VAR_2->meta_index_mutex);
}
