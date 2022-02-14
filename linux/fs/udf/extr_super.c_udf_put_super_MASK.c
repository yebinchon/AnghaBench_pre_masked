
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udf_sb_info {int s_alloc_mutex; int s_lvid_bh; int s_nls_map; int s_vat_inode; } ;
struct super_block {int * s_fs_info; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct super_block*,int ) ;
 struct udf_sb_info* FUNC_1 (struct super_block*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct super_block*) ;
 int FUNC_7 (struct super_block*) ;
 int FUNC_8 (struct super_block*) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static void FUNC_10(struct super_block *VAR_1)
{
 struct udf_sb_info *VAR_2;

 VAR_2 = FUNC_1(VAR_1);

 FUNC_3(VAR_2->s_vat_inode);
 if (FUNC_0(VAR_1, VAR_0))
  FUNC_9(VAR_2->s_nls_map);
 if (!FUNC_6(VAR_1))
  FUNC_7(VAR_1);
 FUNC_2(VAR_2->s_lvid_bh);
 FUNC_8(VAR_1);
 FUNC_5(&VAR_2->s_alloc_mutex);
 FUNC_4(VAR_1->s_fs_info);
 VAR_1->s_fs_info = ((void*)0);
}
