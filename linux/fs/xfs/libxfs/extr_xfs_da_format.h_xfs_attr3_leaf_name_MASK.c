
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xfs_attr_leafblock_t ;
struct xfs_attr_leaf_entry {int nameidx; } ;


 size_t FUNC_0 (int ) ;
 struct xfs_attr_leaf_entry* FUNC_1 (int *) ;

__attribute__((used)) static inline char *
FUNC_2(xfs_attr_leafblock_t *VAR_0, int VAR_1)
{
 struct xfs_attr_leaf_entry *VAR_2 = FUNC_1(VAR_0);

 return &((char *)VAR_0)[FUNC_0(VAR_2[VAR_1].nameidx)];
}
