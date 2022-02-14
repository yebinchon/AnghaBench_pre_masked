
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct f2fs_sb_info {int cp_mutex; int sb; int stat_info; int discard_blks; } ;
struct f2fs_checkpoint {int checkpoint_ver; } ;
struct cp_control {int reason; } ;
struct TYPE_4__ {scalar_t__ dirty_nat_cnt; } ;
struct TYPE_3__ {scalar_t__ dirty_sentries; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct f2fs_checkpoint* FUNC_0 (struct f2fs_sb_info*) ;
 TYPE_2__* FUNC_1 (struct f2fs_sb_info*) ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_1__* FUNC_2 (struct f2fs_sb_info*) ;
 int FUNC_3 (struct f2fs_sb_info*) ;
 int FUNC_4 (unsigned long long) ;
 unsigned long long FUNC_5 (struct f2fs_checkpoint*) ;
 int FUNC_6 (struct f2fs_sb_info*,struct cp_control*) ;
 int FUNC_7 (struct f2fs_sb_info*,struct cp_control*) ;
 int FUNC_8 (struct f2fs_sb_info*) ;
 int FUNC_9 (struct f2fs_sb_info*,struct cp_control*) ;
 int FUNC_10 (struct f2fs_sb_info*) ;
 int FUNC_11 (struct f2fs_sb_info*,struct cp_control*) ;
 int FUNC_12 (struct f2fs_sb_info*,struct cp_control*) ;
 scalar_t__ FUNC_13 (struct f2fs_sb_info*) ;
 int FUNC_14 (struct f2fs_sb_info*,char*,unsigned long long) ;
 scalar_t__ FUNC_15 (int ) ;
 int FUNC_16 (struct f2fs_sb_info*) ;
 int FUNC_17 (struct f2fs_sb_info*,int ) ;
 int FUNC_18 (struct f2fs_sb_info*,char*) ;
 int FUNC_19 (struct f2fs_sb_info*,int ) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *) ;
 scalar_t__ FUNC_22 (struct f2fs_sb_info*) ;
 int FUNC_23 (int ) ;
 int FUNC_24 (int ,int,char*) ;
 int FUNC_25 (struct f2fs_sb_info*) ;
 scalar_t__ FUNC_26 (int ) ;

int FUNC_27(struct f2fs_sb_info *VAR_10, struct cp_control *VAR_11)
{
 struct f2fs_checkpoint *VAR_12 = FUNC_0(VAR_10);
 unsigned long long VAR_13;
 int VAR_14 = 0;

 if (FUNC_15(VAR_10->sb) || FUNC_13(VAR_10))
  return -VAR_7;

 if (FUNC_26(FUNC_19(VAR_10, VAR_8))) {
  if (VAR_11->reason != VAR_2)
   return 0;
  FUNC_18(VAR_10, "Start checkpoint disabled!");
 }
 FUNC_20(&VAR_10->cp_mutex);

 if (!FUNC_19(VAR_10, VAR_9) &&
  ((VAR_11->reason & VAR_1) || (VAR_11->reason & VAR_4) ||
  ((VAR_11->reason & VAR_0) && !VAR_10->discard_blks)))
  goto out;
 if (FUNC_26(FUNC_8(VAR_10))) {
  VAR_14 = -VAR_6;
  goto out;
 }

 FUNC_24(VAR_10->sb, VAR_11->reason, "start block_ops");

 VAR_14 = FUNC_3(VAR_10);
 if (VAR_14)
  goto out;

 FUNC_24(VAR_10->sb, VAR_11->reason, "finish block_ops");

 FUNC_10(VAR_10);


 if (VAR_11->reason & VAR_0) {
  if (!FUNC_9(VAR_10, VAR_11)) {
   FUNC_25(VAR_10);
   goto out;
  }

  if (FUNC_1(VAR_10)->dirty_nat_cnt == 0 &&
    FUNC_2(VAR_10)->dirty_sentries == 0 &&
    FUNC_22(VAR_10) == 0) {
   FUNC_12(VAR_10, VAR_11);
   FUNC_7(VAR_10, VAR_11);
   FUNC_25(VAR_10);
   goto out;
  }
 }






 VAR_13 = FUNC_5(VAR_12);
 VAR_12->checkpoint_ver = FUNC_4(++VAR_13);


 VAR_14 = FUNC_11(VAR_10, VAR_11);
 if (VAR_14)
  goto stop;

 FUNC_12(VAR_10, VAR_11);


 VAR_14 = FUNC_6(VAR_10, VAR_11);
 if (VAR_14)
  FUNC_16(VAR_10);
 else
  FUNC_7(VAR_10, VAR_11);
stop:
 FUNC_25(VAR_10);
 FUNC_23(VAR_10->stat_info);

 if (VAR_11->reason & VAR_3)
  FUNC_14(VAR_10, "checkpoint: version = %llx", VAR_13);


 FUNC_17(VAR_10, VAR_5);
 FUNC_24(VAR_10->sb, VAR_11->reason, "finish checkpoint");
out:
 FUNC_21(&VAR_10->cp_mutex);
 return VAR_14;
}
