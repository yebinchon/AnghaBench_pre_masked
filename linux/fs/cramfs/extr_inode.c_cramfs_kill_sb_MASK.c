
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {scalar_t__ s_bdev; scalar_t__ s_mtd; } ;
struct cramfs_sb_info {int mtd_point_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct cramfs_sb_info* FUNC_0 (struct super_block*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct cramfs_sb_info*) ;
 int FUNC_3 (struct super_block*) ;
 int FUNC_4 (struct super_block*) ;
 int FUNC_5 (scalar_t__,int ,int ) ;

__attribute__((used)) static void FUNC_6(struct super_block *VAR_2)
{
 struct cramfs_sb_info *VAR_3 = FUNC_0(VAR_2);

 if (FUNC_1(VAR_1) && VAR_2->s_mtd) {
  if (VAR_3 && VAR_3->mtd_point_size)
   FUNC_5(VAR_2->s_mtd, 0, VAR_3->mtd_point_size);
  FUNC_4(VAR_2);
 } else if (FUNC_1(VAR_0) && VAR_2->s_bdev) {
  FUNC_3(VAR_2);
 }
 FUNC_2(VAR_3);
}
