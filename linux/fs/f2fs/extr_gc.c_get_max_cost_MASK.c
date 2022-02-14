
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct victim_sel_policy {scalar_t__ alloc_mode; scalar_t__ gc_mode; int ofs_unit; } ;
struct f2fs_sb_info {unsigned int blocks_per_seg; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;

__attribute__((used)) static unsigned int FUNC_0(struct f2fs_sb_info *VAR_4,
    struct victim_sel_policy *VAR_5)
{

 if (VAR_5->alloc_mode == VAR_2)
  return VAR_4->blocks_per_seg;
 if (VAR_5->gc_mode == VAR_1)
  return 2 * VAR_4->blocks_per_seg * VAR_5->ofs_unit;
 else if (VAR_5->gc_mode == VAR_0)
  return VAR_3;
 else
  return 0;
}
