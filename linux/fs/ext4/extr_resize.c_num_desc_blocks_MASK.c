
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
typedef int ext4_group_t ;


 int FUNC_0 (struct super_block*) ;

__attribute__((used)) static int FUNC_1(struct super_block *VAR_0, ext4_group_t VAR_1)
{
 return (VAR_1 + FUNC_0(VAR_0) - 1) / FUNC_0(VAR_0);
}
