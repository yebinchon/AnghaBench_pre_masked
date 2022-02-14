
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct f2fs_sb_info {int discard_blks; } ;
typedef int block_t ;



__attribute__((used)) static inline block_t FUNC_0(struct f2fs_sb_info *VAR_0)
{
 return VAR_0->discard_blks;
}
