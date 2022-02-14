
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_buf {int b_addr; } ;
struct xfs_attr_leaf_entry {int hashval; } ;
struct xfs_attr3_icleaf_hdr {int count; } ;


 scalar_t__ FUNC_0 (int ) ;
 struct xfs_attr_leaf_entry* FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(
 struct xfs_buf *VAR_0,
 struct xfs_attr3_icleaf_hdr *VAR_1,
 struct xfs_buf *VAR_2,
 struct xfs_attr3_icleaf_hdr *VAR_3)
{
 struct xfs_attr_leaf_entry *VAR_4;
 struct xfs_attr_leaf_entry *VAR_5;

 VAR_4 = FUNC_1(VAR_0->b_addr);
 VAR_5 = FUNC_1(VAR_2->b_addr);
 if (VAR_1->count > 0 && VAR_3->count > 0 &&
     ((FUNC_0(VAR_5[0].hashval) <
       FUNC_0(VAR_4[0].hashval)) ||
      (FUNC_0(VAR_5[VAR_3->count - 1].hashval) <
       FUNC_0(VAR_4[VAR_1->count - 1].hashval)))) {
  return 1;
 }
 return 0;
}
