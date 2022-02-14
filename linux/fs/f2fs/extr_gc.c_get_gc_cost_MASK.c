
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct victim_sel_policy {scalar_t__ alloc_mode; scalar_t__ gc_mode; } ;
struct f2fs_sb_info {int dummy; } ;
struct TYPE_2__ {unsigned int ckpt_valid_blocks; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int FUNC_0 (struct f2fs_sb_info*,unsigned int) ;
 TYPE_1__* FUNC_1 (struct f2fs_sb_info*,unsigned int) ;
 unsigned int FUNC_2 (struct f2fs_sb_info*,unsigned int,int) ;

__attribute__((used)) static inline unsigned int FUNC_3(struct f2fs_sb_info *VAR_2,
   unsigned int VAR_3, struct victim_sel_policy *VAR_4)
{
 if (VAR_4->alloc_mode == VAR_1)
  return FUNC_1(VAR_2, VAR_3)->ckpt_valid_blocks;


 if (VAR_4->gc_mode == VAR_0)
  return FUNC_2(VAR_2, VAR_3, 1);
 else
  return FUNC_0(VAR_2, VAR_3);
}
