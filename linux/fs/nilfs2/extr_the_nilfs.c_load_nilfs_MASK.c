
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct the_nilfs {int ns_crc_seed; int ns_sbwtime; int ns_blocksize; int ns_dat; int ns_sufile; int ns_cpfile; int ns_sem; int ns_mount_state; struct nilfs_super_block** ns_sbp; int ns_sbsize; int ns_bdev; } ;
struct super_block {unsigned int s_flags; } ;
struct nilfs_super_block {int s_feature_compat_ro; int s_log_block_size; int s_wtime; int s_crc_seed; } ;
struct nilfs_recovery_info {int ri_super_root; } ;
typedef int __u64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct nilfs_super_block*,struct nilfs_super_block*,int ) ;
 int FUNC_6 (struct super_block*) ;
 int FUNC_7 (struct nilfs_recovery_info*) ;
 int FUNC_8 (struct nilfs_recovery_info*) ;
 int FUNC_9 (struct the_nilfs*,struct super_block*,int ) ;
 int FUNC_10 (struct super_block*,int ,char*,...) ;
 int FUNC_11 (struct the_nilfs*,struct super_block*,struct nilfs_recovery_info*) ;
 int FUNC_12 (struct the_nilfs*,struct nilfs_recovery_info*) ;
 int FUNC_13 (struct the_nilfs*,struct nilfs_super_block*) ;
 scalar_t__ FUNC_14 (struct the_nilfs*,int ) ;
 int FUNC_15 (struct the_nilfs*) ;
 int FUNC_16 (struct nilfs_super_block*) ;
 scalar_t__ FUNC_17 (int) ;
 int FUNC_18 (int *) ;

int FUNC_19(struct the_nilfs *VAR_10, struct super_block *VAR_11)
{
 struct nilfs_recovery_info VAR_12;
 unsigned int VAR_13 = VAR_11->s_flags;
 int VAR_14 = FUNC_0(VAR_10->ns_bdev);
 int VAR_15 = FUNC_15(VAR_10);
 int VAR_16;

 if (!VAR_15) {
  FUNC_10(VAR_11, VAR_5, "mounting unchecked fs");
  if (VAR_13 & VAR_9) {
   FUNC_10(VAR_11, VAR_4,
      "recovery required for readonly filesystem");
   FUNC_10(VAR_11, VAR_4,
      "write access will be enabled during recovery");
  }
 }

 FUNC_8(&VAR_12);

 VAR_16 = FUNC_12(VAR_10, &VAR_12);
 if (FUNC_17(VAR_16)) {
  struct nilfs_super_block **VAR_17 = VAR_10->ns_sbp;
  int VAR_18;

  if (VAR_16 != -VAR_1)
   goto scan_error;

  if (!FUNC_16(VAR_17[1])) {
   FUNC_10(VAR_11, VAR_5,
      "unable to fall back to spare super block");
   goto scan_error;
  }
  FUNC_10(VAR_11, VAR_4,
     "trying rollback from an earlier position");





  FUNC_5(VAR_17[0], VAR_17[1], VAR_10->ns_sbsize);
  VAR_10->ns_crc_seed = FUNC_3(VAR_17[0]->s_crc_seed);
  VAR_10->ns_sbwtime = FUNC_4(VAR_17[0]->s_wtime);


  VAR_18 = VAR_0 << FUNC_3(VAR_17[0]->s_log_block_size);
  if (VAR_18 != VAR_10->ns_blocksize) {
   FUNC_10(VAR_11, VAR_5,
      "blocksize differs between two super blocks (%d != %d)",
      VAR_18, VAR_10->ns_blocksize);
   goto scan_error;
  }

  VAR_16 = FUNC_13(VAR_10, VAR_17[0]);
  if (VAR_16)
   goto scan_error;


  VAR_10->ns_mount_state &= ~VAR_7;
  VAR_15 = 0;

  VAR_16 = FUNC_12(VAR_10, &VAR_12);
  if (VAR_16)
   goto scan_error;
 }

 VAR_16 = FUNC_9(VAR_10, VAR_11, VAR_12.ri_super_root);
 if (FUNC_17(VAR_16)) {
  FUNC_10(VAR_11, VAR_3, "error %d while loading super root",
     VAR_16);
  goto failed;
 }

 if (VAR_15)
  goto skip_recovery;

 if (VAR_13 & VAR_9) {
  __u64 VAR_19;

  if (FUNC_14(VAR_10, VAR_8)) {
   FUNC_10(VAR_11, VAR_4,
      "norecovery option specified, skipping roll-forward recovery");
   goto skip_recovery;
  }
  VAR_19 = FUNC_4(VAR_10->ns_sbp[0]->s_feature_compat_ro) &
   ~VAR_6;
  if (VAR_19) {
   FUNC_10(VAR_11, VAR_3,
      "couldn't proceed with recovery because of unsupported optional features (%llx)",
      (unsigned long long)VAR_19);
   VAR_16 = -VAR_2;
   goto failed_unload;
  }
  if (VAR_14) {
   FUNC_10(VAR_11, VAR_3,
      "write access unavailable, cannot proceed");
   VAR_16 = -VAR_2;
   goto failed_unload;
  }
  VAR_11->s_flags &= ~VAR_9;
 } else if (FUNC_14(VAR_10, VAR_8)) {
  FUNC_10(VAR_11, VAR_3,
     "recovery cancelled because norecovery option was specified for a read/write mount");
  VAR_16 = -VAR_1;
  goto failed_unload;
 }

 VAR_16 = FUNC_11(VAR_10, VAR_11, &VAR_12);
 if (VAR_16)
  goto failed_unload;

 FUNC_1(&VAR_10->ns_sem);
 VAR_10->ns_mount_state |= VAR_7;
 VAR_16 = FUNC_6(VAR_11);
 FUNC_18(&VAR_10->ns_sem);

 if (VAR_16) {
  FUNC_10(VAR_11, VAR_3,
     "error %d updating super block. recovery unfinished.",
     VAR_16);
  goto failed_unload;
 }
 FUNC_10(VAR_11, VAR_4, "recovery complete");

 skip_recovery:
 FUNC_7(&VAR_12);
 VAR_11->s_flags = VAR_13;
 return 0;

 scan_error:
 FUNC_10(VAR_11, VAR_3, "error %d while searching super root", VAR_16);
 goto failed;

 failed_unload:
 FUNC_2(VAR_10->ns_cpfile);
 FUNC_2(VAR_10->ns_sufile);
 FUNC_2(VAR_10->ns_dat);

 failed:
 FUNC_7(&VAR_12);
 VAR_11->s_flags = VAR_13;
 return VAR_16;
}
