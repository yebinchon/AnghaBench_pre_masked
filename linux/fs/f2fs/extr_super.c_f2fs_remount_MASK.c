
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {unsigned long s_flags; } ;
struct f2fs_mount_info {scalar_t__ whint_mode; int ** s_qf_names; int s_jquota_fmt; } ;
struct f2fs_sb_info {struct f2fs_mount_info mount_opt; scalar_t__ gc_thread; } ;
struct TYPE_2__ {scalar_t__ whint_mode; int ** s_qf_names; int s_jquota_fmt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct f2fs_sb_info*) ;
 TYPE_1__ FUNC_1 (struct f2fs_sb_info*) ;
 struct f2fs_sb_info* FUNC_2 (struct super_block*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_3 (struct f2fs_sb_info*,int ) ;
 int FUNC_4 (struct f2fs_sb_info*,int ) ;
 int FUNC_5 (struct f2fs_sb_info*) ;
 int FUNC_6 (struct super_block*,int) ;
 int FUNC_7 (struct super_block*,int) ;
 int FUNC_8 (struct f2fs_sb_info*,int) ;
 int FUNC_9 (struct f2fs_sb_info*) ;
 int FUNC_10 (struct f2fs_sb_info*,int) ;
 int FUNC_11 (struct f2fs_sb_info*) ;
 int FUNC_12 (struct f2fs_sb_info*) ;
 int FUNC_13 (struct super_block*) ;
 int FUNC_14 (struct f2fs_sb_info*,char*,int) ;
 scalar_t__ FUNC_15 (struct super_block*) ;
 scalar_t__ FUNC_16 (struct f2fs_sb_info*) ;
 int FUNC_17 (struct f2fs_sb_info*) ;
 int FUNC_18 (struct f2fs_sb_info*) ;
 int FUNC_19 (struct super_block*,int) ;
 int FUNC_20 (struct f2fs_sb_info*,char*) ;
 scalar_t__ FUNC_21 (struct f2fs_sb_info*,int ) ;
 int * FUNC_22 (int *,int ) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (struct f2fs_sb_info*) ;
 int FUNC_25 (struct super_block*,char*) ;
 scalar_t__ FUNC_26 (struct super_block*) ;
 int FUNC_27 (struct f2fs_sb_info*,int ) ;
 int FUNC_28 (struct super_block*) ;
 int FUNC_29 (struct f2fs_sb_info*,int ) ;
 int FUNC_30 (struct super_block*,int ) ;

__attribute__((used)) static int FUNC_31(struct super_block *VAR_16, int *VAR_17, char *VAR_18)
{
 struct f2fs_sb_info *VAR_19 = FUNC_2(VAR_16);
 struct f2fs_mount_info VAR_20;
 unsigned long VAR_21;
 int VAR_22;
 bool VAR_23 = 0;
 bool VAR_24 = 0;
 bool VAR_25 = !FUNC_29(VAR_19, VAR_4);
 bool VAR_26 = FUNC_29(VAR_19, VAR_1);
 bool VAR_27 = !FUNC_0(VAR_19);
 bool VAR_28;
 VAR_20 = VAR_19->mount_opt;
 VAR_21 = VAR_16->s_flags;
 if (!(*VAR_17 & VAR_14) && FUNC_21(VAR_19, VAR_11)) {
  VAR_22 = FUNC_8(VAR_19, 0);
  FUNC_14(VAR_19, "Try to recover all the superblocks, ret: %d",
     VAR_22);
  if (!VAR_22)
   FUNC_4(VAR_19, VAR_11);
 }

 FUNC_5(VAR_19);


 VAR_22 = FUNC_25(VAR_16, VAR_18);
 if (VAR_22)
  goto restore_opts;
 VAR_28 =
   VAR_26 != FUNC_29(VAR_19, VAR_1);





 if (FUNC_15(VAR_16) && (*VAR_17 & VAR_14))
  goto skip;
 if (VAR_25 == !!FUNC_29(VAR_19, VAR_4)) {
  VAR_22 = -VAR_2;
  FUNC_20(VAR_19, "switch extent_cache option is not allowed");
  goto restore_opts;
 }

 if (VAR_27 == !!FUNC_0(VAR_19)) {
  VAR_22 = -VAR_2;
  FUNC_20(VAR_19, "switch io_bits option is not allowed");
  goto restore_opts;
 }

 if ((*VAR_17 & VAR_14) && FUNC_29(VAR_19, VAR_1)) {
  VAR_22 = -VAR_2;
  FUNC_20(VAR_19, "disabling checkpoint not compatible with read-only");
  goto restore_opts;
 }






 if ((*VAR_17 & VAR_14) || !FUNC_29(VAR_19, VAR_0)) {
  if (VAR_19->gc_thread) {
   FUNC_18(VAR_19);
   VAR_23 = 1;
  }
 } else if (!VAR_19->gc_thread) {
  VAR_22 = FUNC_17(VAR_19);
  if (VAR_22)
   goto restore_opts;
  VAR_24 = 1;
 }

 if (*VAR_17 & VAR_14 ||
  FUNC_1(VAR_19).whint_mode != VAR_20.whint_mode) {
  FUNC_30(VAR_16, VAR_15);
  FUNC_28(VAR_16);

  FUNC_27(VAR_19, VAR_10);
  FUNC_27(VAR_19, VAR_9);
  FUNC_19(VAR_16, 1);
  FUNC_4(VAR_19, VAR_9);
 }

 if (VAR_28) {
  if (FUNC_29(VAR_19, VAR_1)) {
   VAR_22 = FUNC_11(VAR_19);
   if (VAR_22)
    goto restore_gc;
  } else {
   FUNC_12(VAR_19);
  }
 }





 if ((*VAR_17 & VAR_14) || !FUNC_29(VAR_19, VAR_5)) {
  FUNC_3(VAR_19, VAR_5);
  FUNC_10(VAR_19, 0);
 } else {
  VAR_22 = FUNC_9(VAR_19);
  if (VAR_22)
   goto restore_gc;
 }
skip:






 VAR_16->s_flags = (VAR_16->s_flags & ~VAR_13) |
  (FUNC_29(VAR_19, VAR_8) ? VAR_13 : 0);

 FUNC_24(VAR_19);
 *VAR_17 = (*VAR_17 & ~VAR_12) | (VAR_16->s_flags & VAR_12);
 return 0;
restore_gc:
 if (VAR_23) {
  if (FUNC_17(VAR_19))
   FUNC_20(VAR_19, "background gc thread has stopped");
 } else if (VAR_24) {
  FUNC_18(VAR_19);
 }
restore_opts:







 VAR_19->mount_opt = VAR_20;
 VAR_16->s_flags = VAR_21;
 return VAR_22;
}
