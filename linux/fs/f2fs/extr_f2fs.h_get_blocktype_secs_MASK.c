
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct f2fs_sb_info {unsigned int segs_per_sec; unsigned int blocks_per_seg; unsigned int log_blocks_per_seg; } ;


 unsigned int FUNC_0 (struct f2fs_sb_info*,int) ;

__attribute__((used)) static inline int FUNC_1(struct f2fs_sb_info *VAR_0, int VAR_1)
{
 unsigned int VAR_2 = VAR_0->segs_per_sec * VAR_0->blocks_per_seg;
 unsigned int VAR_3 = (FUNC_0(VAR_0, VAR_1) + VAR_2 - 1) >>
      VAR_0->log_blocks_per_seg;

 return VAR_3 / VAR_0->segs_per_sec;
}
