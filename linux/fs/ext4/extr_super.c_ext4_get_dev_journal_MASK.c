
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_8__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct super_block {int s_blocksize; int s_bdev; } ;
struct ext4_super_block {scalar_t__ s_checksum; int s_uuid; int s_feature_ro_compat; int s_feature_incompat; int s_magic; } ;
struct buffer_head {scalar_t__ b_data; } ;
struct block_device {int dummy; } ;
struct TYPE_11__ {TYPE_2__* j_superblock; int j_sb_buffer; struct super_block* j_private; } ;
typedef TYPE_3__ journal_t ;
typedef int ext4_fsblk_t ;
typedef int dev_t ;
struct TYPE_12__ {struct block_device* journal_bdev; TYPE_1__* s_es; } ;
struct TYPE_10__ {int s_nr_users; } ;
struct TYPE_9__ {int s_journal_uuid; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_8__* FUNC_1 (struct super_block*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct buffer_head* FUNC_2 (struct block_device*,int,int) ;
 int FUNC_3 (struct block_device*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct buffer_head*) ;
 int FUNC_6 (int ) ;
 struct block_device* FUNC_7 (int ,struct super_block*) ;
 int FUNC_8 (struct block_device*) ;
 int FUNC_9 (struct ext4_super_block*) ;
 int FUNC_10 (struct super_block*) ;
 int FUNC_11 (struct super_block*,TYPE_3__*) ;
 int FUNC_12 (struct super_block*,int ,char*,...) ;
 scalar_t__ FUNC_13 (struct super_block*,struct ext4_super_block*) ;
 int FUNC_14 (TYPE_3__*) ;
 TYPE_3__* FUNC_15 (struct block_device*,int ,int,int,int) ;
 scalar_t__ FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ,int,int,int *) ;
 scalar_t__ FUNC_19 (int ,int ,int) ;
 int FUNC_20 (struct block_device*,int) ;
 int FUNC_21 (int ) ;

__attribute__((used)) static journal_t *FUNC_22(struct super_block *VAR_8,
           dev_t VAR_9)
{
 struct buffer_head *VAR_10;
 journal_t *VAR_11;
 ext4_fsblk_t VAR_12;
 ext4_fsblk_t VAR_13;
 int VAR_14, VAR_15;
 ext4_fsblk_t VAR_16;
 unsigned long VAR_17;
 struct ext4_super_block *VAR_18;
 struct block_device *VAR_19;

 FUNC_0(!FUNC_10(VAR_8));

 VAR_19 = FUNC_7(VAR_9, VAR_8);
 if (VAR_19 == ((void*)0))
  return ((void*)0);

 VAR_15 = VAR_8->s_blocksize;
 VAR_14 = FUNC_3(VAR_19);
 if (VAR_15 < VAR_14) {
  FUNC_12(VAR_8, VAR_4,
   "blocksize too small for journal device");
  goto out_bdev;
 }

 VAR_16 = VAR_2 / VAR_15;
 VAR_17 = VAR_2 % VAR_15;
 FUNC_20(VAR_19, VAR_15);
 if (!(VAR_10 = FUNC_2(VAR_19, VAR_16, VAR_15))) {
  FUNC_12(VAR_8, VAR_4, "couldn't read superblock of "
         "external journal");
  goto out_bdev;
 }

 VAR_18 = (struct ext4_super_block *) (VAR_10->b_data + VAR_17);
 if ((FUNC_16(VAR_18->s_magic) != VAR_3) ||
     !(FUNC_17(VAR_18->s_feature_incompat) &
       VAR_0)) {
  FUNC_12(VAR_8, VAR_4, "external journal has "
     "bad superblock");
  FUNC_5(VAR_10);
  goto out_bdev;
 }

 if ((FUNC_17(VAR_18->s_feature_ro_compat) &
      VAR_1) &&
     VAR_18->s_checksum != FUNC_13(VAR_8, VAR_18)) {
  FUNC_12(VAR_8, VAR_4, "external journal has "
           "corrupt superblock");
  FUNC_5(VAR_10);
  goto out_bdev;
 }

 if (FUNC_19(FUNC_1(VAR_8)->s_es->s_journal_uuid, VAR_18->s_uuid, 16)) {
  FUNC_12(VAR_8, VAR_4, "journal UUID does not match");
  FUNC_5(VAR_10);
  goto out_bdev;
 }

 VAR_13 = FUNC_9(VAR_18);
 VAR_12 = VAR_16 + 1;
 FUNC_5(VAR_10);

 VAR_11 = FUNC_15(VAR_19, VAR_8->s_bdev,
     VAR_12, VAR_13, VAR_15);
 if (!VAR_11) {
  FUNC_12(VAR_8, VAR_4, "failed to create device journal");
  goto out_bdev;
 }
 VAR_11->j_private = VAR_8;
 FUNC_18(VAR_6, VAR_5 | VAR_7, 1, &VAR_11->j_sb_buffer);
 FUNC_21(VAR_11->j_sb_buffer);
 if (!FUNC_6(VAR_11->j_sb_buffer)) {
  FUNC_12(VAR_8, VAR_4, "I/O error on journal device");
  goto out_journal;
 }
 if (FUNC_4(VAR_11->j_superblock->s_nr_users) != 1) {
  FUNC_12(VAR_8, VAR_4, "External journal has more than one "
     "user (unsupported) - %d",
   FUNC_4(VAR_11->j_superblock->s_nr_users));
  goto out_journal;
 }
 FUNC_1(VAR_8)->journal_bdev = VAR_19;
 FUNC_11(VAR_8, VAR_11);
 return VAR_11;

out_journal:
 FUNC_14(VAR_11);
out_bdev:
 FUNC_8(VAR_19);
 return ((void*)0);
}
