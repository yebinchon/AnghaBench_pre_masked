
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct f2fs_sb_info {int dummy; } ;
struct dirty_seglist_info {int seglist_lock; scalar_t__* nr_dirty; int * dirty_segmap; } ;
typedef enum dirty_type { ____Placeholder_dirty_type } dirty_type ;


 struct dirty_seglist_info* FUNC_0 (struct f2fs_sb_info*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct f2fs_sb_info *VAR_0,
  enum dirty_type VAR_1)
{
 struct dirty_seglist_info *VAR_2 = FUNC_0(VAR_0);

 FUNC_2(&VAR_2->seglist_lock);
 FUNC_1(VAR_2->dirty_segmap[VAR_1]);
 VAR_2->nr_dirty[VAR_1] = 0;
 FUNC_3(&VAR_2->seglist_lock);
}
