
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* bpr_ptr; } ;
struct nilfs_btree_path {int bp_index; TYPE_1__ bp_oldreq; struct buffer_head* bp_sib_bh; void* bp_op; } ;
struct nilfs_btree_node {int dummy; } ;
struct nilfs_bmap_stats {scalar_t__ bs_nblocks; } ;
struct nilfs_bmap {int dummy; } ;
struct inode {int dummy; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef void* __u64 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (struct nilfs_bmap*,TYPE_1__*,struct inode*) ;
 int FUNC_4 (struct nilfs_bmap*,TYPE_1__*,struct inode*) ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 int FUNC_5 (struct nilfs_bmap*,void*,struct buffer_head**) ;
 struct nilfs_btree_node* FUNC_6 (struct nilfs_bmap*,struct nilfs_btree_path*,int,int*) ;
 struct nilfs_btree_node* FUNC_7 (struct nilfs_btree_path*,int) ;
 struct nilfs_btree_node* FUNC_8 (struct nilfs_bmap*) ;
 int FUNC_9 (struct nilfs_bmap*) ;
 int FUNC_10 (struct nilfs_bmap*) ;
 int FUNC_11 (struct nilfs_btree_node*) ;
 void* FUNC_12 (struct nilfs_btree_node*,int,int) ;
 int FUNC_13 (struct nilfs_bmap*) ;
 void* VAR_7 ;
 void* VAR_8 ;

__attribute__((used)) static int FUNC_14(struct nilfs_bmap *VAR_9,
          struct nilfs_btree_path *VAR_10,
          int *VAR_11,
          struct nilfs_bmap_stats *VAR_12,
          struct inode *VAR_13)
{
 struct buffer_head *VAR_14;
 struct nilfs_btree_node *VAR_15, *VAR_16, *VAR_17;
 __u64 VAR_18;
 int VAR_19, VAR_20, VAR_21, VAR_22, VAR_23, VAR_24, VAR_25;

 VAR_25 = 0;
 VAR_12->bs_nblocks = 0;
 VAR_22 = FUNC_0(FUNC_13(VAR_9));
 VAR_24 = FUNC_10(VAR_9);

 for (VAR_21 = VAR_0, VAR_20 = VAR_10[VAR_21].bp_index;
      VAR_21 < FUNC_9(VAR_9) - 1;
      VAR_21++) {
  VAR_15 = FUNC_7(VAR_10, VAR_21);
  VAR_10[VAR_21].bp_oldreq.bpr_ptr =
   FUNC_12(VAR_15, VAR_20, VAR_24);
  VAR_25 = FUNC_4(VAR_9,
       &VAR_10[VAR_21].bp_oldreq, VAR_13);
  if (VAR_25 < 0)
   goto err_out_child_node;

  if (FUNC_11(VAR_15) > VAR_22) {
   VAR_10[VAR_21].bp_op = VAR_6;
   VAR_12->bs_nblocks++;
   goto out;
  }

  VAR_16 = FUNC_6(VAR_9, VAR_10, VAR_21 + 1, &VAR_23);
  VAR_19 = VAR_10[VAR_21 + 1].bp_index;
  VAR_20 = VAR_19;

  if (VAR_19 > 0) {

   VAR_18 = FUNC_12(VAR_16, VAR_19 - 1,
         VAR_23);
   VAR_25 = FUNC_5(VAR_9, VAR_18, &VAR_14);
   if (VAR_25 < 0)
    goto err_out_curr_node;
   VAR_17 = (struct nilfs_btree_node *)VAR_14->b_data;
   if (FUNC_11(VAR_17) > VAR_22) {
    VAR_10[VAR_21].bp_sib_bh = VAR_14;
    VAR_10[VAR_21].bp_op = VAR_2;
    VAR_12->bs_nblocks++;
    goto out;
   } else {
    VAR_10[VAR_21].bp_sib_bh = VAR_14;
    VAR_10[VAR_21].bp_op = VAR_4;
    VAR_12->bs_nblocks++;

   }
  } else if (VAR_19 <
      FUNC_11(VAR_16) - 1) {

   VAR_18 = FUNC_12(VAR_16, VAR_19 + 1,
         VAR_23);
   VAR_25 = FUNC_5(VAR_9, VAR_18, &VAR_14);
   if (VAR_25 < 0)
    goto err_out_curr_node;
   VAR_17 = (struct nilfs_btree_node *)VAR_14->b_data;
   if (FUNC_11(VAR_17) > VAR_22) {
    VAR_10[VAR_21].bp_sib_bh = VAR_14;
    VAR_10[VAR_21].bp_op = VAR_3;
    VAR_12->bs_nblocks++;
    goto out;
   } else {
    VAR_10[VAR_21].bp_sib_bh = VAR_14;
    VAR_10[VAR_21].bp_op = VAR_5;
    VAR_12->bs_nblocks++;







    VAR_20 = VAR_19 + 1;

   }
  } else {


   FUNC_1(VAR_21 != FUNC_9(VAR_9) - 2);
   if (FUNC_11(VAR_15) - 1 <=
       VAR_1) {
    VAR_10[VAR_21].bp_op = VAR_8;
    VAR_12->bs_nblocks += 2;
    VAR_21++;
    VAR_10[VAR_21].bp_op = VAR_7;
    goto shrink_root_child;
   } else {
    VAR_10[VAR_21].bp_op = VAR_6;
    VAR_12->bs_nblocks++;
    goto out;
   }
  }
 }


 VAR_10[VAR_21].bp_op = VAR_6;
 VAR_12->bs_nblocks++;

shrink_root_child:
 VAR_15 = FUNC_8(VAR_9);
 VAR_10[VAR_21].bp_oldreq.bpr_ptr =
  FUNC_12(VAR_15, VAR_20,
      VAR_1);

 VAR_25 = FUNC_4(VAR_9, &VAR_10[VAR_21].bp_oldreq, VAR_13);
 if (VAR_25 < 0)
  goto err_out_child_node;


 out:
 *VAR_11 = VAR_21;
 return VAR_25;


 err_out_curr_node:
 FUNC_3(VAR_9, &VAR_10[VAR_21].bp_oldreq, VAR_13);
 err_out_child_node:
 for (VAR_21--; VAR_21 >= VAR_0; VAR_21--) {
  FUNC_2(VAR_10[VAR_21].bp_sib_bh);
  FUNC_3(VAR_9, &VAR_10[VAR_21].bp_oldreq, VAR_13);
 }
 *VAR_11 = VAR_21;
 VAR_12->bs_nblocks = 0;
 return VAR_25;
}
