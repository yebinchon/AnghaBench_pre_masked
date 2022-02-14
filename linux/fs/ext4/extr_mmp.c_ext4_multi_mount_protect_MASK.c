
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct super_block {unsigned int s_id; } ;
struct mmpd_data {struct buffer_head* bh; struct super_block* sb; } ;
struct mmp_struct {int mmp_bdevname; int mmp_seq; int mmp_check_interval; } ;
struct ext4_super_block {int s_first_data_block; int s_mmp_update_interval; } ;
struct buffer_head {int b_bdev; scalar_t__ b_data; } ;
typedef scalar_t__ ext4_fsblk_t ;
struct TYPE_2__ {int * s_mmp_tsk; struct ext4_super_block* s_es; } ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* FUNC_0 (struct super_block*) ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct super_block*,struct mmp_struct*,char*) ;
 scalar_t__ FUNC_6 (struct ext4_super_block*) ;
 int FUNC_7 (struct super_block*,char*,...) ;
 int FUNC_8 (struct mmpd_data*) ;
 struct mmpd_data* FUNC_9 (int,int ) ;
 int VAR_5 ;
 int * FUNC_10 (int ,struct mmpd_data*,char*,int ) ;
 unsigned int FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int ) ;
 unsigned int FUNC_13 (unsigned int,unsigned int) ;
 scalar_t__ FUNC_14 () ;
 int FUNC_15 (struct super_block*,struct buffer_head**,scalar_t__) ;
 scalar_t__ FUNC_16 (unsigned int) ;
 int FUNC_17 (struct super_block*,struct buffer_head*) ;

int FUNC_18(struct super_block *VAR_6,
        ext4_fsblk_t VAR_7)
{
 struct ext4_super_block *VAR_8 = FUNC_0(VAR_6)->s_es;
 struct buffer_head *VAR_9 = ((void*)0);
 struct mmp_struct *VAR_10 = ((void*)0);
 struct mmpd_data *VAR_11;
 u32 VAR_12;
 unsigned int VAR_13 = FUNC_11(VAR_8->s_mmp_update_interval);
 unsigned int VAR_14 = 0;
 int VAR_15;

 if (VAR_7 < FUNC_12(VAR_8->s_first_data_block) ||
     VAR_7 >= FUNC_6(VAR_8)) {
  FUNC_7(VAR_6, "Invalid MMP block in superblock");
  goto failed;
 }

 VAR_15 = FUNC_15(VAR_6, &VAR_9, VAR_7);
 if (VAR_15)
  goto failed;

 VAR_10 = (struct mmp_struct *)(VAR_9->b_data);

 if (VAR_13 < VAR_0)
  VAR_13 = VAR_0;





 if (FUNC_11(VAR_10->mmp_check_interval) > VAR_13)
  VAR_13 = FUNC_11(VAR_10->mmp_check_interval);

 VAR_12 = FUNC_12(VAR_10->mmp_seq);
 if (VAR_12 == VAR_1)
  goto skip;

 if (VAR_12 == VAR_2) {
  FUNC_5(VAR_6, VAR_10, "fsck is running on the filesystem");
  goto failed;
 }

 VAR_14 = FUNC_13(VAR_13 * 2 + 1,
   VAR_13 + 60);


 if (VAR_14 > VAR_0 * 4)
  FUNC_7(VAR_6, "MMP interval %u higher than expected, please"
        " wait.\n", VAR_14 * 2);

 if (FUNC_16(VAR_4 * VAR_14) != 0) {
  FUNC_7(VAR_6, "MMP startup interrupted, failing mount\n");
  goto failed;
 }

 VAR_15 = FUNC_15(VAR_6, &VAR_9, VAR_7);
 if (VAR_15)
  goto failed;
 VAR_10 = (struct mmp_struct *)(VAR_9->b_data);
 if (VAR_12 != FUNC_12(VAR_10->mmp_seq)) {
  FUNC_5(VAR_6, VAR_10,
        "Device is already active on another node.");
  goto failed;
 }

skip:



 VAR_12 = FUNC_14();
 VAR_10->mmp_seq = FUNC_4(VAR_12);

 VAR_15 = FUNC_17(VAR_6, VAR_9);
 if (VAR_15)
  goto failed;




 if (FUNC_16(VAR_4 * VAR_14) != 0) {
  FUNC_7(VAR_6, "MMP startup interrupted, failing mount");
  goto failed;
 }

 VAR_15 = FUNC_15(VAR_6, &VAR_9, VAR_7);
 if (VAR_15)
  goto failed;
 VAR_10 = (struct mmp_struct *)(VAR_9->b_data);
 if (VAR_12 != FUNC_12(VAR_10->mmp_seq)) {
  FUNC_5(VAR_6, VAR_10,
        "Device is already active on another node.");
  goto failed;
 }

 VAR_11 = FUNC_9(sizeof(*VAR_11), VAR_3);
 if (!VAR_11) {
  FUNC_7(VAR_6, "not enough memory for mmpd_data");
  goto failed;
 }
 VAR_11->sb = VAR_6;
 VAR_11->bh = VAR_9;




 FUNC_0(VAR_6)->s_mmp_tsk = FUNC_10(VAR_5, VAR_11, "kmmpd-%s",
          FUNC_2(VAR_9->b_bdev,
            VAR_10->mmp_bdevname));
 if (FUNC_1(FUNC_0(VAR_6)->s_mmp_tsk)) {
  FUNC_0(VAR_6)->s_mmp_tsk = ((void*)0);
  FUNC_8(VAR_11);
  FUNC_7(VAR_6, "Unable to create kmmpd thread for %s.",
        VAR_6->s_id);
  goto failed;
 }

 return 0;

failed:
 FUNC_3(VAR_9);
 return 1;
}
