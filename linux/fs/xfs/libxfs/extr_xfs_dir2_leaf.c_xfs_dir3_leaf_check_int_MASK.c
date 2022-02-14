
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * xfs_failaddr_t ;
typedef int xfs_dir2_leaf_tail_t ;
struct xfs_mount {struct xfs_da_geometry* m_dir_geo; } ;
struct xfs_inode {int dummy; } ;
struct xfs_dir_ops {size_t (* leaf_max_ents ) (struct xfs_da_geometry*) ;struct xfs_dir2_leaf_entry* (* leaf_ents_p ) (struct xfs_dir2_leaf*) ;int (* leaf_hdr_from_disk ) (struct xfs_dir3_icleaf_hdr*,struct xfs_dir2_leaf*) ;} ;
struct xfs_dir3_icleaf_hdr {size_t count; scalar_t__ magic; int stale; } ;
struct xfs_dir2_leaf_entry {scalar_t__ address; int hashval; } ;
struct xfs_dir2_leaf {int dummy; } ;
struct xfs_da_geometry {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int * VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct xfs_dir3_icleaf_hdr*,struct xfs_dir2_leaf*) ;
 struct xfs_dir2_leaf_entry* FUNC_3 (struct xfs_dir2_leaf*) ;
 size_t FUNC_4 (struct xfs_da_geometry*) ;
 scalar_t__ FUNC_5 (int *) ;
 int * FUNC_6 (struct xfs_da_geometry*,struct xfs_dir2_leaf*) ;
 struct xfs_dir_ops* FUNC_7 (struct xfs_mount*,struct xfs_inode*) ;

xfs_failaddr_t
FUNC_8(
 struct xfs_mount *VAR_4,
 struct xfs_inode *VAR_5,
 struct xfs_dir3_icleaf_hdr *VAR_6,
 struct xfs_dir2_leaf *VAR_7)
{
 struct xfs_dir2_leaf_entry *VAR_8;
 xfs_dir2_leaf_tail_t *VAR_9;
 int VAR_10;
 int VAR_11;
 const struct xfs_dir_ops *VAR_12;
 struct xfs_dir3_icleaf_hdr VAR_13;
 struct xfs_da_geometry *VAR_14 = VAR_4->m_dir_geo;





 VAR_12 = FUNC_7(VAR_4, VAR_5);

 if (!VAR_6) {
  VAR_12->leaf_hdr_from_disk(&VAR_13, VAR_7);
  VAR_6 = &VAR_13;
 }

 VAR_8 = VAR_12->leaf_ents_p(VAR_7);
 VAR_9 = FUNC_6(VAR_14, VAR_7);






 if (VAR_6->count > VAR_12->leaf_max_ents(VAR_14))
  return VAR_3;


 if ((VAR_6->magic == VAR_0 ||
      VAR_6->magic == VAR_2) &&
     (char *)&VAR_8[VAR_6->count] > (char *)FUNC_5(VAR_9))
  return VAR_3;


 for (VAR_11 = VAR_10 = 0; VAR_11 < VAR_6->count; VAR_11++) {
  if (VAR_11 + 1 < VAR_6->count) {
   if (FUNC_0(VAR_8[VAR_11].hashval) >
     FUNC_0(VAR_8[VAR_11 + 1].hashval))
    return VAR_3;
  }
  if (VAR_8[VAR_11].address == FUNC_1(VAR_1))
   VAR_10++;
 }
 if (VAR_6->stale != VAR_10)
  return VAR_3;
 return ((void*)0);
}
