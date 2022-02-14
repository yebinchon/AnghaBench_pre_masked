
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_sb; int i_mapping; } ;
struct ext4_sb_info {int s_journal_flag_rwsem; } ;
typedef int journal_t ;
typedef int handle_t ;
struct TYPE_2__ {int i_mmap_sem; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_2 ;
 int * FUNC_1 (struct inode*) ;
 struct ext4_sb_info* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct inode*,int ) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (struct inode*,int ,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,struct inode*) ;
 int FUNC_11 (struct inode*) ;
 int FUNC_12 (struct inode*,int ) ;
 int FUNC_13 (int ,int) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (struct inode*) ;
 scalar_t__ FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int *) ;

int FUNC_23(struct inode *VAR_3, int VAR_4)
{
 journal_t *VAR_5;
 handle_t *VAR_6;
 int VAR_7;
 struct ext4_sb_info *VAR_8 = FUNC_2(VAR_3->i_sb);
 VAR_5 = FUNC_1(VAR_3);
 if (!VAR_5)
  return 0;
 if (FUNC_16(VAR_5))
  return -VAR_0;


 FUNC_15(VAR_3);
 if (VAR_4) {
  FUNC_5(&FUNC_0(VAR_3)->i_mmap_sem);
  VAR_7 = FUNC_14(VAR_3->i_mapping);
  if (VAR_7 < 0) {
   FUNC_22(&FUNC_0(VAR_3)->i_mmap_sem);
   return VAR_7;
  }
 }

 FUNC_20(&VAR_8->s_journal_flag_rwsem);
 FUNC_18(VAR_5);
 if (VAR_4)
  FUNC_12(VAR_3, VAR_2);
 else {
  VAR_7 = FUNC_17(VAR_5);
  if (VAR_7 < 0) {
   FUNC_19(VAR_5);
   FUNC_21(&VAR_8->s_journal_flag_rwsem);
   return VAR_7;
  }
  FUNC_6(VAR_3, VAR_2);
 }
 FUNC_11(VAR_3);

 FUNC_19(VAR_5);
 FUNC_21(&VAR_8->s_journal_flag_rwsem);

 if (VAR_4)
  FUNC_22(&FUNC_0(VAR_3)->i_mmap_sem);



 VAR_6 = FUNC_8(VAR_3, VAR_1, 1);
 if (FUNC_3(VAR_6))
  return FUNC_4(VAR_6);

 VAR_7 = FUNC_10(VAR_6, VAR_3);
 FUNC_7(VAR_6);
 FUNC_9(VAR_6);
 FUNC_13(VAR_3->i_sb, VAR_7);

 return VAR_7;
}
