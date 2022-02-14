
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int * s_fs_info; } ;
struct hfsplus_vh {int attributes; int modify_date; } ;
struct hfsplus_sb_info {int nls; int * s_backup_vhdr_buf; int * s_vhdr_buf; int hidden_dir; int alloc_file; int ext_tree; int cat_tree; int attr_tree; struct hfsplus_vh* s_vhdr; int sync_work; } ;


 struct hfsplus_sb_info* FUNC_0 (struct super_block*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 () ;
 int FUNC_6 (struct super_block*,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct super_block*) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static void FUNC_11(struct super_block *VAR_3)
{
 struct hfsplus_sb_info *VAR_4 = FUNC_0(VAR_3);

 FUNC_4(VAR_2, "hfsplus_put_super\n");

 FUNC_1(&VAR_4->sync_work);

 if (!FUNC_9(VAR_3) && VAR_4->s_vhdr) {
  struct hfsplus_vh *VAR_5 = VAR_4->s_vhdr;

  VAR_5->modify_date = FUNC_5();
  VAR_5->attributes |= FUNC_2(VAR_1);
  VAR_5->attributes &= FUNC_2(~VAR_0);

  FUNC_6(VAR_3, 1);
 }

 FUNC_3(VAR_4->attr_tree);
 FUNC_3(VAR_4->cat_tree);
 FUNC_3(VAR_4->ext_tree);
 FUNC_7(VAR_4->alloc_file);
 FUNC_7(VAR_4->hidden_dir);
 FUNC_8(VAR_4->s_vhdr_buf);
 FUNC_8(VAR_4->s_backup_vhdr_buf);
 FUNC_10(VAR_4->nls);
 FUNC_8(VAR_3->s_fs_info);
 VAR_3->s_fs_info = ((void*)0);
}
