
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sit_info {scalar_t__ sit_base_addr; scalar_t__ sit_blocks; } ;
struct f2fs_sb_info {int dummy; } ;
typedef scalar_t__ pgoff_t ;


 struct sit_info* FUNC_0 (struct f2fs_sb_info*) ;

__attribute__((used)) static inline pgoff_t FUNC_1(struct f2fs_sb_info *VAR_0,
      pgoff_t VAR_1)
{
 struct sit_info *VAR_2 = FUNC_0(VAR_0);
 VAR_1 -= VAR_2->sit_base_addr;
 if (VAR_1 < VAR_2->sit_blocks)
  VAR_1 += VAR_2->sit_blocks;
 else
  VAR_1 -= VAR_2->sit_blocks;

 return VAR_1 + VAR_2->sit_base_addr;
}
