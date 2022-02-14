
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int xfs_dablk_t ;
struct xfs_mount {int m_sb; } ;
struct xfs_inode {TYPE_1__* d_ops; struct xfs_mount* i_mount; } ;
struct xfs_da_node_entry {int before; int hashval; } ;
struct xfs_da_intnode {int blkno; } ;
struct xfs_da_args {TYPE_2__* geo; int trans; struct xfs_inode* dp; } ;
struct xfs_da3_icnode_hdr {int count; } ;
struct xfs_da3_blkinfo {int blkno; } ;
struct xfs_buf {struct xfs_da_intnode* b_addr; int b_bn; int b_ops; } ;
struct xfs_attr_leafblock {int blkno; } ;
struct xfs_attr_leaf_entry {int hashval; } ;
struct xfs_attr3_icleaf_hdr {int count; } ;
struct TYPE_4__ {scalar_t__ blksize; } ;
struct TYPE_3__ {int (* node_hdr_to_disk ) (struct xfs_da_intnode*,struct xfs_da3_icnode_hdr*) ;struct xfs_da_node_entry* (* node_tree_p ) (struct xfs_da_intnode*) ;int (* node_hdr_from_disk ) (struct xfs_da3_icnode_hdr*,struct xfs_da_intnode*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct xfs_da_intnode*,struct xfs_da_intnode*,scalar_t__) ;
 int FUNC_3 (struct xfs_da3_icnode_hdr*,struct xfs_da_intnode*) ;
 struct xfs_da_node_entry* FUNC_4 (struct xfs_da_intnode*) ;
 int FUNC_5 (struct xfs_da_intnode*,struct xfs_da3_icnode_hdr*) ;
 int FUNC_6 (struct xfs_da_args*) ;
 struct xfs_attr_leaf_entry* FUNC_7 (struct xfs_da_intnode*) ;
 int FUNC_8 (TYPE_2__*,struct xfs_attr3_icleaf_hdr*,struct xfs_da_intnode*) ;
 int FUNC_9 (int ,struct xfs_inode*,int ,int,struct xfs_buf**) ;
 int FUNC_10 (struct xfs_da_args*,int ,int,struct xfs_buf**,int ) ;
 int FUNC_11 (int ,struct xfs_inode*,int ,int,struct xfs_buf**,int ) ;
 int FUNC_12 (struct xfs_da_args*,int *) ;
 scalar_t__ FUNC_13 (int *) ;
 int FUNC_14 (int ,struct xfs_buf*,int ) ;
 int FUNC_15 (int ,struct xfs_buf*,int ,scalar_t__) ;

int
FUNC_16(
 struct xfs_da_args *VAR_2)
{
 struct xfs_attr_leafblock *VAR_3;
 struct xfs_attr3_icleaf_hdr VAR_4;
 struct xfs_attr_leaf_entry *VAR_5;
 struct xfs_da_node_entry *VAR_6;
 struct xfs_da3_icnode_hdr VAR_7;
 struct xfs_da_intnode *VAR_8;
 struct xfs_inode *VAR_9 = VAR_2->dp;
 struct xfs_mount *VAR_10 = VAR_9->i_mount;
 struct xfs_buf *VAR_11 = ((void*)0);
 struct xfs_buf *VAR_12 = ((void*)0);
 xfs_dablk_t VAR_13;
 int VAR_14;

 FUNC_6(VAR_2);

 VAR_14 = FUNC_12(VAR_2, &VAR_13);
 if (VAR_14)
  goto out;
 VAR_14 = FUNC_9(VAR_2->trans, VAR_9, 0, -1, &VAR_11);
 if (VAR_14)
  goto out;

 VAR_14 = FUNC_11(VAR_2->trans, VAR_9, VAR_13, -1, &VAR_12, VAR_0);
 if (VAR_14)
  goto out;


 FUNC_14(VAR_2->trans, VAR_12, VAR_1);
 VAR_12->b_ops = VAR_11->b_ops;
 FUNC_2(VAR_12->b_addr, VAR_11->b_addr, VAR_2->geo->blksize);
 if (FUNC_13(&VAR_10->m_sb)) {
  struct xfs_da3_blkinfo *VAR_15 = VAR_12->b_addr;
  VAR_15->blkno = FUNC_1(VAR_12->b_bn);
 }
 FUNC_15(VAR_2->trans, VAR_12, 0, VAR_2->geo->blksize - 1);




 VAR_14 = FUNC_10(VAR_2, 0, 1, &VAR_11, VAR_0);
 if (VAR_14)
  goto out;
 VAR_8 = VAR_11->b_addr;
 VAR_9->d_ops->node_hdr_from_disk(&VAR_7, VAR_8);
 VAR_6 = VAR_9->d_ops->node_tree_p(VAR_8);

 VAR_3 = VAR_12->b_addr;
 FUNC_8(VAR_2->geo, &VAR_4, VAR_3);
 VAR_5 = FUNC_7(VAR_3);


 VAR_6[0].hashval = VAR_5[VAR_4.count - 1].hashval;
 VAR_6[0].before = FUNC_0(VAR_13);
 VAR_7.count = 1;
 VAR_9->d_ops->node_hdr_to_disk(VAR_8, &VAR_7);
 FUNC_15(VAR_2->trans, VAR_11, 0, VAR_2->geo->blksize - 1);
 VAR_14 = 0;
out:
 return VAR_14;
}
