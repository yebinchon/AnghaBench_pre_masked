
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct f2fs_super_block {int block_count; void* segment_count_main; void* segment_count; void* section_count; } ;
struct f2fs_sb_info {int segs_per_sec; long long blocks_per_seg; } ;


 struct f2fs_super_block* FUNC_0 (struct f2fs_sb_info*) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (long long) ;
 int FUNC_3 (void*) ;
 long long FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct f2fs_sb_info *VAR_0, int VAR_1)
{
 struct f2fs_super_block *VAR_2 = FUNC_0(VAR_0);
 int VAR_3 = FUNC_3(VAR_2->section_count);
 int VAR_4 = FUNC_3(VAR_2->segment_count);
 int VAR_5 = FUNC_3(VAR_2->segment_count_main);
 long long VAR_6 = FUNC_4(VAR_2->block_count);
 int VAR_7 = VAR_1 * VAR_0->segs_per_sec;

 VAR_2->section_count = FUNC_1(VAR_3 + VAR_1);
 VAR_2->segment_count = FUNC_1(VAR_4 + VAR_7);
 VAR_2->segment_count_main = FUNC_1(VAR_5 + VAR_7);
 VAR_2->block_count = FUNC_2(VAR_6 +
     (long long)VAR_7 * VAR_0->blocks_per_seg);
}
