
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct super_block {int dummy; } ;
struct mmpd_data {struct buffer_head* bh; struct super_block* sb; } ;
struct mmp_struct {scalar_t__ mmp_seq; void* mmp_time; void* mmp_check_interval; int mmp_nodename; int mmp_bdevname; } ;
struct ext4_super_block {int s_feature_incompat; int s_mmp_block; int s_mmp_update_interval; } ;
struct buffer_head {scalar_t__ b_data; int b_bdev; } ;
typedef int ext4_fsblk_t ;
struct TYPE_4__ {int * s_mmp_tsk; struct ext4_super_block* s_es; } ;
struct TYPE_3__ {int nodename; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 TYPE_2__* FUNC_0 (struct super_block*) ;
 int VAR_7 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct buffer_head*) ;
 void* FUNC_3 (unsigned int) ;
 void* FUNC_4 (scalar_t__) ;
 void* FUNC_5 (int ) ;
 int FUNC_6 (struct super_block*,struct mmp_struct*,char*) ;
 int FUNC_7 (struct super_block*,char*,...) ;
 int FUNC_8 (struct super_block*,char*) ;
 TYPE_1__* FUNC_9 () ;
 unsigned long VAR_8 ;
 int FUNC_10 (void*) ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 unsigned int FUNC_16 (int,int ) ;
 scalar_t__ FUNC_17 (int ,int ,int) ;
 int FUNC_18 (int ,int ,int) ;
 int FUNC_19 (int,int ) ;
 int FUNC_20 (struct buffer_head*) ;
 int FUNC_21 (struct super_block*,struct buffer_head**,int ) ;
 scalar_t__ FUNC_22 (struct super_block*) ;
 int FUNC_23 (int) ;
 int FUNC_24 (struct super_block*,struct buffer_head*) ;

__attribute__((used)) static int FUNC_25(void *VAR_9)
{
 struct super_block *VAR_10 = ((struct mmpd_data *) VAR_9)->sb;
 struct buffer_head *VAR_11 = ((struct mmpd_data *) VAR_9)->bh;
 struct ext4_super_block *VAR_12 = FUNC_0(VAR_10)->s_es;
 struct mmp_struct *VAR_13;
 ext4_fsblk_t VAR_14;
 u32 VAR_15 = 0;
 unsigned long VAR_16 = 0;
 int VAR_17 = FUNC_13(VAR_12->s_mmp_update_interval);
 unsigned VAR_18;
 unsigned long VAR_19;
 unsigned long VAR_20;
 int VAR_21;

 VAR_14 = FUNC_15(VAR_12->s_mmp_block);
 VAR_13 = (struct mmp_struct *)(VAR_11->b_data);
 VAR_13->mmp_time = FUNC_5(FUNC_12());




 VAR_18 = FUNC_16(VAR_2 * VAR_17,
     VAR_4);
 VAR_13->mmp_check_interval = FUNC_3(VAR_18);
 FUNC_1(VAR_11->b_bdev, VAR_13->mmp_bdevname);

 FUNC_18(VAR_13->mmp_nodename, FUNC_9()->nodename,
        sizeof(VAR_13->mmp_nodename));

 while (!FUNC_11()) {
  if (++VAR_15 > VAR_6)
   VAR_15 = 1;

  VAR_13->mmp_seq = FUNC_4(VAR_15);
  VAR_13->mmp_time = FUNC_5(FUNC_12());
  VAR_19 = VAR_8;

  VAR_21 = FUNC_24(VAR_10, VAR_11);




  if (VAR_21) {
   if ((VAR_16 % 60) == 0)
    FUNC_7(VAR_10, "Error writing to MMP block");
   VAR_16++;
  }

  if (!(FUNC_14(VAR_12->s_feature_incompat) &
      VAR_1)) {
   FUNC_8(VAR_10, "kmmpd being stopped since MMP feature"
         " has been disabled.");
   goto exit_thread;
  }

  if (FUNC_22(VAR_10))
   break;

  VAR_20 = VAR_8 - VAR_19;
  if (VAR_20 < VAR_17 * VAR_7)
   FUNC_23(VAR_17 *
             VAR_7 - VAR_20);






  VAR_20 = VAR_8 - VAR_19;
  if (VAR_20 > VAR_18 * VAR_7) {
   struct buffer_head *VAR_22 = ((void*)0);
   struct mmp_struct *VAR_23;

   VAR_21 = FUNC_21(VAR_10, &VAR_22, VAR_14);
   if (VAR_21) {
    FUNC_7(VAR_10, "error reading MMP data: %d",
        VAR_21);
    goto exit_thread;
   }

   VAR_23 = (struct mmp_struct *)(VAR_22->b_data);
   if (VAR_13->mmp_seq != VAR_23->mmp_seq ||
       FUNC_17(VAR_13->mmp_nodename, VAR_23->mmp_nodename,
       sizeof(VAR_13->mmp_nodename))) {
    FUNC_6(VAR_10, VAR_23,
          "Error while updating MMP info. "
          "The filesystem seems to have been"
          " multiply mounted.");
    FUNC_7(VAR_10, "abort");
    FUNC_20(VAR_22);
    VAR_21 = -VAR_0;
    goto exit_thread;
   }
   FUNC_20(VAR_22);
  }





  VAR_18 = FUNC_16(FUNC_19(VAR_2 * VAR_20 / VAR_7,
          VAR_3),
      VAR_4);
  VAR_13->mmp_check_interval = FUNC_3(VAR_18);
 }




 VAR_13->mmp_seq = FUNC_4(VAR_5);
 VAR_13->mmp_time = FUNC_5(FUNC_12());

 VAR_21 = FUNC_24(VAR_10, VAR_11);

exit_thread:
 FUNC_0(VAR_10)->s_mmp_tsk = ((void*)0);
 FUNC_10(VAR_9);
 FUNC_2(VAR_11);
 return VAR_21;
}
