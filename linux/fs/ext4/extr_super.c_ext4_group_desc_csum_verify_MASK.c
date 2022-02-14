
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct ext4_group_desc {scalar_t__ bg_checksum; } ;
typedef int __u32 ;


 scalar_t__ FUNC_0 (struct super_block*,int ,struct ext4_group_desc*) ;
 scalar_t__ FUNC_1 (struct super_block*) ;

int FUNC_2(struct super_block *VAR_0, __u32 VAR_1,
    struct ext4_group_desc *VAR_2)
{
 if (FUNC_1(VAR_0) &&
     (VAR_2->bg_checksum != FUNC_0(VAR_0, VAR_1, VAR_2)))
  return 0;

 return 1;
}
