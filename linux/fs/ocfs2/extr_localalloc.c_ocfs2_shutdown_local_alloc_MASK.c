
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_super {scalar_t__ local_alloc_state; struct buffer_head* local_alloc_bh; int osb_la_resmap; int slot_num; scalar_t__ ocfs2_wq; int la_enable_wq; } ;
struct ocfs2_dinode {int dummy; } ;
struct inode {int dummy; } ;
struct buffer_head {int b_size; scalar_t__ b_data; } ;
typedef int handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (struct ocfs2_dinode*) ;
 struct ocfs2_dinode* FUNC_10 (struct ocfs2_dinode*,int ,int ) ;
 int FUNC_11 (int) ;
 int FUNC_12 (struct ocfs2_dinode*) ;
 int FUNC_13 (struct ocfs2_super*,int *) ;
 struct inode* FUNC_14 (struct ocfs2_super*,int ,int ) ;
 int FUNC_15 (struct inode*,struct buffer_head**,int) ;
 int FUNC_16 (struct inode*,int) ;
 int FUNC_17 (int *,int ,struct buffer_head*,int ) ;
 int FUNC_18 (int *,struct buffer_head*) ;
 int FUNC_19 (int *) ;
 int * FUNC_20 (struct ocfs2_super*,int ) ;
 int FUNC_21 (struct ocfs2_super*,int *,struct ocfs2_dinode*,struct inode*,struct buffer_head*) ;

void FUNC_22(struct ocfs2_super *VAR_11)
{
 int VAR_12;
 handle_t *VAR_13;
 struct inode *VAR_14 = ((void*)0);
 struct buffer_head *VAR_15 = ((void*)0);
 struct buffer_head *VAR_16 = ((void*)0);
 struct inode *VAR_17 = ((void*)0);
 struct ocfs2_dinode *VAR_18 = ((void*)0);
 struct ocfs2_dinode *VAR_19 = ((void*)0);

 FUNC_4(&VAR_11->la_enable_wq);
 if (VAR_11->ocfs2_wq)
  FUNC_5(VAR_11->ocfs2_wq);

 if (VAR_11->local_alloc_state == VAR_9)
  goto out;

 VAR_14 =
  FUNC_14(VAR_11,
         VAR_5,
         VAR_11->slot_num);
 if (!VAR_14) {
  VAR_12 = -VAR_1;
  FUNC_11(VAR_12);
  goto out;
 }

 VAR_11->local_alloc_state = VAR_8;

 FUNC_19(&VAR_11->osb_la_resmap);

 VAR_17 = FUNC_14(VAR_11,
          VAR_4,
          VAR_6);
 if (!VAR_17) {
  VAR_12 = -VAR_0;
  FUNC_11(VAR_12);
  goto out;
 }

 FUNC_6(VAR_17);

 VAR_12 = FUNC_15(VAR_17, &VAR_16, 1);
 if (VAR_12 < 0) {
  FUNC_11(VAR_12);
  goto out_mutex;
 }


 VAR_13 = FUNC_20(VAR_11, VAR_10);
 if (FUNC_1(VAR_13)) {
  FUNC_11(FUNC_2(VAR_13));
  VAR_13 = ((void*)0);
  goto out_unlock;
 }

 VAR_15 = VAR_11->local_alloc_bh;
 VAR_19 = (struct ocfs2_dinode *) VAR_15->b_data;

 VAR_18 = FUNC_10(VAR_19, VAR_15->b_size, VAR_3);
 if (!VAR_18) {
  VAR_12 = -VAR_2;
  goto out_commit;
 }

 VAR_12 = FUNC_17(VAR_13, FUNC_0(VAR_14),
      VAR_15, VAR_7);
 if (VAR_12 < 0) {
  FUNC_11(VAR_12);
  goto out_commit;
 }

 FUNC_12(VAR_19);
 FUNC_18(VAR_13, VAR_15);

 FUNC_3(VAR_15);
 VAR_11->local_alloc_bh = ((void*)0);
 VAR_11->local_alloc_state = VAR_9;

 VAR_12 = FUNC_21(VAR_11, VAR_13, VAR_18,
       VAR_17, VAR_16);
 if (VAR_12 < 0)
  FUNC_11(VAR_12);

out_commit:
 FUNC_13(VAR_11, VAR_13);

out_unlock:
 FUNC_3(VAR_16);

 FUNC_16(VAR_17, 1);

out_mutex:
 FUNC_7(VAR_17);
 FUNC_8(VAR_17);

out:
 FUNC_8(VAR_14);

 FUNC_9(VAR_18);
}
