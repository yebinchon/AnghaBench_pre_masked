
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct victim_sel_policy {scalar_t__ alloc_mode; size_t gc_mode; int ofs_unit; scalar_t__ offset; int max_search; int dirty_segmap; } ;
struct f2fs_sb_info {int segs_per_sec; scalar_t__ gc_mode; int max_victim_search; } ;
struct dirty_seglist_info {int * nr_dirty; int * dirty_segmap; } ;
struct TYPE_2__ {scalar_t__* last_victim; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 struct dirty_seglist_info* FUNC_0 (struct f2fs_sb_info*) ;
 int VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_5 ;
 TYPE_1__* FUNC_2 (struct f2fs_sb_info*) ;
 scalar_t__ VAR_6 ;
 size_t FUNC_3 (struct f2fs_sb_info*,int) ;
 scalar_t__ FUNC_4 (struct f2fs_sb_info*,int ) ;

__attribute__((used)) static void FUNC_5(struct f2fs_sb_info *VAR_7, int VAR_8,
   int VAR_9, struct victim_sel_policy *VAR_10)
{
 struct dirty_seglist_info *VAR_11 = FUNC_0(VAR_7);

 if (VAR_10->alloc_mode == VAR_6) {
  VAR_10->gc_mode = VAR_3;
  VAR_10->dirty_segmap = VAR_11->dirty_segmap[VAR_9];
  VAR_10->max_search = VAR_11->nr_dirty[VAR_9];
  VAR_10->ofs_unit = 1;
 } else {
  VAR_10->gc_mode = FUNC_3(VAR_7, VAR_8);
  VAR_10->dirty_segmap = VAR_11->dirty_segmap[VAR_1];
  VAR_10->max_search = VAR_11->nr_dirty[VAR_1];
  VAR_10->ofs_unit = VAR_7->segs_per_sec;
 }


 if (VAR_8 != VAR_2 &&
   (VAR_7->gc_mode != VAR_4) &&
   VAR_10->max_search > VAR_7->max_victim_search)
  VAR_10->max_search = VAR_7->max_victim_search;


 if (FUNC_4(VAR_7, VAR_5) &&
  (VAR_9 == VAR_0 || FUNC_1(VAR_9)))
  VAR_10->offset = 0;
 else
  VAR_10->offset = FUNC_2(VAR_7)->last_victim[VAR_10->gc_mode];
}
