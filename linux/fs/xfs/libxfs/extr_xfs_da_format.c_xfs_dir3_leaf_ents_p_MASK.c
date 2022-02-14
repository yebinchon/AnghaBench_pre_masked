
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_dir3_leaf {struct xfs_dir2_leaf_entry* __ents; } ;
struct xfs_dir2_leaf_entry {int dummy; } ;
struct xfs_dir2_leaf {int dummy; } ;



__attribute__((used)) static struct xfs_dir2_leaf_entry *
FUNC_0(struct xfs_dir2_leaf *VAR_0)
{
 return ((struct xfs_dir3_leaf *)VAR_0)->__ents;
}
