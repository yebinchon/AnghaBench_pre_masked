
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct cramfs_sb_info {unsigned int size; void* linear_virt_addr; } ;


 struct cramfs_sb_info* FUNC_0 (struct super_block*) ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;

__attribute__((used)) static void *FUNC_3(struct super_block *VAR_0, unsigned int VAR_1,
    unsigned int VAR_2)
{
 struct cramfs_sb_info *VAR_3 = FUNC_0(VAR_0);

 if (!VAR_2)
  return ((void*)0);
 if (VAR_2 > VAR_3->size || VAR_1 > VAR_3->size - VAR_2)
  return FUNC_2(FUNC_1(0));
 return VAR_3->linear_virt_addr + VAR_1;
}
