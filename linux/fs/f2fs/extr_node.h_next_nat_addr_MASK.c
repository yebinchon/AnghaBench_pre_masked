
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct f2fs_sb_info {int log_blocks_per_seg; } ;
struct f2fs_nm_info {int nat_blkaddr; } ;
typedef int pgoff_t ;


 struct f2fs_nm_info* FUNC_0 (struct f2fs_sb_info*) ;

__attribute__((used)) static inline pgoff_t FUNC_1(struct f2fs_sb_info *VAR_0,
      pgoff_t VAR_1)
{
 struct f2fs_nm_info *VAR_2 = FUNC_0(VAR_0);

 VAR_1 -= VAR_2->nat_blkaddr;
 VAR_1 ^= 1 << VAR_0->log_blocks_per_seg;
 return VAR_1 + VAR_2->nat_blkaddr;
}
