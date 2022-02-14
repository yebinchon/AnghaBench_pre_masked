
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {int dummy; } ;
typedef int ext4_grpblk_t ;
typedef int ext4_group_t ;
struct TYPE_4__ {TYPE_1__* s_es; } ;
struct TYPE_3__ {int s_reserved_gdt_blocks; } ;


 TYPE_2__* FUNC_0 (struct super_block*) ;
 scalar_t__ FUNC_1 (struct super_block*,int ) ;
 int FUNC_2 (struct super_block*,int ) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static ext4_grpblk_t FUNC_4(struct super_block *VAR_0,
      ext4_group_t VAR_1) {
 ext4_grpblk_t VAR_2;
 VAR_2 = FUNC_2(VAR_0, VAR_1);
 if (FUNC_1(VAR_0, VAR_1))
  VAR_2 += 1 +
     FUNC_3(FUNC_0(VAR_0)->s_es->s_reserved_gdt_blocks);
 return VAR_2;
}
