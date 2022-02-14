
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hpfs_sb_info {struct hpfs_sb_info* sb_bmp_dir; struct hpfs_sb_info* sb_cp_table; } ;


 int FUNC_0 (struct hpfs_sb_info*) ;

__attribute__((used)) static void FUNC_1(struct hpfs_sb_info *VAR_0)
{
 FUNC_0(VAR_0->sb_cp_table);
 FUNC_0(VAR_0->sb_bmp_dir);
 FUNC_0(VAR_0);
}
