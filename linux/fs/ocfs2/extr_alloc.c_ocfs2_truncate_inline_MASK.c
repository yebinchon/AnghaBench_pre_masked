
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ocfs2_super {int s_feature_incompat; } ;
struct ocfs2_inline_data {scalar_t__ id_data; } ;
struct TYPE_4__ {struct ocfs2_inline_data i_data; } ;
struct ocfs2_dinode {int i_mtime_nsec; int i_ctime_nsec; void* i_mtime; void* i_ctime; void* i_size; int i_dyn_features; TYPE_1__ id2; } ;
struct TYPE_5__ {unsigned int tv_sec; int tv_nsec; } ;
struct inode {TYPE_2__ i_ctime; TYPE_2__ i_mtime; int i_blocks; int i_sb; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int handle_t ;
struct TYPE_6__ {int ip_dyn_features; scalar_t__ ip_blkno; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (int *) ;
 TYPE_3__* FUNC_3 (struct inode*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct ocfs2_super* FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 void* FUNC_7 (unsigned int) ;
 TYPE_2__ FUNC_8 (struct inode*) ;
 unsigned int FUNC_9 (struct inode*) ;
 int FUNC_10 (struct inode*,unsigned int) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (scalar_t__,int ,unsigned int) ;
 int FUNC_13 (int) ;
 int FUNC_14 (struct ocfs2_super*,int *) ;
 int FUNC_15 (int ,char*,unsigned long long,int,int,int ) ;
 int FUNC_16 (struct inode*) ;
 int FUNC_17 (int *,int ,struct buffer_head*,int ) ;
 int FUNC_18 (int *,struct buffer_head*) ;
 int * FUNC_19 (struct ocfs2_super*,int ) ;
 int FUNC_20 (struct ocfs2_super*) ;
 int FUNC_21 (int *,struct inode*,int) ;

int FUNC_22(struct inode *VAR_4, struct buffer_head *VAR_5,
     unsigned int VAR_6, unsigned int VAR_7, int VAR_8)
{
 int VAR_9;
 unsigned int VAR_10;
 handle_t *VAR_11;
 struct ocfs2_super *VAR_12 = FUNC_4(VAR_4->i_sb);
 struct ocfs2_dinode *VAR_13 = (struct ocfs2_dinode *)VAR_5->b_data;
 struct ocfs2_inline_data *VAR_14 = &VAR_13->id2.i_data;

 if (VAR_7 > FUNC_9(VAR_4))
  VAR_7 = FUNC_9(VAR_4);

 FUNC_0(VAR_6 > VAR_7);

 if (!(FUNC_3(VAR_4)->ip_dyn_features & VAR_1) ||
     !(FUNC_11(VAR_13->i_dyn_features) & VAR_1) ||
     !FUNC_20(VAR_12)) {
  FUNC_15(VAR_4->i_sb,
       "Inline data flags for inode %llu don't agree! Disk: 0x%x, Memory: 0x%x, Superblock: 0x%x\n",
       (unsigned long long)FUNC_3(VAR_4)->ip_blkno,
       FUNC_11(VAR_13->i_dyn_features),
       FUNC_3(VAR_4)->ip_dyn_features,
       VAR_12->s_feature_incompat);
  VAR_9 = -VAR_0;
  goto out;
 }

 VAR_11 = FUNC_19(VAR_12, VAR_2);
 if (FUNC_2(VAR_11)) {
  VAR_9 = FUNC_5(VAR_11);
  FUNC_13(VAR_9);
  goto out;
 }

 VAR_9 = FUNC_17(VAR_11, FUNC_1(VAR_4), VAR_5,
          VAR_3);
 if (VAR_9) {
  FUNC_13(VAR_9);
  goto out_commit;
 }

 VAR_10 = VAR_7 - VAR_6;
 FUNC_12(VAR_14->id_data + VAR_6, 0, VAR_10);







 if (VAR_8) {
  FUNC_10(VAR_4, VAR_6);
  VAR_13->i_size = FUNC_7(VAR_6);
 }

 VAR_4->i_blocks = FUNC_16(VAR_4);
 VAR_4->i_ctime = VAR_4->i_mtime = FUNC_8(VAR_4);

 VAR_13->i_ctime = VAR_13->i_mtime = FUNC_7(VAR_4->i_ctime.tv_sec);
 VAR_13->i_ctime_nsec = VAR_13->i_mtime_nsec = FUNC_6(VAR_4->i_ctime.tv_nsec);

 FUNC_21(VAR_11, VAR_4, 1);
 FUNC_18(VAR_11, VAR_5);

out_commit:
 FUNC_14(VAR_12, VAR_11);

out:
 return VAR_9;
}
