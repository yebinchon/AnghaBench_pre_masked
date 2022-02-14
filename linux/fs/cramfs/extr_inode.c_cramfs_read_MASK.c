
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct cramfs_sb_info {scalar_t__ linear_virt_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct cramfs_sb_info* FUNC_0 (struct super_block*) ;
 scalar_t__ FUNC_1 (int ) ;
 void* FUNC_2 (struct super_block*,unsigned int,unsigned int) ;
 void* FUNC_3 (struct super_block*,unsigned int,unsigned int) ;

__attribute__((used)) static void *FUNC_4(struct super_block *VAR_2, unsigned int VAR_3,
    unsigned int VAR_4)
{
 struct cramfs_sb_info *VAR_5 = FUNC_0(VAR_2);

 if (FUNC_1(VAR_1) && VAR_5->linear_virt_addr)
  return FUNC_3(VAR_2, VAR_3, VAR_4);
 else if (FUNC_1(VAR_0))
  return FUNC_2(VAR_2, VAR_3, VAR_4);
 else
  return ((void*)0);
}
