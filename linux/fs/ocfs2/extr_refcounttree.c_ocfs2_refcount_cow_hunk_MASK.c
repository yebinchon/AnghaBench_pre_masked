
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct ocfs2_super {int dummy; } ;
struct ocfs2_refcount_tree {int dummy; } ;
struct TYPE_3__ {int i_list; } ;
struct ocfs2_dinode {int i_refcount_loc; TYPE_1__ id2; } ;
struct ocfs2_cow_context {int data_et; int get_clusters; int cow_duplicate_clusters; struct buffer_head* ref_root_bh; struct ocfs2_refcount_tree* ref_tree; scalar_t__ cow_len; scalar_t__ cow_start; struct inode* inode; } ;
struct inode {int i_sb; } ;
struct buffer_head {scalar_t__ b_data; } ;
struct TYPE_4__ {int ip_blkno; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct inode*) ;
 TYPE_2__* FUNC_2 (struct inode*) ;
 struct ocfs2_super* FUNC_3 (int ) ;
 int FUNC_4 (struct buffer_head*) ;
 int FUNC_5 (struct ocfs2_cow_context*) ;
 struct ocfs2_cow_context* FUNC_6 (int,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_9 (struct inode*,scalar_t__) ;
 int FUNC_10 (int *,int ,struct buffer_head*) ;
 int FUNC_11 (struct inode*) ;
 int FUNC_12 (struct ocfs2_super*,int ,int,struct ocfs2_refcount_tree**,struct buffer_head**) ;
 int FUNC_13 (struct inode*,int *,scalar_t__,scalar_t__,scalar_t__,scalar_t__*,scalar_t__*) ;
 int FUNC_14 (struct ocfs2_cow_context*) ;
 int FUNC_15 (struct ocfs2_super*,struct ocfs2_refcount_tree*,int) ;
 int FUNC_16 (int ,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_17(struct inode *VAR_4,
       struct buffer_head *VAR_5,
       u32 VAR_6, u32 VAR_7, u32 VAR_8)
{
 int VAR_9;
 u32 VAR_10 = 0, VAR_11 = 0;
 struct ocfs2_super *VAR_12 = FUNC_3(VAR_4->i_sb);
 struct ocfs2_dinode *VAR_13 = (struct ocfs2_dinode *)VAR_5->b_data;
 struct buffer_head *VAR_14 = ((void*)0);
 struct ocfs2_refcount_tree *VAR_15;
 struct ocfs2_cow_context *VAR_16 = ((void*)0);

 FUNC_0(!FUNC_11(VAR_4));

 VAR_9 = FUNC_13(VAR_4, &VAR_13->id2.i_list,
           VAR_6, VAR_7, VAR_8,
           &VAR_10, &VAR_11);
 if (VAR_9) {
  FUNC_8(VAR_9);
  goto out;
 }

 FUNC_16(FUNC_2(VAR_4)->ip_blkno,
          VAR_6, VAR_7, VAR_8,
          VAR_10, VAR_11);

 FUNC_0(VAR_11 == 0);

 VAR_16 = FUNC_6(sizeof(struct ocfs2_cow_context), VAR_1);
 if (!VAR_16) {
  VAR_9 = -VAR_0;
  FUNC_8(VAR_9);
  goto out;
 }

 VAR_9 = FUNC_12(VAR_12, FUNC_7(VAR_13->i_refcount_loc),
           1, &VAR_15, &VAR_14);
 if (VAR_9) {
  FUNC_8(VAR_9);
  goto out;
 }

 VAR_16->inode = VAR_4;
 VAR_16->cow_start = VAR_10;
 VAR_16->cow_len = VAR_11;
 VAR_16->ref_tree = VAR_15;
 VAR_16->ref_root_bh = VAR_14;
 VAR_16->cow_duplicate_clusters = VAR_3;
 VAR_16->get_clusters = VAR_2;

 FUNC_10(&VAR_16->data_et,
          FUNC_1(VAR_4), VAR_5);

 VAR_9 = FUNC_14(VAR_16);
 if (VAR_9)
  FUNC_8(VAR_9);






 FUNC_9(VAR_4, VAR_10);

 FUNC_15(VAR_12, VAR_15, 1);
 FUNC_4(VAR_14);
out:
 FUNC_5(VAR_16);
 return VAR_9;
}
