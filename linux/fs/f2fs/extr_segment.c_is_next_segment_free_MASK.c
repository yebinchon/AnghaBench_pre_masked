
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct free_segmap_info {int free_segmap; } ;
struct f2fs_sb_info {unsigned int segs_per_sec; } ;
struct curseg_info {int segno; } ;


 struct curseg_info* FUNC_0 (struct f2fs_sb_info*,int) ;
 struct free_segmap_info* FUNC_1 (struct f2fs_sb_info*) ;
 unsigned int FUNC_2 (struct f2fs_sb_info*) ;
 int FUNC_3 (unsigned int,int ) ;

__attribute__((used)) static int FUNC_4(struct f2fs_sb_info *VAR_0, int VAR_1)
{
 struct curseg_info *VAR_2 = FUNC_0(VAR_0, VAR_1);
 unsigned int VAR_3 = VAR_2->segno + 1;
 struct free_segmap_info *VAR_4 = FUNC_1(VAR_0);

 if (VAR_3 < FUNC_2(VAR_0) && VAR_3 % VAR_0->segs_per_sec)
  return !FUNC_3(VAR_3, VAR_4->free_segmap);
 return 0;
}
