
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct super_block {int dummy; } ;
struct ocfs2_super {int sb; int fs_generation; } ;
struct ocfs2_find_inode_args {int fi_flags; scalar_t__ fi_blkno; } ;
struct TYPE_4__ {int i_rdev; } ;
struct TYPE_5__ {TYPE_1__ dev1; } ;
struct ocfs2_dinode {int i_flags; int i_blkno; TYPE_2__ id1; int i_mode; } ;
struct inode {int i_rdev; struct super_block* i_sb; } ;
struct buffer_head {scalar_t__ b_data; } ;
struct TYPE_6__ {int ip_open_lockres; int ip_inode_lockres; scalar_t__ ip_blkno; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct inode*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_3__* FUNC_2 (struct inode*) ;
 int VAR_6 ;
 int VAR_7 ;
 struct ocfs2_super* FUNC_3 (struct super_block*) ;
 int VAR_8 ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct buffer_head*) ;
 scalar_t__ FUNC_7 (struct buffer_head*) ;
 int FUNC_8 (struct buffer_head*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 (struct inode*) ;
 int FUNC_14 (int,char*,unsigned long long) ;
 int FUNC_15 (int) ;
 int FUNC_16 (struct inode*,struct buffer_head**,int ,int) ;
 int FUNC_17 (int ,struct buffer_head*) ;
 int FUNC_18 (int ,struct buffer_head*) ;
 int FUNC_19 (struct inode*,int *,int) ;
 int FUNC_20 (int *,int ,int ,struct inode*) ;
 int FUNC_21 (struct inode*,int) ;
 int FUNC_22 (struct ocfs2_super*) ;
 int FUNC_23 (struct inode*) ;
 int FUNC_24 (struct inode*,struct ocfs2_dinode*,int ) ;
 int FUNC_25 (struct ocfs2_super*,scalar_t__,int,struct buffer_head**) ;
 int FUNC_26 (struct inode*,struct buffer_head**,int ) ;
 int FUNC_27 (struct inode*,int ) ;
 int FUNC_28 (int ,struct buffer_head*) ;
 int FUNC_29 (struct ocfs2_super*,struct buffer_head*,int ) ;
 int FUNC_30 (unsigned long long,int) ;

__attribute__((used)) static int FUNC_31(struct inode *VAR_9,
       struct ocfs2_find_inode_args *VAR_10)
{
 struct super_block *VAR_11;
 struct ocfs2_super *VAR_12;
 struct ocfs2_dinode *VAR_13;
 struct buffer_head *VAR_14 = ((void*)0);
 int VAR_15, VAR_16, VAR_17 = 0;
 u32 VAR_18 = 0;

 VAR_15 = -VAR_0;
 VAR_11 = VAR_9->i_sb;
 VAR_12 = FUNC_3(VAR_11);
 VAR_16 = !(VAR_10->fi_flags & VAR_5)
  && !(VAR_10->fi_flags & VAR_4)
  && !FUNC_22(VAR_12);

 FUNC_30(
  (unsigned long long)FUNC_2(VAR_9)->ip_blkno, VAR_16);
 if (VAR_10->fi_flags & VAR_5)
  VAR_18 = VAR_12->fs_generation;

 FUNC_20(&FUNC_2(VAR_9)->ip_inode_lockres,
      VAR_6,
      VAR_18, VAR_9);

 FUNC_20(&FUNC_2(VAR_9)->ip_open_lockres,
      VAR_7,
      0, VAR_9);

 if (VAR_16) {
  VAR_15 = FUNC_23(VAR_9);
  if (VAR_15) {
   FUNC_13(VAR_9);
   FUNC_15(VAR_15);
   return VAR_15;
  }
  VAR_15 = FUNC_19(VAR_9, ((void*)0), VAR_17);
  if (VAR_15) {
   FUNC_13(VAR_9);
   FUNC_15(VAR_15);
   return VAR_15;
  }
 }

 if (VAR_10->fi_flags & VAR_4) {
  VAR_15 = FUNC_27(VAR_9, 0);
  if (VAR_15) {
   FUNC_13(VAR_9);
   return VAR_15;
  }
 }

 if (VAR_16) {
  if (VAR_10->fi_flags & VAR_2)
   VAR_15 = FUNC_16(VAR_9,
      &VAR_14, VAR_1, 0);
  else if (VAR_10->fi_flags & VAR_3)
   VAR_15 = FUNC_16(VAR_9,
      &VAR_14, VAR_1, 1);
  else
   VAR_15 = FUNC_26(VAR_9,
      &VAR_14, VAR_1);
 } else {
  VAR_15 = FUNC_25(VAR_12, VAR_10->fi_blkno, 1, &VAR_14);




  if (!VAR_15 && !FUNC_8(VAR_14)) {
   if (VAR_10->fi_flags & VAR_2)
    VAR_15 = FUNC_18(
        VAR_12->sb, VAR_14);
   else if (VAR_10->fi_flags & VAR_3)
    VAR_15 = FUNC_17(
        VAR_12->sb, VAR_14);
   else
    VAR_15 = FUNC_28(
        VAR_12->sb, VAR_14);
  }
 }
 if (VAR_15 < 0) {
  FUNC_15(VAR_15);
  goto bail;
 }

 VAR_15 = -VAR_0;
 VAR_13 = (struct ocfs2_dinode *) VAR_14->b_data;






 FUNC_14(!!(VAR_13->i_flags & FUNC_9(VAR_8)) !=
   !!(VAR_10->fi_flags & VAR_5),
   "Inode %llu: system file state is ambiguous\n",
   (unsigned long long)VAR_10->fi_blkno);

 if (FUNC_5(FUNC_11(VAR_13->i_mode)) ||
     FUNC_4(FUNC_11(VAR_13->i_mode)))
  VAR_9->i_rdev = FUNC_10(FUNC_12(VAR_13->id1.dev1.i_rdev));

 FUNC_24(VAR_9, VAR_13, 0);

 FUNC_0(VAR_10->fi_blkno != FUNC_12(VAR_13->i_blkno));

 if (FUNC_7(VAR_14) && !FUNC_8(VAR_14)) {
  if (VAR_16) {
   FUNC_21(VAR_9, VAR_17);
   VAR_17 = 1;
   FUNC_19(VAR_9, ((void*)0), VAR_17);
  }
  VAR_15 = FUNC_29(VAR_12, VAR_14, FUNC_1(VAR_9));
  if (VAR_15 < 0) {
   FUNC_15(VAR_15);
   goto bail;
  }
 }

 VAR_15 = 0;

bail:
 if (VAR_16)
  FUNC_21(VAR_9, VAR_17);

 if (VAR_15 < 0)
  FUNC_13(VAR_9);

 FUNC_6(VAR_14);

 return VAR_15;
}
