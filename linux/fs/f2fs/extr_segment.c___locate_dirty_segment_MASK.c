
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seg_entry {int type; } ;
struct f2fs_sb_info {int dummy; } ;
struct dirty_seglist_info {int * nr_dirty; int * dirty_segmap; } ;
typedef enum dirty_type { ____Placeholder_dirty_type } dirty_type ;


 int VAR_0 ;
 struct dirty_seglist_info* FUNC_0 (struct f2fs_sb_info*) ;
 scalar_t__ FUNC_1 (struct f2fs_sb_info*,unsigned int) ;
 int FUNC_2 (struct f2fs_sb_info*,int) ;
 struct seg_entry* FUNC_3 (struct f2fs_sb_info*,unsigned int) ;
 int FUNC_4 (unsigned int,int ) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct f2fs_sb_info *VAR_1, unsigned int VAR_2,
  enum dirty_type VAR_3)
{
 struct dirty_seglist_info *VAR_4 = FUNC_0(VAR_1);


 if (FUNC_1(VAR_1, VAR_2))
  return;

 if (!FUNC_4(VAR_2, VAR_4->dirty_segmap[VAR_3]))
  VAR_4->nr_dirty[VAR_3]++;

 if (VAR_3 == VAR_0) {
  struct seg_entry *VAR_5 = FUNC_3(VAR_1, VAR_2);
  enum dirty_type VAR_6 = VAR_5->type;

  if (FUNC_5(VAR_6 >= VAR_0)) {
   FUNC_2(VAR_1, 1);
   return;
  }
  if (!FUNC_4(VAR_2, VAR_4->dirty_segmap[VAR_6]))
   VAR_4->nr_dirty[VAR_6]++;
 }
}
