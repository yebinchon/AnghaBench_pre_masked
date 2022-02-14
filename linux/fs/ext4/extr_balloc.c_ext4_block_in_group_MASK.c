
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
typedef scalar_t__ ext4_group_t ;
typedef int ext4_fsblk_t ;


 scalar_t__ FUNC_0 (struct super_block*,int ) ;

__attribute__((used)) static inline int FUNC_1(struct super_block *VAR_0,
          ext4_fsblk_t VAR_1,
          ext4_group_t VAR_2)
{
 ext4_group_t VAR_3;

 VAR_3 = FUNC_0(VAR_0, VAR_1);
 return (VAR_3 == VAR_2) ? 1 : 0;
}
