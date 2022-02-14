
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct ocfs2_super {int sb; } ;
struct ocfs2_extent_tree {int dummy; } ;
struct TYPE_3__ {int i_list; } ;
struct ocfs2_dinode {int i_size; int i_clusters; TYPE_1__ id2; } ;
struct ocfs2_alloc_context {int dummy; } ;
struct inode {int i_sb; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int handle_t ;
typedef enum ocfs2_alloc_restarted { ____Placeholder_ocfs2_alloc_restarted } ocfs2_alloc_restarted ;
struct TYPE_4__ {scalar_t__ ip_clusters; scalar_t__ ip_blkno; int ip_lock; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (int *) ;
 TYPE_2__* FUNC_3 (struct inode*) ;
 int VAR_3 ;
 struct ocfs2_super* FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (struct buffer_head*) ;
 int FUNC_7 (struct inode*,int ) ;
 int FUNC_8 (struct inode*,int ) ;
 scalar_t__ FUNC_9 (struct inode*) ;
 scalar_t__ FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (int) ;
 int FUNC_13 (struct ocfs2_super*,struct inode*,scalar_t__*,scalar_t__,int,struct buffer_head*,int *,struct ocfs2_alloc_context*,struct ocfs2_alloc_context*,int*) ;
 int FUNC_14 (int *,int) ;
 int FUNC_15 (int ,int *) ;
 int FUNC_16 (int ,scalar_t__) ;
 int FUNC_17 (struct ocfs2_super*,int *) ;
 int FUNC_18 (struct ocfs2_alloc_context*) ;
 int FUNC_19 (struct ocfs2_extent_tree*,int ,struct buffer_head*) ;
 int FUNC_20 (int *,int ,struct buffer_head*,int ) ;
 int FUNC_21 (int *,struct buffer_head*) ;
 int FUNC_22 (struct inode*,struct ocfs2_extent_tree*,scalar_t__,int ,struct ocfs2_alloc_context**,struct ocfs2_alloc_context**) ;
 int FUNC_23 (struct inode*,struct buffer_head**) ;
 int FUNC_24 (struct ocfs2_super*) ;
 int * FUNC_25 (struct ocfs2_super*,int) ;
 int FUNC_26 (int *,struct inode*,int) ;
 int FUNC_27 (int *) ;
 int FUNC_28 (int *) ;
 int FUNC_29 (unsigned long long,unsigned long long,scalar_t__,scalar_t__,int,int) ;
 int FUNC_30 (scalar_t__,scalar_t__,unsigned long long,scalar_t__,unsigned long long) ;

__attribute__((used)) static int FUNC_31(struct inode *VAR_7, u32 VAR_8,
       u32 VAR_9, int VAR_10)
{
 int VAR_11 = 0;
 int VAR_12 = 0;
 int VAR_13;
 u32 VAR_14;
 struct buffer_head *VAR_15 = ((void*)0);
 struct ocfs2_dinode *VAR_16 = ((void*)0);
 handle_t *VAR_17 = ((void*)0);
 struct ocfs2_alloc_context *VAR_18 = ((void*)0);
 struct ocfs2_alloc_context *VAR_19 = ((void*)0);
 enum ocfs2_alloc_restarted VAR_20 = VAR_5;
 struct ocfs2_super *VAR_21 = FUNC_4(VAR_7->i_sb);
 struct ocfs2_extent_tree VAR_22;
 int VAR_23 = 0;





 FUNC_0(VAR_10 && !FUNC_24(VAR_21));

 VAR_11 = FUNC_23(VAR_7, &VAR_15);
 if (VAR_11 < 0) {
  FUNC_12(VAR_11);
  goto leave;
 }
 VAR_16 = (struct ocfs2_dinode *) VAR_15->b_data;

restart_all:
 FUNC_0(FUNC_10(VAR_16->i_clusters) != FUNC_3(VAR_7)->ip_clusters);

 FUNC_19(&VAR_22, FUNC_1(VAR_7), VAR_15);
 VAR_11 = FUNC_22(VAR_7, &VAR_22, VAR_9, 0,
           &VAR_18, &VAR_19);
 if (VAR_11) {
  FUNC_12(VAR_11);
  goto leave;
 }

 VAR_13 = FUNC_15(VAR_21->sb, &VAR_16->id2.i_list);
 VAR_17 = FUNC_25(VAR_21, VAR_13);
 if (FUNC_2(VAR_17)) {
  VAR_11 = FUNC_5(VAR_17);
  VAR_17 = ((void*)0);
  FUNC_12(VAR_11);
  goto leave;
 }

restarted_transaction:
 FUNC_29(
  (unsigned long long)FUNC_3(VAR_7)->ip_blkno,
  (unsigned long long)FUNC_9(VAR_7),
  FUNC_10(VAR_16->i_clusters), VAR_9,
  VAR_20, VAR_12);

 VAR_11 = FUNC_7(VAR_7,
   FUNC_16(VAR_21->sb, VAR_9));
 if (VAR_11)
  goto leave;
 VAR_23 = 1;




 VAR_11 = FUNC_20(VAR_17, FUNC_1(VAR_7), VAR_15,
      VAR_3);
 if (VAR_11 < 0) {
  FUNC_12(VAR_11);
  goto leave;
 }

 VAR_14 = FUNC_3(VAR_7)->ip_clusters;

 VAR_11 = FUNC_13(VAR_21,
          VAR_7,
          &VAR_8,
          VAR_9,
          VAR_10,
          VAR_15,
          VAR_17,
          VAR_18,
          VAR_19,
          &VAR_20);
 if ((VAR_11 < 0) && (VAR_11 != -VAR_0)) {
  if (VAR_11 != -VAR_2)
   FUNC_12(VAR_11);
  goto leave;
 }
 FUNC_26(VAR_17, VAR_7, 1);
 FUNC_21(VAR_17, VAR_15);

 FUNC_27(&FUNC_3(VAR_7)->ip_lock);
 VAR_9 -= (FUNC_3(VAR_7)->ip_clusters - VAR_14);
 FUNC_28(&FUNC_3(VAR_7)->ip_lock);

 FUNC_8(VAR_7,
   FUNC_16(VAR_21->sb, VAR_9));
 VAR_23 = 0;

 if (VAR_20 != VAR_5 && VAR_9) {
  if (VAR_20 == VAR_4) {
   VAR_12 = 1;
   VAR_11 = 0;
  } else {
   FUNC_0(VAR_20 != VAR_6);

   VAR_11 = FUNC_14(VAR_17, 1);
   if (VAR_11 < 0) {


    VAR_11 = -VAR_1;
    FUNC_12(VAR_11);
    goto leave;
   }
   goto restarted_transaction;
  }
 }

 FUNC_30(FUNC_3(VAR_7)->ip_blkno,
      FUNC_10(VAR_16->i_clusters),
      (unsigned long long)FUNC_11(VAR_16->i_size),
      FUNC_3(VAR_7)->ip_clusters,
      (unsigned long long)FUNC_9(VAR_7));

leave:
 if (VAR_11 < 0 && VAR_23)
  FUNC_8(VAR_7,
   FUNC_16(VAR_21->sb, VAR_9));
 if (VAR_17) {
  FUNC_17(VAR_21, VAR_17);
  VAR_17 = ((void*)0);
 }
 if (VAR_18) {
  FUNC_18(VAR_18);
  VAR_18 = ((void*)0);
 }
 if (VAR_19) {
  FUNC_18(VAR_19);
  VAR_19 = ((void*)0);
 }
 if ((!VAR_11) && VAR_12) {
  VAR_12 = 0;
  goto restart_all;
 }
 FUNC_6(VAR_15);
 VAR_15 = ((void*)0);

 return VAR_11;
}
