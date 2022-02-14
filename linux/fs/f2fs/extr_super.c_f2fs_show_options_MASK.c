
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct f2fs_sb_info {int sb; } ;
struct dentry {int d_sb; } ;
struct TYPE_3__ {char* inject_rate; char* inject_type; } ;
struct TYPE_4__ {char* inline_xattr_size; char* active_logs; char* write_io_size_bits; scalar_t__ whint_mode; scalar_t__ alloc_mode; char* unusable_cap; scalar_t__ fsync_mode; scalar_t__ test_dummy_encryption; TYPE_1__ fault_info; int s_resgid; int s_resuid; int root_reserved_blocks; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (struct f2fs_sb_info*) ;
 TYPE_2__ FUNC_1 (struct f2fs_sb_info*) ;
 struct f2fs_sb_info* FUNC_2 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 scalar_t__ VAR_30 ;
 scalar_t__ VAR_31 ;
 int VAR_32 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct seq_file*,int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ) ;
 int VAR_33 ;
 int FUNC_7 (struct seq_file*,char*,char*,...) ;
 int FUNC_8 (struct seq_file*,char*) ;
 scalar_t__ FUNC_9 (struct f2fs_sb_info*,int ) ;

__attribute__((used)) static int FUNC_10(struct seq_file *VAR_34, struct dentry *VAR_35)
{
 struct f2fs_sb_info *VAR_36 = FUNC_2(VAR_35->d_sb);

 if (!FUNC_3(VAR_36->sb) && FUNC_9(VAR_36, VAR_3)) {
  if (FUNC_9(VAR_36, VAR_13))
   FUNC_7(VAR_34, ",background_gc=%s", "sync");
  else
   FUNC_7(VAR_34, ",background_gc=%s", "on");
 } else {
  FUNC_7(VAR_34, ",background_gc=%s", "off");
 }
 if (FUNC_9(VAR_36, VAR_7))
  FUNC_8(VAR_34, ",disable_roll_forward");
 if (FUNC_9(VAR_36, VAR_8))
  FUNC_8(VAR_34, ",discard");
 else
  FUNC_8(VAR_34, ",nodiscard");
 if (FUNC_9(VAR_36, VAR_24))
  FUNC_8(VAR_34, ",no_heap");
 else
  FUNC_8(VAR_34, ",heap");
 if (FUNC_9(VAR_36, VAR_6))
  FUNC_8(VAR_34, ",disable_ext_identify");
 if (FUNC_9(VAR_36, VAR_18))
  FUNC_8(VAR_34, ",inline_data");
 else
  FUNC_8(VAR_34, ",noinline_data");
 if (FUNC_9(VAR_36, VAR_19))
  FUNC_8(VAR_34, ",inline_dentry");
 else
  FUNC_8(VAR_34, ",noinline_dentry");
 if (!FUNC_3(VAR_36->sb) && FUNC_9(VAR_36, VAR_12))
  FUNC_8(VAR_34, ",flush_merge");
 if (FUNC_9(VAR_36, VAR_23))
  FUNC_8(VAR_34, ",nobarrier");
 if (FUNC_9(VAR_36, VAR_10))
  FUNC_8(VAR_34, ",fastboot");
 if (FUNC_9(VAR_36, VAR_9))
  FUNC_8(VAR_34, ",extent_cache");
 else
  FUNC_8(VAR_34, ",noextent_cache");
 if (FUNC_9(VAR_36, VAR_4))
  FUNC_8(VAR_34, ",data_flush");

 FUNC_8(VAR_34, ",mode=");
 if (FUNC_9(VAR_36, VAR_0))
  FUNC_8(VAR_34, "adaptive");
 else if (FUNC_9(VAR_36, VAR_22))
  FUNC_8(VAR_34, "lfs");
 FUNC_7(VAR_34, ",active_logs=%u", FUNC_1(VAR_36).active_logs);
 if (FUNC_9(VAR_36, VAR_28))
  FUNC_7(VAR_34, ",reserve_root=%u,resuid=%u,resgid=%u",
    FUNC_1(VAR_36).root_reserved_blocks,
    FUNC_6(&VAR_33,
     FUNC_1(VAR_36).s_resuid),
    FUNC_5(&VAR_33,
     FUNC_1(VAR_36).s_resgid));
 if (FUNC_0(VAR_36))
  FUNC_7(VAR_34, ",io_bits=%u",
    FUNC_1(VAR_36).write_io_size_bits);
 FUNC_4(VAR_34, VAR_36->sb);
 if (FUNC_1(VAR_36).whint_mode == VAR_31)
  FUNC_7(VAR_34, ",whint_mode=%s", "user-based");
 else if (FUNC_1(VAR_36).whint_mode == VAR_30)
  FUNC_7(VAR_34, ",whint_mode=%s", "fs-based");





 if (FUNC_1(VAR_36).alloc_mode == VAR_1)
  FUNC_7(VAR_34, ",alloc_mode=%s", "default");
 else if (FUNC_1(VAR_36).alloc_mode == VAR_2)
  FUNC_7(VAR_34, ",alloc_mode=%s", "reuse");

 if (FUNC_9(VAR_36, VAR_5))
  FUNC_7(VAR_34, ",checkpoint=disable:%u",
    FUNC_1(VAR_36).unusable_cap);
 if (FUNC_1(VAR_36).fsync_mode == VAR_15)
  FUNC_7(VAR_34, ",fsync_mode=%s", "posix");
 else if (FUNC_1(VAR_36).fsync_mode == VAR_16)
  FUNC_7(VAR_34, ",fsync_mode=%s", "strict");
 else if (FUNC_1(VAR_36).fsync_mode == VAR_14)
  FUNC_7(VAR_34, ",fsync_mode=%s", "nobarrier");
 return 0;
}
