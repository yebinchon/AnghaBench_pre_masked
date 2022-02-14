
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xfs_dahash_t ;
struct xfs_mount {int m_attr_geo; } ;
struct xfs_buf {int b_addr; struct xfs_mount* b_mount; } ;
struct xfs_attr_leaf_entry {int hashval; } ;
struct xfs_attr3_icleaf_hdr {int count; } ;


 int FUNC_0 (int ) ;
 struct xfs_attr_leaf_entry* FUNC_1 (int ) ;
 int FUNC_2 (int ,struct xfs_attr3_icleaf_hdr*,int ) ;

xfs_dahash_t
FUNC_3(
 struct xfs_buf *VAR_0,
 int *VAR_1)
{
 struct xfs_attr3_icleaf_hdr VAR_2;
 struct xfs_attr_leaf_entry *VAR_3;
 struct xfs_mount *VAR_4 = VAR_0->b_mount;

 FUNC_2(VAR_4->m_attr_geo, &VAR_2, VAR_0->b_addr);
 VAR_3 = FUNC_1(VAR_0->b_addr);
 if (VAR_1)
  *VAR_1 = VAR_2.count;
 if (!VAR_2.count)
  return 0;
 return FUNC_0(VAR_3[VAR_2.count - 1].hashval);
}
