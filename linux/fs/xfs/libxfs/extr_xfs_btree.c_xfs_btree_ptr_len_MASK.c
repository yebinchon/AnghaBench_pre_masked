
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_btree_cur {int bc_flags; } ;
typedef int __be64 ;
typedef int __be32 ;


 int VAR_0 ;

__attribute__((used)) static inline size_t FUNC_0(struct xfs_btree_cur *VAR_1)
{
 return (VAR_1->bc_flags & VAR_0) ?
  sizeof(__be64) : sizeof(__be32);
}
