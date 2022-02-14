
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_da_node_entry {int dummy; } ;
struct xfs_da_intnode {struct xfs_da_node_entry* __btree; } ;



__attribute__((used)) static struct xfs_da_node_entry *
FUNC_0(struct xfs_da_intnode *VAR_0)
{
 return VAR_0->__btree;
}
