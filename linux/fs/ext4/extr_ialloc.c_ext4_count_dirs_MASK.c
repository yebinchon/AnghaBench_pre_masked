
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct ext4_group_desc {int dummy; } ;
typedef scalar_t__ ext4_group_t ;


 struct ext4_group_desc* FUNC_0 (struct super_block*,scalar_t__,int *) ;
 scalar_t__ FUNC_1 (struct super_block*) ;
 scalar_t__ FUNC_2 (struct super_block*,struct ext4_group_desc*) ;

unsigned long FUNC_3(struct super_block * VAR_0)
{
 unsigned long VAR_1 = 0;
 ext4_group_t VAR_2, VAR_3 = FUNC_1(VAR_0);

 for (VAR_2 = 0; VAR_2 < VAR_3; VAR_2++) {
  struct ext4_group_desc *VAR_4 = FUNC_0(VAR_0, VAR_2, ((void*)0));
  if (!VAR_4)
   continue;
  VAR_1 += FUNC_2(VAR_0, VAR_4);
 }
 return VAR_1;
}
