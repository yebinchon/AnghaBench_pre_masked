
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct f2fs_sb_info {int dummy; } ;
struct f2fs_checkpoint {int sit_ver_bitmap_bytesize; int nat_ver_bitmap_bytesize; } ;


 struct f2fs_checkpoint* FUNC_0 (struct f2fs_sb_info*) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_1 (int ) ;

__attribute__((used)) static inline unsigned long FUNC_2(struct f2fs_sb_info *VAR_2, int VAR_3)
{
 struct f2fs_checkpoint *VAR_4 = FUNC_0(VAR_2);


 if (VAR_3 == VAR_0)
  return FUNC_1(VAR_4->nat_ver_bitmap_bytesize);
 else if (VAR_3 == VAR_1)
  return FUNC_1(VAR_4->sit_ver_bitmap_bytesize);

 return 0;
}
