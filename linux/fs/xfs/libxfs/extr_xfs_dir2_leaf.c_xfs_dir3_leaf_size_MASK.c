
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xfs_dir2_leaf_tail_t ;
typedef int xfs_dir2_leaf_entry_t ;
typedef int xfs_dir2_data_off_t ;
struct xfs_dir3_leaf_hdr {int dummy; } ;
struct xfs_dir3_icleaf_hdr {int count; int stale; scalar_t__ magic; } ;
struct xfs_dir2_leaf_hdr {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static inline size_t
FUNC_0(
 struct xfs_dir3_icleaf_hdr *VAR_2,
 int VAR_3)
{
 int VAR_4;
 int VAR_5;

 VAR_4 = VAR_2->count - VAR_2->stale;
 if (VAR_2->magic == VAR_0 ||
     VAR_2->magic == VAR_1)
  VAR_5 = sizeof(struct xfs_dir2_leaf_hdr);
 else
  VAR_5 = sizeof(struct xfs_dir3_leaf_hdr);

 return VAR_5 + VAR_4 * sizeof(xfs_dir2_leaf_entry_t)
                + VAR_3 * sizeof(xfs_dir2_data_off_t)
         + sizeof(xfs_dir2_leaf_tail_t);
}
