
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct inode {int i_state; int i_rdev; int i_mode; int * i_op; TYPE_1__* i_mapping; int * i_fop; } ;
struct f2fs_sb_info {int dummy; } ;
struct TYPE_2__ {int * a_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct inode* FUNC_0 (int) ;
 unsigned long FUNC_1 (struct f2fs_sb_info*) ;
 unsigned long FUNC_2 (struct f2fs_sb_info*) ;
 struct f2fs_sb_info* FUNC_3 (struct super_block*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (struct inode*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_12 (struct inode*) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_13 (struct inode*) ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_14 (struct inode*) ;
 int FUNC_15 (struct inode*) ;
 struct inode* FUNC_16 (struct super_block*,unsigned long) ;
 int FUNC_17 (struct inode*,int ,int ) ;
 int FUNC_18 (struct inode*) ;
 int FUNC_19 (TYPE_1__*,int ) ;
 int FUNC_20 (struct inode*) ;
 int FUNC_21 (struct inode*,int) ;
 int FUNC_22 (struct inode*) ;

struct inode *FUNC_23(struct super_block *VAR_14, unsigned long VAR_15)
{
 struct f2fs_sb_info *VAR_16 = FUNC_3(VAR_14);
 struct inode *VAR_17;
 int VAR_18 = 0;

 VAR_17 = FUNC_16(VAR_14, VAR_15);
 if (!VAR_17)
  return FUNC_0(-VAR_1);

 if (!(VAR_17->i_state & VAR_3)) {
  FUNC_20(VAR_17);
  return VAR_17;
 }
 if (VAR_15 == FUNC_2(VAR_16) || VAR_15 == FUNC_1(VAR_16))
  goto make_now;

 VAR_18 = FUNC_11(VAR_17);
 if (VAR_18)
  goto bad_inode;
make_now:
 if (VAR_15 == FUNC_2(VAR_16)) {
  VAR_17->i_mapping->a_ops = &VAR_11;
  FUNC_19(VAR_17->i_mapping, VAR_2);
 } else if (VAR_15 == FUNC_1(VAR_16)) {
  VAR_17->i_mapping->a_ops = &VAR_10;
  FUNC_19(VAR_17->i_mapping, VAR_2);
 } else if (FUNC_9(VAR_17->i_mode)) {
  VAR_17->i_op = &VAR_8;
  VAR_17->i_fop = &VAR_9;
  VAR_17->i_mapping->a_ops = &VAR_4;
 } else if (FUNC_6(VAR_17->i_mode)) {
  VAR_17->i_op = &VAR_5;
  VAR_17->i_fop = &VAR_6;
  VAR_17->i_mapping->a_ops = &VAR_4;
  FUNC_18(VAR_17);
 } else if (FUNC_8(VAR_17->i_mode)) {
  if (FUNC_14(VAR_17))
   VAR_17->i_op = &VAR_7;
  else
   VAR_17->i_op = &VAR_13;
  FUNC_18(VAR_17);
  VAR_17->i_mapping->a_ops = &VAR_4;
 } else if (FUNC_5(VAR_17->i_mode) || FUNC_4(VAR_17->i_mode) ||
   FUNC_7(VAR_17->i_mode) || FUNC_10(VAR_17->i_mode)) {
  VAR_17->i_op = &VAR_12;
  FUNC_17(VAR_17, VAR_17->i_mode, VAR_17->i_rdev);
 } else {
  VAR_18 = -VAR_0;
  goto bad_inode;
 }
 FUNC_13(VAR_17);
 FUNC_22(VAR_17);
 FUNC_20(VAR_17);
 return VAR_17;

bad_inode:
 FUNC_12(VAR_17);
 FUNC_15(VAR_17);
 FUNC_21(VAR_17, VAR_18);
 return FUNC_0(VAR_18);
}
