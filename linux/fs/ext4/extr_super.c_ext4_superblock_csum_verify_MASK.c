
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct ext4_super_block {scalar_t__ s_checksum; } ;


 int FUNC_0 (struct super_block*) ;
 scalar_t__ FUNC_1 (struct super_block*,struct ext4_super_block*) ;

__attribute__((used)) static int FUNC_2(struct super_block *VAR_0,
           struct ext4_super_block *VAR_1)
{
 if (!FUNC_0(VAR_0))
  return 1;

 return VAR_1->s_checksum == FUNC_1(VAR_0, VAR_1);
}
