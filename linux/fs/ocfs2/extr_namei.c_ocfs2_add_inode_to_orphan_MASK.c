
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_super {int dummy; } ;
struct ocfs2_dir_lookup_result {int * member_0; } ;
struct ocfs2_dinode {int i_flags; } ;
struct inode {int dummy; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int handle_t ;
struct TYPE_2__ {int ip_blkno; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* FUNC_1 (struct inode*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (struct ocfs2_super*,int *) ;
 int FUNC_10 (struct ocfs2_super*,struct inode*,struct buffer_head*,int ,int ) ;
 int FUNC_11 (struct ocfs2_dir_lookup_result*) ;
 int FUNC_12 (struct inode*,struct buffer_head**,int) ;
 int FUNC_13 (struct inode*,int) ;
 int FUNC_14 (struct ocfs2_super*,int *,struct inode*,struct buffer_head*,char*,struct ocfs2_dir_lookup_result*,struct inode*,int) ;
 int FUNC_15 (struct ocfs2_super*,struct inode**,int ,char*,struct ocfs2_dir_lookup_result*,int) ;
 int * FUNC_16 (struct ocfs2_super*,int ) ;
 int FUNC_17 (struct inode*,struct buffer_head*,int ) ;
 scalar_t__ FUNC_18 (int) ;

int FUNC_19(struct ocfs2_super *VAR_5,
 struct inode *VAR_6)
{
 char VAR_7[VAR_2 + VAR_4 + 1];
 struct inode *VAR_8 = ((void*)0);
 struct ocfs2_dir_lookup_result VAR_9 = { ((void*)0), };
 struct buffer_head *VAR_10 = ((void*)0);
 int VAR_11 = 0;
 handle_t *VAR_12 = ((void*)0);
 struct ocfs2_dinode *VAR_13 = ((void*)0);

 VAR_11 = FUNC_12(VAR_6, &VAR_10, 1);
 if (VAR_11 < 0) {
  FUNC_8(VAR_11);
  goto bail;
 }

 VAR_13 = (struct ocfs2_dinode *) VAR_10->b_data;




 if (FUNC_18(VAR_13->i_flags & FUNC_4(VAR_1))) {
  VAR_11 = FUNC_17(VAR_6, VAR_10, FUNC_5(VAR_6));
  if (VAR_11 < 0) {
   if (VAR_11 != -VAR_0)
    FUNC_8(VAR_11);
   goto bail_unlock_inode;
  }

  VAR_11 = FUNC_10(VAR_5, VAR_6, VAR_10, 0, 0);
  if (VAR_11 < 0) {
   FUNC_8(VAR_11);
   goto bail_unlock_inode;
  }
 }

 VAR_11 = FUNC_15(VAR_5, &VAR_8,
   FUNC_1(VAR_6)->ip_blkno,
   VAR_7,
   &VAR_9,
   1);
 if (VAR_11 < 0) {
  FUNC_8(VAR_11);
  goto bail_unlock_inode;
 }

 VAR_12 = FUNC_16(VAR_5,
   VAR_3);
 if (FUNC_0(VAR_12)) {
  VAR_11 = FUNC_2(VAR_12);
  goto bail_unlock_orphan;
 }

 VAR_11 = FUNC_14(VAR_5, VAR_12, VAR_6, VAR_10, VAR_7,
   &VAR_9, VAR_8, 1);
 if (VAR_11)
  FUNC_8(VAR_11);

 FUNC_9(VAR_5, VAR_12);

bail_unlock_orphan:
 FUNC_13(VAR_8, 1);
 FUNC_6(VAR_8);
 FUNC_7(VAR_8);

 FUNC_11(&VAR_9);

bail_unlock_inode:
 FUNC_13(VAR_6, 1);
 FUNC_3(VAR_10);

bail:
 return VAR_11;
}
