
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_btree_cur {int bc_flags; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;

__attribute__((used)) static inline size_t FUNC_0(struct xfs_btree_cur *VAR_6)
{
 if (VAR_6->bc_flags & VAR_3) {
  if (VAR_6->bc_flags & VAR_0)
   return VAR_1;
  return VAR_2;
 }
 if (VAR_6->bc_flags & VAR_0)
  return VAR_4;
 return VAR_5;
}
