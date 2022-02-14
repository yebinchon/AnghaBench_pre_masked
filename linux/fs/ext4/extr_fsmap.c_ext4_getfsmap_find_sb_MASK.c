
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct list_head {int dummy; } ;
struct ext4_sb_info {TYPE_1__* s_es; } ;
typedef unsigned long ext4_group_t ;
typedef int ext4_fsblk_t ;
struct TYPE_2__ {int s_reserved_gdt_blocks; int s_first_meta_bg; } ;


 unsigned long FUNC_0 (struct super_block*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ext4_sb_info* FUNC_1 (struct super_block*) ;
 scalar_t__ FUNC_2 (struct super_block*,unsigned long) ;
 int FUNC_3 (struct super_block*,unsigned long) ;
 int FUNC_4 (struct list_head*,int,int,int ) ;
 int FUNC_5 (struct super_block*,unsigned long) ;
 int FUNC_6 (struct super_block*) ;
 int FUNC_7 (int ) ;
 unsigned long FUNC_8 (int ) ;

__attribute__((used)) static unsigned int FUNC_9(struct super_block *VAR_3,
       ext4_group_t VAR_4,
       struct list_head *VAR_5)
{
 struct ext4_sb_info *VAR_6 = FUNC_1(VAR_3);
 ext4_fsblk_t VAR_7 = FUNC_5(VAR_3, VAR_4);
 ext4_fsblk_t VAR_8;
 unsigned long VAR_9 = FUNC_8(VAR_6->s_es->s_first_meta_bg);
 unsigned long VAR_10 = VAR_4 / FUNC_0(VAR_3);
 int VAR_11;


 if (FUNC_2(VAR_3, VAR_4)) {
  VAR_11 = FUNC_4(VAR_5, VAR_7, 1, VAR_0);
  if (VAR_11)
   return VAR_11;
  VAR_7++;
 }


 VAR_8 = FUNC_3(VAR_3, VAR_4);
 if (!VAR_8)
  return 0;
 VAR_11 = FUNC_4(VAR_5, VAR_7, VAR_8,
       VAR_1);
 if (VAR_11)
  return VAR_11;
 VAR_7 += VAR_8;


 if (!FUNC_6(VAR_3) || VAR_10 < VAR_9) {
  VAR_8 = FUNC_7(VAR_6->s_es->s_reserved_gdt_blocks);
  VAR_11 = FUNC_4(VAR_5, VAR_7, VAR_8,
        VAR_2);
  if (VAR_11)
   return VAR_11;
 }

 return 0;
}
