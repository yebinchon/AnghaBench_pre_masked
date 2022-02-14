
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int s_flags; } ;
struct reiserfs_transaction_handle {int dummy; } ;
struct reiserfs_super_block {int dummy; } ;
struct reiserfs_journal {unsigned int j_max_commit_age; unsigned int j_max_trans_age; unsigned int j_default_max_commit_age; int j_errno; int j_must_wait; } ;
typedef int qf_names ;
struct TYPE_2__ {unsigned long s_mount_opt; char** s_qf_names; scalar_t__ s_mount_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 TYPE_1__* FUNC_0 (struct super_block*) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 int VAR_22 ;
 int FUNC_1 (struct super_block*) ;
 struct reiserfs_super_block* FUNC_2 (struct super_block*) ;
 struct reiserfs_journal* FUNC_3 (struct super_block*) ;
 int VAR_23 ;
 int FUNC_4 (struct super_block*,int) ;
 int FUNC_5 (struct super_block*,int) ;
 int FUNC_6 (struct super_block*) ;
 int FUNC_7 (struct super_block*) ;
 int FUNC_8 (struct super_block*,unsigned long) ;
 int FUNC_9 (struct super_block*,unsigned long) ;
 int FUNC_10 (struct super_block*,char**,unsigned int*) ;
 int FUNC_11 (struct reiserfs_transaction_handle*,struct super_block*,int) ;
 int FUNC_12 (struct reiserfs_transaction_handle*) ;
 int FUNC_13 (struct reiserfs_transaction_handle*,int ) ;
 int FUNC_14 (char*) ;
 char* FUNC_15 (char*,int ) ;
 int FUNC_16 (char**,char**,int) ;
 int FUNC_17 (struct super_block*) ;
 scalar_t__ FUNC_18 (struct reiserfs_journal*) ;
 int FUNC_19 (struct super_block*,char*,unsigned long*,unsigned long*,int *,unsigned int*,char**,unsigned int*) ;
 int FUNC_20 (struct super_block*,int ,int) ;
 int FUNC_21 (struct super_block*,unsigned long) ;
 int FUNC_22 (struct super_block*) ;
 int FUNC_23 (struct super_block*) ;
 int FUNC_24 (struct super_block*,int) ;
 scalar_t__ FUNC_25 (struct reiserfs_super_block*) ;
 scalar_t__ FUNC_26 (struct super_block*) ;
 scalar_t__ FUNC_27 (struct reiserfs_super_block*) ;
 int FUNC_28 (struct reiserfs_super_block*,scalar_t__) ;
 int FUNC_29 (struct reiserfs_super_block*,scalar_t__) ;
 int FUNC_30 (struct super_block*) ;

__attribute__((used)) static int FUNC_31(struct super_block *VAR_24, int *VAR_25, char *VAR_26)
{
 struct reiserfs_super_block *VAR_27;
 struct reiserfs_transaction_handle VAR_28;
 unsigned long VAR_29;
 unsigned long VAR_30 = FUNC_0(VAR_24)->s_mount_opt;
 unsigned long VAR_31 = 0;
 unsigned int VAR_32 = (unsigned int)-1;
 struct reiserfs_journal *VAR_33 = FUNC_3(VAR_24);
 char *VAR_34;
 int VAR_35;
 char *VAR_36[VAR_14];
 unsigned int VAR_37 = 0;




 VAR_34 = FUNC_15(VAR_26, VAR_2);
 if (VAR_26 && !VAR_34)
  return -VAR_1;

 FUNC_30(VAR_24);
 FUNC_22(VAR_24);





 VAR_27 = FUNC_2(VAR_24);

 if (!FUNC_19
     (VAR_24, VAR_26, &VAR_30, &VAR_29, ((void*)0), &VAR_32,
     VAR_36, &VAR_37)) {





  VAR_35 = -VAR_0;
  goto out_err_unlock;
 }




 FUNC_7(VAR_24);


 VAR_31 |= 1 << VAR_18;
 VAR_31 |= 1 << VAR_13;
 VAR_31 |= 1 << VAR_15;
 VAR_31 |= 1 << VAR_16;
 VAR_31 |= 1 << VAR_12;
 VAR_31 |= 1 << VAR_19;
 VAR_31 |= 1 << VAR_4;
 VAR_31 |= 1 << VAR_22;
 VAR_31 |= 1 << VAR_17;
 VAR_31 |= 1 << VAR_5;
 VAR_31 |= 1 << VAR_6;
 VAR_31 |= 1 << VAR_10;
 VAR_31 |= 1 << VAR_7;
 VAR_31 |= 1 << VAR_9;
 VAR_31 |= 1 << VAR_20;
 VAR_31 |= 1 << VAR_11;





 FUNC_0(VAR_24)->s_mount_opt =
     (FUNC_0(VAR_24)->
      s_mount_opt & ~VAR_31) | (VAR_30 & VAR_31);

 if (VAR_32 != 0 && VAR_32 != (unsigned int)-1) {
  VAR_33->j_max_commit_age = VAR_32;
  VAR_33->j_max_trans_age = VAR_32;
 } else if (VAR_32 == 0) {

  VAR_33->j_max_commit_age = VAR_33->j_default_max_commit_age;
  VAR_33->j_max_trans_age = VAR_3;
 }

 if (VAR_29) {
  VAR_35 = FUNC_21(VAR_24, VAR_29);
  if (VAR_35 != 0)
   goto out_err_unlock;
 }

 if (*VAR_25 & VAR_23) {
  FUNC_23(VAR_24);
  FUNC_24(VAR_24, *VAR_25);

  if (FUNC_26(VAR_24))

   goto out_ok_unlocked;

  VAR_35 = FUNC_5(VAR_24, -1);
  if (VAR_35 < 0)
   goto out_err;


  if (FUNC_27(VAR_27) == VAR_21
      || FUNC_0(VAR_24)->s_mount_state != VAR_21) {
   goto out_ok_unlocked;
  }

  FUNC_22(VAR_24);

  VAR_35 = FUNC_11(&VAR_28, VAR_24, 10);
  if (VAR_35)
   goto out_err_unlock;


  FUNC_20(VAR_24, FUNC_1(VAR_24), 1);
  FUNC_29(VAR_27, FUNC_0(VAR_24)->s_mount_state);
  FUNC_13(&VAR_28, FUNC_1(VAR_24));
 } else {

  if (!FUNC_26(VAR_24)) {
   FUNC_23(VAR_24);
   FUNC_24(VAR_24, *VAR_25);
   goto out_ok_unlocked;
  }

  if (FUNC_18(VAR_33)) {
   VAR_35 = VAR_33->j_errno;
   goto out_err_unlock;
  }

  FUNC_9(VAR_24, VAR_30);
  FUNC_8(VAR_24, VAR_30);
  FUNC_0(VAR_24)->s_mount_state = FUNC_27(VAR_27);


  VAR_24->s_flags &= ~VAR_23;
  VAR_35 = FUNC_11(&VAR_28, VAR_24, 10);
  if (VAR_35)
   goto out_err_unlock;


  FUNC_20(VAR_24, FUNC_1(VAR_24), 1);
  FUNC_0(VAR_24)->s_mount_state = FUNC_27(VAR_27);
  VAR_24->s_flags &= ~VAR_23;
  FUNC_29(VAR_27, VAR_8);
  if (!FUNC_17(VAR_24))
   FUNC_28(VAR_27, FUNC_25(VAR_27) + 1);

  FUNC_13(&VAR_28, FUNC_1(VAR_24));
  FUNC_0(VAR_24)->s_mount_state = VAR_21;
 }

 FUNC_3(VAR_24)->j_must_wait = 1;
 VAR_35 = FUNC_12(&VAR_28);
 if (VAR_35)
  goto out_err_unlock;

 FUNC_23(VAR_24);
 if (!(*VAR_25 & VAR_23)) {
  FUNC_4(VAR_24, -1);
  FUNC_22(VAR_24);
  FUNC_6(VAR_24);
  FUNC_23(VAR_24);
  FUNC_24(VAR_24, *VAR_25);
 }

out_ok_unlocked:
 return 0;

out_err_unlock:
 FUNC_23(VAR_24);
out_err:
 FUNC_14(VAR_34);
 return VAR_35;
}
