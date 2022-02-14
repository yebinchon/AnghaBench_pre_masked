
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct f2fs_sb_info {int dummy; } ;
struct dirty_seglist_info {int * dirty_segmap; int seglist_lock; } ;
struct TYPE_2__ {struct dirty_seglist_info* dirty_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct f2fs_sb_info*) ;
 unsigned int VAR_2 ;
 TYPE_1__* FUNC_1 (struct f2fs_sb_info*) ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (struct f2fs_sb_info*,unsigned int,int ) ;
 struct dirty_seglist_info* FUNC_4 (struct f2fs_sb_info*,int,int ) ;
 int FUNC_5 (struct f2fs_sb_info*) ;
 int FUNC_6 (struct f2fs_sb_info*) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct f2fs_sb_info *VAR_3)
{
 struct dirty_seglist_info *VAR_4;
 unsigned int VAR_5, VAR_6;


 VAR_4 = FUNC_4(VAR_3, sizeof(struct dirty_seglist_info),
        VAR_1);
 if (!VAR_4)
  return -VAR_0;

 FUNC_1(VAR_3)->dirty_info = VAR_4;
 FUNC_7(&VAR_4->seglist_lock);

 VAR_5 = FUNC_2(FUNC_0(VAR_3));

 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  VAR_4->dirty_segmap[VAR_6] = FUNC_3(VAR_3, VAR_5,
        VAR_1);
  if (!VAR_4->dirty_segmap[VAR_6])
   return -VAR_0;
 }

 FUNC_5(VAR_3);
 return FUNC_6(VAR_3);
}
