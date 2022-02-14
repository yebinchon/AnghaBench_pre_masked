
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct ext4_sb_info {int s_desc_per_block; TYPE_1__* s_es; } ;
typedef int ext4_group_t ;
struct TYPE_2__ {int s_reserved_gdt_blocks; int s_first_meta_bg; } ;


 int FUNC_0 (struct ext4_sb_info*,unsigned int) ;
 struct ext4_sb_info* FUNC_1 (struct super_block*) ;
 unsigned int FUNC_2 (struct super_block*,int) ;
 scalar_t__ FUNC_3 (struct super_block*,int) ;
 int FUNC_4 (struct super_block*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static unsigned FUNC_7(struct super_block *VAR_0,
         ext4_group_t VAR_1)
{
 struct ext4_sb_info *VAR_2 = FUNC_1(VAR_0);
 unsigned VAR_3;


 VAR_3 = FUNC_2(VAR_0, VAR_1);

 if (!FUNC_4(VAR_0) ||
     VAR_1 < FUNC_6(VAR_2->s_es->s_first_meta_bg) *
     VAR_2->s_desc_per_block) {
  if (VAR_3) {
   VAR_3 += FUNC_3(VAR_0, VAR_1);
   VAR_3 += FUNC_5(VAR_2->s_es->s_reserved_gdt_blocks);
  }
 } else {
  VAR_3 += FUNC_3(VAR_0, VAR_1);
 }
 return FUNC_0(VAR_2, VAR_3);
}
