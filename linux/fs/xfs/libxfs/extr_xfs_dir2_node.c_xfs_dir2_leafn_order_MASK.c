
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xfs_inode {TYPE_1__* d_ops; } ;
struct xfs_dir3_icleaf_hdr {int count; } ;
struct xfs_dir2_leaf_entry {int hashval; } ;
struct xfs_dir2_leaf {int dummy; } ;
struct xfs_buf {struct xfs_dir2_leaf* b_addr; } ;
struct TYPE_2__ {struct xfs_dir2_leaf_entry* (* leaf_ents_p ) (struct xfs_dir2_leaf*) ;int (* leaf_hdr_from_disk ) (struct xfs_dir3_icleaf_hdr*,struct xfs_dir2_leaf*) ;} ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct xfs_dir3_icleaf_hdr*,struct xfs_dir2_leaf*) ;
 int FUNC_2 (struct xfs_dir3_icleaf_hdr*,struct xfs_dir2_leaf*) ;
 struct xfs_dir2_leaf_entry* FUNC_3 (struct xfs_dir2_leaf*) ;
 struct xfs_dir2_leaf_entry* FUNC_4 (struct xfs_dir2_leaf*) ;

int
FUNC_5(
 struct xfs_inode *VAR_0,
 struct xfs_buf *VAR_1,
 struct xfs_buf *VAR_2)
{
 struct xfs_dir2_leaf *VAR_3 = VAR_1->b_addr;
 struct xfs_dir2_leaf *VAR_4 = VAR_2->b_addr;
 struct xfs_dir2_leaf_entry *VAR_5;
 struct xfs_dir2_leaf_entry *VAR_6;
 struct xfs_dir3_icleaf_hdr VAR_7;
 struct xfs_dir3_icleaf_hdr VAR_8;

 VAR_0->d_ops->leaf_hdr_from_disk(&VAR_7, VAR_3);
 VAR_0->d_ops->leaf_hdr_from_disk(&VAR_8, VAR_4);
 VAR_5 = VAR_0->d_ops->leaf_ents_p(VAR_3);
 VAR_6 = VAR_0->d_ops->leaf_ents_p(VAR_4);

 if (VAR_7 > 0 && VAR_8 > 0 &&
     (FUNC_0(VAR_6[0].hashval) < FUNC_0(VAR_5[0].hashval) ||
      FUNC_0(VAR_6[VAR_8 - 1].hashval) <
    FUNC_0(VAR_5[VAR_7 - 1].hashval)))
  return 1;
 return 0;
}
