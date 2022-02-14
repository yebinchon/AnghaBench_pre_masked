
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ocfs2_super {int dummy; } ;
struct ocfs2_move_extents_context {struct inode* inode; } ;
struct ocfs2_dinode {int i_ctime_nsec; int i_ctime; } ;
struct TYPE_3__ {int tv_nsec; int tv_sec; } ;
struct inode {TYPE_1__ i_ctime; int i_sb; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int handle_t ;
struct TYPE_4__ {int ip_alloc_sem; } ;


 int VAR_0 ;
 int FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (int *) ;
 TYPE_2__* FUNC_2 (struct inode*) ;
 int VAR_1 ;
 int VAR_2 ;
 struct ocfs2_super* FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct buffer_head*,struct ocfs2_move_extents_context*) ;
 int FUNC_6 (struct buffer_head*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 TYPE_1__ FUNC_9 (struct inode*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct inode*) ;
 int FUNC_12 (struct inode*) ;
 int FUNC_13 (int) ;
 int FUNC_14 (struct ocfs2_super*,int *) ;
 int FUNC_15 (struct inode*,struct buffer_head**,int) ;
 int FUNC_16 (struct inode*,int) ;
 scalar_t__ FUNC_17 (struct ocfs2_super*) ;
 scalar_t__ FUNC_18 (struct ocfs2_super*) ;
 int FUNC_19 (int *,int ,struct buffer_head*,int ) ;
 int FUNC_20 (int *,struct buffer_head*) ;
 int FUNC_21 (struct inode*,int) ;
 int FUNC_22 (struct inode*,int) ;
 int * FUNC_23 (struct ocfs2_super*,int ) ;
 int FUNC_24 (int *,struct inode*,int ) ;
 int FUNC_25 (int *) ;

__attribute__((used)) static int FUNC_26(struct ocfs2_move_extents_context *VAR_3)
{
 int VAR_4;
 handle_t *VAR_5;
 struct inode *VAR_6 = VAR_3->inode;
 struct ocfs2_dinode *VAR_7;
 struct buffer_head *VAR_8 = ((void*)0);
 struct ocfs2_super *VAR_9 = FUNC_3(VAR_6->i_sb);

 if (FUNC_17(VAR_9) || FUNC_18(VAR_9))
  return -VAR_0;

 FUNC_11(VAR_6);




 VAR_4 = FUNC_21(VAR_6, 1);
 if (VAR_4) {
  FUNC_13(VAR_4);
  goto out;
 }

 VAR_4 = FUNC_15(VAR_6, &VAR_8, 1);
 if (VAR_4) {
  FUNC_13(VAR_4);
  goto out_rw_unlock;
 }




 FUNC_10(&FUNC_2(VAR_6)->ip_alloc_sem);

 VAR_4 = FUNC_5(VAR_8, VAR_3);

 FUNC_25(&FUNC_2(VAR_6)->ip_alloc_sem);
 if (VAR_4) {
  FUNC_13(VAR_4);
  goto out_inode_unlock;
 }




 VAR_5 = FUNC_23(VAR_9, VAR_1);
 if (FUNC_1(VAR_5)) {
  VAR_4 = FUNC_4(VAR_5);
  FUNC_13(VAR_4);
  goto out_inode_unlock;
 }

 VAR_4 = FUNC_19(VAR_5, FUNC_0(VAR_6), VAR_8,
      VAR_2);
 if (VAR_4) {
  FUNC_13(VAR_4);
  goto out_commit;
 }

 VAR_7 = (struct ocfs2_dinode *)VAR_8->b_data;
 VAR_6->i_ctime = FUNC_9(VAR_6);
 VAR_7->i_ctime = FUNC_8(VAR_6->i_ctime.tv_sec);
 VAR_7->i_ctime_nsec = FUNC_7(VAR_6->i_ctime.tv_nsec);
 FUNC_24(VAR_5, VAR_6, 0);

 FUNC_20(VAR_5, VAR_8);

out_commit:
 FUNC_14(VAR_9, VAR_5);

out_inode_unlock:
 FUNC_6(VAR_8);
 FUNC_16(VAR_6, 1);
out_rw_unlock:
 FUNC_22(VAR_6, 1);
out:
 FUNC_12(VAR_6);

 return VAR_4;
}
