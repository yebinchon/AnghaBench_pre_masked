
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct inode {struct super_block* i_sb; } ;
struct fs_info_t {struct fs_func* fs_func; } ;
struct fs_func {scalar_t__ (* count_ext_entries ) (struct super_block*,struct chain_t*,scalar_t__,struct dentry_t*) ;int (* delete_dir_entry ) (struct super_block*,struct chain_t*,scalar_t__,int ,scalar_t__) ;} ;
struct dentry_t {int dummy; } ;
struct chain_t {int dummy; } ;
typedef int sector_t ;
typedef scalar_t__ s32 ;
struct TYPE_2__ {struct fs_info_t fs_info; } ;


 TYPE_1__* FUNC_0 (struct super_block*) ;
 int FUNC_1 (struct super_block*,int ) ;
 int FUNC_2 (struct super_block*,int ) ;
 struct dentry_t* FUNC_3 (struct super_block*,struct chain_t*,scalar_t__,int *) ;
 scalar_t__ FUNC_4 (struct super_block*,struct chain_t*,scalar_t__,struct dentry_t*) ;
 int FUNC_5 (struct super_block*,struct chain_t*,scalar_t__,int ,scalar_t__) ;

void FUNC_6(struct inode *VAR_0, struct chain_t *VAR_1, s32 VAR_2)
{
 s32 VAR_3;
 sector_t VAR_4;
 struct dentry_t *VAR_5;
 struct super_block *VAR_6 = VAR_0->i_sb;
 struct fs_info_t *VAR_7 = &(FUNC_0(VAR_6)->fs_info);
 struct fs_func *VAR_8 = VAR_7->fs_func;

 VAR_5 = FUNC_3(VAR_6, VAR_1, VAR_2, &VAR_4);
 if (!VAR_5)
  return;

 FUNC_1(VAR_6, VAR_4);


 VAR_3 = VAR_8->count_ext_entries(VAR_6, VAR_1, VAR_2, VAR_5);
 if (VAR_3 < 0) {
  FUNC_2(VAR_6, VAR_4);
  return;
 }
 VAR_3++;

 FUNC_2(VAR_6, VAR_4);


 VAR_8->delete_dir_entry(VAR_6, VAR_1, VAR_2, 0, VAR_3);
}
