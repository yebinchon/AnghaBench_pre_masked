
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct gc_inode_list {int iroot; int ilist; } ;
struct f2fs_sb_info {unsigned long long* skipped_atomic_files; unsigned long long skipped_gc_rwsem; int segs_per_sec; int gc_mutex; TYPE_1__* sb; void* cur_victim_sec; } ;
struct cp_control {int reason; } ;
struct TYPE_5__ {unsigned int* last_victim; } ;
struct TYPE_4__ {int s_flags; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ) ;
 unsigned int VAR_12 ;
 void* VAR_13 ;
 int FUNC_1 (int ,int ) ;
 int VAR_14 ;
 int VAR_15 ;
 TYPE_3__* FUNC_2 (struct f2fs_sb_info*) ;
 int FUNC_3 (struct f2fs_sb_info*) ;
 int FUNC_4 (struct f2fs_sb_info*,unsigned int*,int) ;
 int FUNC_5 (struct f2fs_sb_info*,unsigned int,struct gc_inode_list*,int) ;
 int FUNC_6 (struct f2fs_sb_info*) ;
 int FUNC_7 (struct f2fs_sb_info*,int) ;
 int FUNC_8 (struct f2fs_sb_info*,struct cp_control*) ;
 int FUNC_9 (struct f2fs_sb_info*) ;
 int FUNC_10 (struct f2fs_sb_info*) ;
 int FUNC_11 (struct f2fs_sb_info*,int ) ;
 scalar_t__ FUNC_12 (struct f2fs_sb_info*,int,int ) ;
 int FUNC_13 (struct f2fs_sb_info*,int ) ;
 int FUNC_14 (int *) ;
 scalar_t__ FUNC_15 (struct f2fs_sb_info*) ;
 int FUNC_16 (struct gc_inode_list*) ;
 int FUNC_17 (struct f2fs_sb_info*) ;
 int FUNC_18 (TYPE_1__*,int,int,int ,int ,int ,int ,int ,int ,scalar_t__) ;
 int FUNC_19 (TYPE_1__*,int,int,int,int ,int ,int ,int ,int ,int ,scalar_t__) ;
 scalar_t__ FUNC_20 (int) ;

int FUNC_21(struct f2fs_sb_info *VAR_16, bool VAR_17,
   bool VAR_18, unsigned int VAR_19)
{
 int VAR_20 = VAR_17 ? VAR_9 : VAR_1;
 int VAR_21 = 0, VAR_22 = 0, VAR_23 = 0;
 int VAR_24 = 0;
 struct cp_control VAR_25;
 unsigned int VAR_26 = VAR_19;
 struct gc_inode_list VAR_27 = {
  .ilist = FUNC_0(VAR_27.ilist),
  .iroot = FUNC_1(VAR_27.iroot, VAR_11),
 };
 unsigned long long VAR_28 = VAR_16->skipped_atomic_files[VAR_9];
 unsigned long long VAR_29;
 unsigned int VAR_30 = 0, VAR_31 = 0;

 FUNC_18(VAR_16->sb, VAR_17, VAR_18,
    FUNC_11(VAR_16, VAR_8),
    FUNC_11(VAR_16, VAR_6),
    FUNC_11(VAR_16, VAR_7),
    FUNC_9(VAR_16),
    FUNC_10(VAR_16),
    FUNC_17(VAR_16),
    FUNC_15(VAR_16));

 VAR_25.reason = FUNC_3(VAR_16);
 VAR_16->skipped_gc_rwsem = 0;
 VAR_29 = VAR_28;
gc_more:
 if (FUNC_20(!(VAR_16->sb->s_flags & VAR_15))) {
  VAR_24 = -VAR_3;
  goto stop;
 }
 if (FUNC_20(FUNC_6(VAR_16))) {
  VAR_24 = -VAR_4;
  goto stop;
 }

 if (VAR_20 == VAR_1 && FUNC_12(VAR_16, 0, 0)) {





  if (FUNC_15(VAR_16) &&
    !FUNC_13(VAR_16, VAR_14)) {
   VAR_24 = FUNC_8(VAR_16, &VAR_25);
   if (VAR_24)
    goto stop;
  }
  if (FUNC_12(VAR_16, 0, 0))
   VAR_20 = VAR_9;
 }


 if (VAR_20 == VAR_1 && !VAR_18) {
  VAR_24 = -VAR_3;
  goto stop;
 }
 if (!FUNC_4(VAR_16, &VAR_19, VAR_20)) {
  VAR_24 = -VAR_5;
  goto stop;
 }

 VAR_22 = FUNC_5(VAR_16, VAR_19, &VAR_27, VAR_20);
 if (VAR_20 == VAR_9 && VAR_22 == VAR_16->segs_per_sec)
  VAR_21++;
 VAR_23 += VAR_22;

 if (VAR_20 == VAR_9) {
  if (VAR_16->skipped_atomic_files[VAR_9] > VAR_28 ||
      VAR_16->skipped_gc_rwsem)
   VAR_30++;
  VAR_28 = VAR_16->skipped_atomic_files[VAR_9];
  VAR_31++;
 }

 if (VAR_20 == VAR_9 && VAR_22)
  VAR_16->cur_victim_sec = VAR_13;

 if (VAR_17)
  goto stop;

 if (FUNC_12(VAR_16, VAR_21, 0)) {
  if (VAR_30 <= VAR_12 ||
     VAR_30 * 2 < VAR_31) {
   VAR_19 = VAR_13;
   goto gc_more;
  }

  if (VAR_29 < VAR_28 &&
    (VAR_28 - VAR_29) >
      VAR_16->skipped_gc_rwsem) {
   FUNC_7(VAR_16, 1);
   VAR_19 = VAR_13;
   goto gc_more;
  }
  if (VAR_20 == VAR_9 && !FUNC_13(VAR_16, VAR_14))
   VAR_24 = FUNC_8(VAR_16, &VAR_25);
 }
stop:
 FUNC_2(VAR_16)->last_victim[VAR_0] = 0;
 FUNC_2(VAR_16)->last_victim[VAR_10] = VAR_26;

 FUNC_19(VAR_16->sb, VAR_24, VAR_23, VAR_21,
    FUNC_11(VAR_16, VAR_8),
    FUNC_11(VAR_16, VAR_6),
    FUNC_11(VAR_16, VAR_7),
    FUNC_9(VAR_16),
    FUNC_10(VAR_16),
    FUNC_17(VAR_16),
    FUNC_15(VAR_16));

 FUNC_14(&VAR_16->gc_mutex);

 FUNC_16(&VAR_27);

 if (VAR_17 && !VAR_24)
  VAR_24 = VAR_21 ? 0 : -VAR_2;
 return VAR_24;
}
