
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_state; int i_size; int i_ctime; int i_mtime; scalar_t__ i_nlink; TYPE_1__* i_sb; struct address_space* i_mapping; } ;
struct ext4_inode_info {int i_data_sem; } ;
struct address_space {int dummy; } ;
typedef int handle_t ;
struct TYPE_2__ {int s_blocksize; } ;


 int VAR_0 ;
 struct ext4_inode_info* FUNC_0 (struct inode*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct inode*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,struct address_space*,int) ;
 unsigned int FUNC_8 (struct inode*) ;
 int FUNC_9 (struct inode*) ;
 int FUNC_10 (struct inode*,int ) ;
 int FUNC_11 (struct inode*) ;
 int FUNC_12 (int *,struct inode*) ;
 int FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (struct inode*) ;
 int FUNC_15 (int *,struct inode*) ;
 int FUNC_16 (struct inode*,int*) ;
 scalar_t__ FUNC_17 (struct inode*) ;
 int * FUNC_18 (struct inode*,int ,unsigned int) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *,struct inode*) ;
 int FUNC_21 (int *,struct inode*) ;
 int FUNC_22 (int *,struct inode*) ;
 int FUNC_23 (struct inode*,int ) ;
 scalar_t__ FUNC_24 (struct inode*,int ) ;
 unsigned int FUNC_25 (struct inode*) ;
 int FUNC_26 (struct inode*) ;
 int FUNC_27 (TYPE_1__*,int ) ;
 int FUNC_28 (struct inode*) ;
 int FUNC_29 (struct inode*) ;
 int FUNC_30 (int *) ;

int FUNC_31(struct inode *VAR_7)
{
 struct ext4_inode_info *VAR_8 = FUNC_0(VAR_7);
 unsigned int VAR_9;
 int VAR_10 = 0;
 handle_t *VAR_11;
 struct address_space *VAR_12 = VAR_7->i_mapping;






 if (!(VAR_7->i_state & (VAR_5|VAR_4)))
  FUNC_4(!FUNC_26(VAR_7));
 FUNC_28(VAR_7);

 if (!FUNC_9(VAR_7))
  return 0;

 FUNC_10(VAR_7, VAR_1);

 if (VAR_7->i_size == 0 && !FUNC_27(VAR_7->i_sb, VAR_6))
  FUNC_23(VAR_7, VAR_3);

 if (FUNC_14(VAR_7)) {
  int VAR_13 = 1;

  VAR_10 = FUNC_16(VAR_7, &VAR_13);
  if (VAR_10)
   return VAR_10;
  if (VAR_13)
   return 0;
 }


 if (VAR_7->i_size & (VAR_7->i_sb->s_blocksize - 1)) {
  if (FUNC_17(VAR_7) < 0)
   return 0;
 }

 if (FUNC_24(VAR_7, VAR_2))
  VAR_9 = FUNC_25(VAR_7);
 else
  VAR_9 = FUNC_8(VAR_7);

 VAR_11 = FUNC_18(VAR_7, VAR_0, VAR_9);
 if (FUNC_1(VAR_11))
  return FUNC_3(VAR_11);

 if (VAR_7->i_size & (VAR_7->i_sb->s_blocksize - 1))
  FUNC_7(VAR_11, VAR_12, VAR_7->i_size);
 VAR_10 = FUNC_21(VAR_11, VAR_7);
 if (VAR_10)
  goto out_stop;

 FUNC_6(&FUNC_0(VAR_7)->i_data_sem);

 FUNC_11(VAR_7);

 if (FUNC_24(VAR_7, VAR_2))
  VAR_10 = FUNC_12(VAR_11, VAR_7);
 else
  FUNC_15(VAR_11, VAR_7);

 FUNC_30(&VAR_8->i_data_sem);
 if (VAR_10)
  goto out_stop;

 if (FUNC_2(VAR_7))
  FUNC_13(VAR_11);

out_stop:







 if (VAR_7->i_nlink)
  FUNC_22(VAR_11, VAR_7);

 VAR_7->i_mtime = VAR_7->i_ctime = FUNC_5(VAR_7);
 FUNC_20(VAR_11, VAR_7);
 FUNC_19(VAR_11);

 FUNC_29(VAR_7);
 return VAR_10;
}
