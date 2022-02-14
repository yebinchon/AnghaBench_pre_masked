
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {struct squashfs_sb_info* s_fs_info; } ;
struct squashfs_sb_info {struct squashfs_sb_info* xattr_id_table; struct squashfs_sb_info* inode_lookup_table; struct squashfs_sb_info* meta_index; struct squashfs_sb_info* fragment_index; struct squashfs_sb_info* id_table; int read_page; int fragment_cache; int block_cache; } ;


 int FUNC_0 (struct squashfs_sb_info*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct squashfs_sb_info*) ;

__attribute__((used)) static void FUNC_3(struct super_block *VAR_0)
{
 if (VAR_0->s_fs_info) {
  struct squashfs_sb_info *VAR_1 = VAR_0->s_fs_info;
  FUNC_1(VAR_1->block_cache);
  FUNC_1(VAR_1->fragment_cache);
  FUNC_1(VAR_1->read_page);
  FUNC_2(VAR_1);
  FUNC_0(VAR_1->id_table);
  FUNC_0(VAR_1->fragment_index);
  FUNC_0(VAR_1->meta_index);
  FUNC_0(VAR_1->inode_lookup_table);
  FUNC_0(VAR_1->xattr_id_table);
  FUNC_0(VAR_0->s_fs_info);
  VAR_0->s_fs_info = ((void*)0);
 }
}
