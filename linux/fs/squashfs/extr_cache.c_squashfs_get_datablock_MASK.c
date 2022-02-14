
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct super_block {struct squashfs_sb_info* s_fs_info; } ;
struct squashfs_sb_info {int read_page; } ;
struct squashfs_cache_entry {int dummy; } ;


 struct squashfs_cache_entry* FUNC_0 (struct super_block*,int ,int ,int) ;

struct squashfs_cache_entry *FUNC_1(struct super_block *VAR_0,
    u64 VAR_1, int VAR_2)
{
 struct squashfs_sb_info *VAR_3 = VAR_0->s_fs_info;

 return FUNC_0(VAR_0, VAR_3->read_page, VAR_1, VAR_2);
}
