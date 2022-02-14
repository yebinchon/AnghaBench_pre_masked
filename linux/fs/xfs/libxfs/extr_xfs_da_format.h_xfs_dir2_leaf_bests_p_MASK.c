
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_dir2_leaf_tail {int bestcount; } ;
typedef int __be16 ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline __be16 *
FUNC_1(struct xfs_dir2_leaf_tail *VAR_0)
{
 return (__be16 *)VAR_0 - FUNC_0(VAR_0->bestcount);
}
