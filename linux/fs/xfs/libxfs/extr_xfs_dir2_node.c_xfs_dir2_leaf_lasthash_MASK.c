
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int xfs_dahash_t ;
struct xfs_inode {TYPE_1__* d_ops; } ;
struct xfs_dir3_icleaf_hdr {scalar_t__ magic; int count; } ;
struct xfs_dir2_leaf_entry {int hashval; } ;
struct xfs_dir2_leaf {int dummy; } ;
struct xfs_buf {struct xfs_dir2_leaf* b_addr; } ;
struct TYPE_2__ {struct xfs_dir2_leaf_entry* (* leaf_ents_p ) (struct xfs_dir2_leaf*) ;int (* leaf_hdr_from_disk ) (struct xfs_dir3_icleaf_hdr*,struct xfs_dir2_leaf*) ;} ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct xfs_dir3_icleaf_hdr*,struct xfs_dir2_leaf*) ;
 struct xfs_dir2_leaf_entry* FUNC_3 (struct xfs_dir2_leaf*) ;

xfs_dahash_t
FUNC_4(
 struct xfs_inode *VAR_4,
 struct xfs_buf *VAR_5,
 int *VAR_6)
{
 struct xfs_dir2_leaf *VAR_7 = VAR_5->b_addr;
 struct xfs_dir2_leaf_entry *VAR_8;
 struct xfs_dir3_icleaf_hdr VAR_9;

 VAR_4->d_ops->leaf_hdr_from_disk(&VAR_9, VAR_7);

 FUNC_0(VAR_9.magic == VAR_1 ||
        VAR_9.magic == VAR_3 ||
        VAR_9.magic == VAR_0 ||
        VAR_9.magic == VAR_2);

 if (VAR_6)
  *VAR_6 = VAR_9.count;
 if (!VAR_9.count)
  return 0;

 VAR_8 = VAR_4->d_ops->leaf_ents_p(VAR_7);
 return FUNC_1(VAR_8[VAR_9.count - 1].hashval);
}
