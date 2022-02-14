
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ bpr_ptr; } ;
struct nilfs_btree_path {int bp_index; TYPE_1__ bp_newreq; struct buffer_head* bp_sib_bh; void* bp_op; } ;
struct nilfs_btree_node {int dummy; } ;
struct nilfs_bmap_stats {scalar_t__ bs_nblocks; } ;
struct nilfs_bmap {int dummy; } ;
struct inode {int dummy; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int __u64 ;


 scalar_t__ FUNC_0 (struct nilfs_bmap*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (struct nilfs_bmap*,TYPE_1__*,struct inode*) ;
 struct inode* FUNC_3 (struct nilfs_bmap*) ;
 int FUNC_4 (struct nilfs_bmap*,TYPE_1__*,struct inode*) ;
 int FUNC_5 (struct buffer_head*) ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 scalar_t__ FUNC_6 (struct nilfs_bmap*,struct nilfs_btree_path*,int ) ;
 int FUNC_7 (struct nilfs_bmap*,int ,struct buffer_head**) ;
 int FUNC_8 (struct nilfs_bmap*,scalar_t__,struct buffer_head**) ;
 struct nilfs_btree_node* FUNC_9 (struct nilfs_bmap*,struct nilfs_btree_path*,int,int*) ;
 struct nilfs_btree_node* FUNC_10 (struct nilfs_btree_path*,int) ;
 struct nilfs_btree_node* FUNC_11 (struct nilfs_bmap*) ;
 void* VAR_6 ;
 int FUNC_12 (struct nilfs_bmap*) ;
 int FUNC_13 (struct nilfs_bmap*) ;
 int FUNC_14 (struct nilfs_btree_node*) ;
 int FUNC_15 (struct nilfs_btree_node*,int,int) ;
 int FUNC_16 (struct nilfs_btree_node*,int ,int,int ,int,int *,int *) ;
 void* VAR_7 ;

__attribute__((used)) static int FUNC_17(struct nilfs_bmap *VAR_8,
          struct nilfs_btree_path *VAR_9,
          int *VAR_10, __u64 VAR_11, __u64 VAR_12,
          struct nilfs_bmap_stats *VAR_13)
{
 struct buffer_head *VAR_14;
 struct nilfs_btree_node *VAR_15, *VAR_16, *VAR_17;
 __u64 VAR_18;
 int VAR_19, VAR_20, VAR_21, VAR_22, VAR_23;
 struct inode *VAR_24 = ((void*)0);

 VAR_13->bs_nblocks = 0;
 VAR_20 = VAR_0;


 if (FUNC_0(VAR_8)) {
  VAR_9[VAR_20].bp_newreq.bpr_ptr =
   FUNC_6(VAR_8, VAR_9, VAR_11);
  VAR_24 = FUNC_3(VAR_8);
 }

 VAR_23 = FUNC_4(VAR_8, &VAR_9[VAR_20].bp_newreq, VAR_24);
 if (VAR_23 < 0)
  goto err_out_data;

 VAR_22 = FUNC_13(VAR_8);

 for (VAR_20 = VAR_1;
      VAR_20 < FUNC_12(VAR_8) - 1;
      VAR_20++) {
  VAR_15 = FUNC_10(VAR_9, VAR_20);
  if (FUNC_14(VAR_15) < VAR_22) {
   VAR_9[VAR_20].bp_op = VAR_5;
   VAR_13->bs_nblocks++;
   goto out;
  }

  VAR_16 = FUNC_9(VAR_8, VAR_9, VAR_20 + 1, &VAR_21);
  VAR_19 = VAR_9[VAR_20 + 1].bp_index;


  if (VAR_19 > 0) {
   VAR_18 = FUNC_15(VAR_16, VAR_19 - 1,
         VAR_21);
   VAR_23 = FUNC_7(VAR_8, VAR_18, &VAR_14);
   if (VAR_23 < 0)
    goto err_out_child_node;
   VAR_17 = (struct nilfs_btree_node *)VAR_14->b_data;
   if (FUNC_14(VAR_17) < VAR_22) {
    VAR_9[VAR_20].bp_sib_bh = VAR_14;
    VAR_9[VAR_20].bp_op = VAR_3;
    VAR_13->bs_nblocks++;
    goto out;
   } else {
    FUNC_1(VAR_14);
   }
  }


  if (VAR_19 < FUNC_14(VAR_16) - 1) {
   VAR_18 = FUNC_15(VAR_16, VAR_19 + 1,
         VAR_21);
   VAR_23 = FUNC_7(VAR_8, VAR_18, &VAR_14);
   if (VAR_23 < 0)
    goto err_out_child_node;
   VAR_17 = (struct nilfs_btree_node *)VAR_14->b_data;
   if (FUNC_14(VAR_17) < VAR_22) {
    VAR_9[VAR_20].bp_sib_bh = VAR_14;
    VAR_9[VAR_20].bp_op = VAR_4;
    VAR_13->bs_nblocks++;
    goto out;
   } else {
    FUNC_1(VAR_14);
   }
  }


  VAR_9[VAR_20].bp_newreq.bpr_ptr =
   VAR_9[VAR_20 - 1].bp_newreq.bpr_ptr + 1;
  VAR_23 = FUNC_4(VAR_8,
         &VAR_9[VAR_20].bp_newreq, VAR_24);
  if (VAR_23 < 0)
   goto err_out_child_node;
  VAR_23 = FUNC_8(VAR_8,
      VAR_9[VAR_20].bp_newreq.bpr_ptr,
      &VAR_14);
  if (VAR_23 < 0)
   goto err_out_curr_node;

  VAR_13->bs_nblocks++;

  VAR_17 = (struct nilfs_btree_node *)VAR_14->b_data;
  FUNC_16(VAR_17, 0, VAR_20, 0, VAR_22, ((void*)0), ((void*)0));
  VAR_9[VAR_20].bp_sib_bh = VAR_14;
  VAR_9[VAR_20].bp_op = VAR_7;
 }


 VAR_15 = FUNC_11(VAR_8);
 if (FUNC_14(VAR_15) <
     VAR_2) {
  VAR_9[VAR_20].bp_op = VAR_5;
  VAR_13->bs_nblocks++;
  goto out;
 }


 VAR_9[VAR_20].bp_newreq.bpr_ptr = VAR_9[VAR_20 - 1].bp_newreq.bpr_ptr + 1;
 VAR_23 = FUNC_4(VAR_8, &VAR_9[VAR_20].bp_newreq, VAR_24);
 if (VAR_23 < 0)
  goto err_out_child_node;
 VAR_23 = FUNC_8(VAR_8, VAR_9[VAR_20].bp_newreq.bpr_ptr,
     &VAR_14);
 if (VAR_23 < 0)
  goto err_out_curr_node;

 FUNC_16((struct nilfs_btree_node *)VAR_14->b_data,
         0, VAR_20, 0, VAR_22, ((void*)0), ((void*)0));
 VAR_9[VAR_20].bp_sib_bh = VAR_14;
 VAR_9[VAR_20].bp_op = VAR_6;

 VAR_20++;
 VAR_9[VAR_20].bp_op = VAR_5;


 VAR_13->bs_nblocks += 2;


 out:
 *VAR_10 = VAR_20;
 return VAR_23;


 err_out_curr_node:
 FUNC_2(VAR_8, &VAR_9[VAR_20].bp_newreq, VAR_24);
 err_out_child_node:
 for (VAR_20--; VAR_20 > VAR_0; VAR_20--) {
  FUNC_5(VAR_9[VAR_20].bp_sib_bh);
  FUNC_2(VAR_8, &VAR_9[VAR_20].bp_newreq, VAR_24);

 }

 FUNC_2(VAR_8, &VAR_9[VAR_20].bp_newreq, VAR_24);
 err_out_data:
 *VAR_10 = VAR_20;
 VAR_13->bs_nblocks = 0;
 return VAR_23;
}
