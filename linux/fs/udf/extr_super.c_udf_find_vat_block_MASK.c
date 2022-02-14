
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udf_sb_info {struct inode* s_vat_inode; struct udf_part_map* s_partmaps; } ;
struct udf_part_map {scalar_t__ s_partition_root; } ;
struct super_block {int dummy; } ;
struct kernel_lb_addr {int partitionReferenceNum; scalar_t__ logicalBlockNum; } ;
struct inode {int dummy; } ;
typedef scalar_t__ sector_t ;


 int FUNC_0 (struct inode*) ;
 struct udf_sb_info* FUNC_1 (struct super_block*) ;
 struct inode* FUNC_2 (struct super_block*,struct kernel_lb_addr*) ;

__attribute__((used)) static void FUNC_3(struct super_block *VAR_0, int VAR_1,
          int VAR_2, sector_t VAR_3)
{
 struct udf_sb_info *VAR_4 = FUNC_1(VAR_0);
 struct udf_part_map *VAR_5 = &VAR_4->s_partmaps[VAR_1];
 sector_t VAR_6;
 struct kernel_lb_addr VAR_7;
 struct inode *VAR_8;





 VAR_7.partitionReferenceNum = VAR_2;
 for (VAR_6 = VAR_3;
      VAR_6 >= VAR_5->s_partition_root &&
      VAR_6 >= VAR_3 - 3; VAR_6--) {
  VAR_7.logicalBlockNum = VAR_6 - VAR_5->s_partition_root;
  VAR_8 = FUNC_2(VAR_0, &VAR_7);
  if (!FUNC_0(VAR_8)) {
   VAR_4->s_vat_inode = VAR_8;
   break;
  }
 }
}
