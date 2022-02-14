
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sit_info {scalar_t__ sit_blocks; int sit_bitmap; int sit_bitmap_mir; scalar_t__ sit_base_addr; } ;
struct f2fs_sb_info {int dummy; } ;
typedef scalar_t__ pgoff_t ;
typedef scalar_t__ block_t ;


 unsigned int FUNC_0 (unsigned int) ;
 struct sit_info* FUNC_1 (struct f2fs_sb_info*) ;
 int FUNC_2 (struct f2fs_sb_info*,unsigned int) ;
 int FUNC_3 (struct f2fs_sb_info*,int) ;
 scalar_t__ FUNC_4 (unsigned int,int ) ;

__attribute__((used)) static inline pgoff_t FUNC_5(struct f2fs_sb_info *VAR_0,
      unsigned int VAR_1)
{
 struct sit_info *VAR_2 = FUNC_1(VAR_0);
 unsigned int VAR_3 = FUNC_0(VAR_1);
 block_t VAR_4 = VAR_2->sit_base_addr + VAR_3;

 FUNC_2(VAR_0, VAR_1);
 if (FUNC_4(VAR_3, VAR_2->sit_bitmap))
  VAR_4 += VAR_2->sit_blocks;

 return VAR_4;
}
