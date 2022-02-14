
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sit_info {int dirty_sentries; int dirty_sentries_bitmap; } ;
struct f2fs_sb_info {int dummy; } ;


 struct sit_info* FUNC_0 (struct f2fs_sb_info*) ;
 int FUNC_1 (unsigned int,int ) ;

__attribute__((used)) static bool FUNC_2(struct f2fs_sb_info *VAR_0, unsigned int VAR_1)
{
 struct sit_info *VAR_2 = FUNC_0(VAR_0);

 if (!FUNC_1(VAR_1, VAR_2->dirty_sentries_bitmap)) {
  VAR_2->dirty_sentries++;
  return 0;
 }

 return 1;
}
