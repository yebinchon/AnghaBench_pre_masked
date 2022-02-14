
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct ext4_super_block {int s_checksum; } ;
struct TYPE_2__ {struct ext4_super_block* s_es; } ;


 TYPE_1__* FUNC_0 (struct super_block*) ;
 int FUNC_1 (struct super_block*) ;
 int FUNC_2 (struct super_block*,struct ext4_super_block*) ;

void FUNC_3(struct super_block *VAR_0)
{
 struct ext4_super_block *VAR_1 = FUNC_0(VAR_0)->s_es;

 if (!FUNC_1(VAR_0))
  return;

 VAR_1->s_checksum = FUNC_2(VAR_0, VAR_1);
}
