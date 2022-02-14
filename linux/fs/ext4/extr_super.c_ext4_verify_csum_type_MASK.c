
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct ext4_super_block {scalar_t__ s_checksum_type; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct super_block*) ;

__attribute__((used)) static int FUNC_1(struct super_block *VAR_1,
     struct ext4_super_block *VAR_2)
{
 if (!FUNC_0(VAR_1))
  return 1;

 return VAR_2->s_checksum_type == VAR_0;
}
