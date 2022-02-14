
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_super {int dummy; } ;
struct ocfs2_dinode {int i_refcount_loc; } ;
struct ocfs2_cached_dealloc_ctxt {int dummy; } ;
struct inode {int i_sb; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef scalar_t__ loff_t ;
struct TYPE_2__ {int ip_dyn_features; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_1 ;
 struct ocfs2_super* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct inode*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (struct inode*,struct buffer_head*) ;
 scalar_t__ FUNC_6 (struct inode*,struct buffer_head*) ;
 scalar_t__ FUNC_7 (struct ocfs2_cached_dealloc_ctxt*) ;
 scalar_t__ FUNC_8 (struct inode*,struct buffer_head*,struct inode*,struct buffer_head*) ;
 int FUNC_9 (struct ocfs2_cached_dealloc_ctxt*) ;
 scalar_t__ FUNC_10 (struct inode*) ;
 scalar_t__ FUNC_11 (struct inode*,struct buffer_head*,scalar_t__,struct inode*,struct buffer_head*,scalar_t__,scalar_t__,struct ocfs2_cached_dealloc_ctxt*) ;
 int FUNC_12 (struct ocfs2_super*,struct ocfs2_cached_dealloc_ctxt*) ;
 int FUNC_13 (struct ocfs2_super*,int) ;
 scalar_t__ FUNC_14 (struct inode*,struct buffer_head*,scalar_t__) ;

loff_t FUNC_15(struct inode *VAR_2,
      struct buffer_head *VAR_3,
      loff_t VAR_4,
      struct inode *VAR_5,
      struct buffer_head *VAR_6,
      loff_t VAR_7,
      loff_t VAR_8)
{
 struct ocfs2_cached_dealloc_ctxt VAR_9;
 struct ocfs2_super *VAR_10;
 struct ocfs2_dinode *VAR_11;
 struct ocfs2_dinode *VAR_12;
 loff_t VAR_13;

 VAR_10 = FUNC_1(VAR_2->i_sb);
 VAR_11 = (struct ocfs2_dinode *)VAR_3->b_data;
 VAR_12 = (struct ocfs2_dinode *)VAR_6->b_data;
 FUNC_9(&VAR_9);





 if (VAR_4 == VAR_7 && VAR_4 == 0 && VAR_8 == FUNC_2(VAR_2) &&
     FUNC_2(VAR_5) <= VAR_8 &&
     (FUNC_0(VAR_2)->ip_dyn_features & VAR_1)) {
  VAR_13 = FUNC_8(VAR_2, VAR_3, VAR_5, VAR_6);
  if (VAR_13)
   FUNC_4(VAR_13);
  goto out;
 }






 VAR_13 = -VAR_0;
 if (FUNC_10(VAR_2) &&
     FUNC_10(VAR_5) &&
     FUNC_3(VAR_11->i_refcount_loc) !=
     FUNC_3(VAR_12->i_refcount_loc))
  goto out;


 if (!FUNC_10(VAR_2) &&
     !FUNC_10(VAR_5)) {
  VAR_13 = FUNC_6(VAR_2, VAR_3);
  if (VAR_13) {
   FUNC_4(VAR_13);
   goto out;
  }
 }


 if (!FUNC_10(VAR_2)) {
  VAR_13 = FUNC_14(VAR_2, VAR_3,
           FUNC_3(VAR_12->i_refcount_loc));
  if (VAR_13) {
   FUNC_4(VAR_13);
   goto out;
  }
 }
 if (!FUNC_10(VAR_5)) {
  VAR_13 = FUNC_14(VAR_5, VAR_6,
           FUNC_3(VAR_11->i_refcount_loc));
  if (VAR_13) {
   FUNC_4(VAR_13);
   goto out;
  }
 }


 if (FUNC_0(VAR_5)->ip_dyn_features & VAR_1) {
  VAR_13 = FUNC_5(VAR_5, VAR_6);
  if (VAR_13) {
   FUNC_4(VAR_13);
   goto out;
  }
 }


 VAR_13 = FUNC_11(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6,
      VAR_7, VAR_8, &VAR_9);
 if (VAR_13 < 0) {
  FUNC_4(VAR_13);
  goto out;
 }

out:
 if (FUNC_7(&VAR_9)) {
  FUNC_13(VAR_10, 1);
  FUNC_12(VAR_10, &VAR_9);
 }

 return VAR_13;
}
