
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct victim_sel_policy {char alloc_mode; unsigned int min_segno; unsigned long min_cost; unsigned int max_search; size_t gc_mode; unsigned int offset; unsigned int ofs_unit; int dirty_segmap; } ;
struct sit_info {unsigned int* last_victim; int invalid_segmap; } ;
struct f2fs_sb_info {unsigned int segs_per_sec; unsigned int* next_victim_seg; unsigned int cur_victim_sec; int sb; } ;
struct dirty_seglist_info {int seglist_lock; int victim_secmap; } ;


 size_t VAR_0 ;
 struct dirty_seglist_info* FUNC_0 (struct f2fs_sb_info*) ;
 int VAR_1 ;
 unsigned int FUNC_1 (struct f2fs_sb_info*,unsigned int) ;
 char VAR_2 ;
 unsigned int FUNC_2 (struct f2fs_sb_info*) ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 struct sit_info* FUNC_3 (struct f2fs_sb_info*) ;
 char VAR_5 ;
 scalar_t__ FUNC_4 (struct f2fs_sb_info*) ;
 unsigned int FUNC_5 (struct f2fs_sb_info*) ;
 scalar_t__ FUNC_6 (int ,unsigned int,unsigned int) ;
 unsigned int FUNC_7 (int ,unsigned int,unsigned int) ;
 int FUNC_8 (struct f2fs_sb_info*) ;
 scalar_t__ FUNC_9 (struct f2fs_sb_info*,unsigned int) ;
 unsigned long FUNC_10 (struct f2fs_sb_info*,unsigned int,struct victim_sel_policy*) ;
 unsigned long FUNC_11 (struct f2fs_sb_info*,struct victim_sel_policy*) ;
 scalar_t__ FUNC_12 (struct f2fs_sb_info*,unsigned int,int) ;
 scalar_t__ FUNC_13 (struct f2fs_sb_info*,int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (struct f2fs_sb_info*) ;
 scalar_t__ FUNC_17 (struct f2fs_sb_info*,unsigned int) ;
 int FUNC_18 (struct f2fs_sb_info*,int,int,struct victim_sel_policy*) ;
 int FUNC_19 (unsigned int,int ) ;
 scalar_t__ FUNC_20 (unsigned int,int ) ;
 int FUNC_21 (int ,int,int,struct victim_sel_policy*,unsigned int,int ,int ) ;
 scalar_t__ FUNC_22 (int) ;

__attribute__((used)) static int FUNC_23(struct f2fs_sb_info *VAR_6,
  unsigned int *VAR_7, int VAR_8, int VAR_9, char VAR_10)
{
 struct dirty_seglist_info *VAR_11 = FUNC_0(VAR_6);
 struct sit_info *VAR_12 = FUNC_3(VAR_6);
 struct victim_sel_policy VAR_13;
 unsigned int VAR_14, VAR_15;
 unsigned int VAR_16;
 unsigned int VAR_17 = 0;

 FUNC_14(&VAR_11->seglist_lock);
 VAR_16 = FUNC_2(VAR_6) * VAR_6->segs_per_sec;

 VAR_13.alloc_mode = VAR_10;
 FUNC_18(VAR_6, VAR_8, VAR_9, &VAR_13);

 VAR_13.min_segno = VAR_3;
 VAR_13.min_cost = FUNC_11(VAR_6, &VAR_13);

 if (*VAR_7 != VAR_3) {
  if (FUNC_12(VAR_6, *VAR_7, 0) &&
   !FUNC_17(VAR_6, FUNC_1(VAR_6, *VAR_7)))
   VAR_13.min_segno = *VAR_7;
  goto out;
 }

 if (VAR_13.max_search == 0)
  goto out;

 if (FUNC_4(VAR_6) && VAR_13.alloc_mode == VAR_2) {
  if (VAR_6->next_victim_seg[VAR_0] != VAR_3) {
   VAR_13.min_segno = VAR_6->next_victim_seg[VAR_0];
   *VAR_7 = VAR_13.min_segno;
   VAR_6->next_victim_seg[VAR_0] = VAR_3;
   goto got_result;
  }
  if (VAR_8 == VAR_1 &&
    VAR_6->next_victim_seg[VAR_1] != VAR_3) {
   VAR_13.min_segno = VAR_6->next_victim_seg[VAR_1];
   *VAR_7 = VAR_13.min_segno;
   VAR_6->next_victim_seg[VAR_1] = VAR_3;
   goto got_result;
  }
 }

 VAR_15 = VAR_12->last_victim[VAR_13.gc_mode];
 if (VAR_13.alloc_mode == VAR_2 && VAR_8 == VAR_1) {
  VAR_13.min_segno = FUNC_5(VAR_6);
  if (VAR_13.min_segno != VAR_3)
   goto got_it;
 }

 while (1) {
  unsigned long VAR_18;
  unsigned int VAR_19;

  VAR_19 = FUNC_7(VAR_13.dirty_segmap, VAR_16, VAR_13.offset);
  if (VAR_19 >= VAR_16) {
   if (VAR_12->last_victim[VAR_13.gc_mode]) {
    VAR_16 =
     VAR_12->last_victim[VAR_13.gc_mode];
    VAR_12->last_victim[VAR_13.gc_mode] = 0;
    VAR_13.offset = 0;
    continue;
   }
   break;
  }

  VAR_13.offset = VAR_19 + VAR_13.ofs_unit;
  if (VAR_13.ofs_unit > 1) {
   VAR_13.offset -= VAR_19 % VAR_13.ofs_unit;
   VAR_17 += FUNC_6(VAR_13.dirty_segmap,
      VAR_13.offset - VAR_13.ofs_unit,
      VAR_13.ofs_unit);
  } else {
   VAR_17++;
  }
  VAR_14 = FUNC_1(VAR_6, VAR_19);

  if (FUNC_17(VAR_6, VAR_14))
   goto next;

  if (FUNC_22(FUNC_13(VAR_6, VAR_4) &&
     FUNC_9(VAR_6, VAR_19) &&
     VAR_13.alloc_mode != VAR_5))
   goto next;
  if (VAR_8 == VAR_0 && FUNC_20(VAR_14, VAR_11->victim_secmap))
   goto next;

  VAR_18 = FUNC_10(VAR_6, VAR_19, &VAR_13);

  if (VAR_13.min_cost > VAR_18) {
   VAR_13.min_segno = VAR_19;
   VAR_13.min_cost = VAR_18;
  }
next:
  if (VAR_17 >= VAR_13.max_search) {
   if (!VAR_12->last_victim[VAR_13.gc_mode] && VAR_19 <= VAR_15)
    VAR_12->last_victim[VAR_13.gc_mode] = VAR_15 + 1;
   else
    VAR_12->last_victim[VAR_13.gc_mode] = VAR_19 + 1;
   VAR_12->last_victim[VAR_13.gc_mode] %=
    (FUNC_2(VAR_6) * VAR_6->segs_per_sec);
   break;
  }
 }
 if (VAR_13.min_segno != VAR_3) {
got_it:
  *VAR_7 = (VAR_13.min_segno / VAR_13.ofs_unit) * VAR_13.ofs_unit;
got_result:
  if (VAR_13.alloc_mode == VAR_2) {
   VAR_14 = FUNC_1(VAR_6, VAR_13.min_segno);
   if (VAR_8 == VAR_1)
    VAR_6->cur_victim_sec = VAR_14;
   else
    FUNC_19(VAR_14, VAR_11->victim_secmap);
  }

 }
out:
 if (VAR_13.min_segno != VAR_3)
  FUNC_21(VAR_6->sb, VAR_9, VAR_8, &VAR_13,
    VAR_6->cur_victim_sec,
    FUNC_16(VAR_6), FUNC_8(VAR_6));
 FUNC_15(&VAR_11->seglist_lock);

 return (VAR_13.min_segno == VAR_3) ? 0 : 1;
}
