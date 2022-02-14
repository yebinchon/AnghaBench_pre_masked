
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct f2fs_sb_info {int dummy; } ;
struct f2fs_nm_info {int next_scan_nid; } ;
struct f2fs_checkpoint {void* next_free_nid; void* valid_inode_count; void* valid_node_count; int valid_block_count; } ;
typedef int nid_t ;


 struct f2fs_checkpoint* FUNC_0 (struct f2fs_sb_info*) ;
 struct f2fs_nm_info* FUNC_1 (struct f2fs_sb_info*) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct f2fs_sb_info*,int *) ;
 int FUNC_5 (struct f2fs_sb_info*) ;
 int FUNC_6 (struct f2fs_sb_info*) ;
 int FUNC_7 (struct f2fs_sb_info*) ;

__attribute__((used)) static void FUNC_8(struct f2fs_sb_info *VAR_0)
{
 struct f2fs_checkpoint *VAR_1 = FUNC_0(VAR_0);
 struct f2fs_nm_info *VAR_2 = FUNC_1(VAR_0);
 nid_t VAR_3 = VAR_2->next_scan_nid;

 FUNC_4(VAR_0, &VAR_3);
 VAR_1->valid_block_count = FUNC_3(FUNC_7(VAR_0));
 VAR_1->valid_node_count = FUNC_2(FUNC_6(VAR_0));
 VAR_1->valid_inode_count = FUNC_2(FUNC_5(VAR_0));
 VAR_1->next_free_nid = FUNC_2(VAR_3);
}
