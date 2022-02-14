
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct inode {struct super_block* i_sb; int i_ctime; int i_mapping; int i_mode; } ;
struct ext4_inode_info {unsigned int i_flags; } ;
struct ext4_iloc {int dummy; } ;
typedef int handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 int VAR_11 ;
 struct ext4_inode_info* FUNC_0 (struct inode*) ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct inode*) ;
 scalar_t__ FUNC_3 (struct inode*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (struct inode*,unsigned int) ;
 int FUNC_10 (struct inode*,unsigned int) ;
 int FUNC_11 (struct inode*) ;
 int FUNC_12 (struct inode*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct super_block*) ;
 int FUNC_15 (struct inode*) ;
 scalar_t__ FUNC_16 (struct inode*) ;
 int * FUNC_17 (struct inode*,int ,int) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *,struct inode*,struct ext4_iloc*) ;
 int FUNC_20 (int *,struct inode*,struct ext4_iloc*) ;
 int FUNC_21 (struct inode*,unsigned int) ;
 int FUNC_22 (struct inode*) ;
 int FUNC_23 (struct inode*) ;
 int FUNC_24 (int ) ;
 int FUNC_25 (struct inode*) ;
 scalar_t__ FUNC_26 (struct super_block*,int ) ;
 int FUNC_27 (struct inode*,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_28(struct inode *VAR_14,
          unsigned int VAR_15)
{
 struct ext4_inode_info *VAR_16 = FUNC_0(VAR_14);
 handle_t *VAR_17 = ((void*)0);
 int VAR_18 = -VAR_6, VAR_19 = 0;
 struct ext4_iloc VAR_20;
 unsigned int VAR_21, VAR_22, VAR_23;
 unsigned int VAR_24;
 struct super_block *VAR_25 = VAR_14->i_sb;


 if (FUNC_16(VAR_14))
  goto flags_out;

 VAR_21 = VAR_16->i_flags;


 VAR_24 = VAR_15 & VAR_13;

 VAR_18 = FUNC_27(VAR_14, VAR_21, VAR_15);
 if (VAR_18)
  goto flags_out;





 if ((VAR_24 ^ VAR_21) & (VAR_13)) {
  if (!FUNC_7(VAR_0))
   goto flags_out;
 }
 if ((VAR_15 ^ VAR_21) & VAR_9)
  VAR_19 = 1;

 if (VAR_15 & VAR_8) {

  if (!(VAR_21 & VAR_8)) {
   VAR_18 = -VAR_5;
   goto flags_out;
  }
 } else if (VAR_21 & VAR_8) {
  VAR_18 = FUNC_23(VAR_14);
  if (VAR_18)
   goto flags_out;
 }

 if ((VAR_15 ^ VAR_21) & VAR_7) {
  if (!FUNC_14(VAR_25)) {
   VAR_18 = -VAR_5;
   goto flags_out;
  }

  if (!FUNC_5(VAR_14->i_mode)) {
   VAR_18 = -VAR_3;
   goto flags_out;
  }

  if (!FUNC_11(VAR_14)) {
   VAR_18 = -VAR_4;
   goto flags_out;
  }
 }







 if (FUNC_6(VAR_14->i_mode) && !FUNC_2(VAR_14) &&
     (VAR_15 & VAR_12)) {
  FUNC_25(VAR_14);
  VAR_18 = FUNC_24(VAR_14->i_mapping);
  if (VAR_18)
   goto flags_out;
 }

 VAR_17 = FUNC_17(VAR_14, VAR_11, 1);
 if (FUNC_1(VAR_17)) {
  VAR_18 = FUNC_4(VAR_17);
  goto flags_out;
 }
 if (FUNC_3(VAR_14))
  FUNC_13(VAR_17);
 VAR_18 = FUNC_20(VAR_17, VAR_14, &VAR_20);
 if (VAR_18)
  goto flags_err;

 for (VAR_23 = 0, VAR_22 = 1; VAR_23 < 32; VAR_23++, VAR_22 <<= 1) {
  if (!(VAR_22 & VAR_10))
   continue;

  if (VAR_22 == VAR_13 || VAR_22 == VAR_9)
   continue;
  if (VAR_22 & VAR_15)
   FUNC_21(VAR_14, VAR_23);
  else
   FUNC_10(VAR_14, VAR_23);
 }

 FUNC_22(VAR_14);
 VAR_14->i_ctime = FUNC_8(VAR_14);

 VAR_18 = FUNC_19(VAR_17, VAR_14, &VAR_20);
flags_err:
 FUNC_18(VAR_17);
 if (VAR_18)
  goto flags_out;

 if ((VAR_24 ^ VAR_21) & (VAR_13)) {




  if (FUNC_26(VAR_14->i_sb, VAR_1)) {
   VAR_18 = -VAR_2;
   goto flags_out;
  }

  VAR_18 = FUNC_9(VAR_14, VAR_24);
  if (VAR_18)
   goto flags_out;
 }
 if (VAR_19) {
  if (VAR_15 & VAR_9)
   VAR_18 = FUNC_12(VAR_14);
  else
   VAR_18 = FUNC_15(VAR_14);
 }

flags_out:
 return VAR_18;
}
