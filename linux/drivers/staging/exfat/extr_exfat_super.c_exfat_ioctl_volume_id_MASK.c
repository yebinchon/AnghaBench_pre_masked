
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct inode {struct super_block* i_sb; } ;
struct fs_info_t {int vol_id; } ;
struct exfat_sb_info {struct fs_info_t fs_info; } ;


 struct exfat_sb_info* FUNC_0 (struct super_block*) ;

__attribute__((used)) static int FUNC_1(struct inode *VAR_0)
{
 struct super_block *VAR_1 = VAR_0->i_sb;
 struct exfat_sb_info *VAR_2 = FUNC_0(VAR_1);
 struct fs_info_t *VAR_3 = &(VAR_2->fs_info);

 return VAR_3->vol_id;
}
