
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_trans {int dummy; } ;
struct xfs_buf {int dummy; } ;
struct xfs_btree_cur {int dummy; } ;


 int FUNC_0 (struct xfs_btree_cur*,int) ;
 int FUNC_1 (struct xfs_trans*,struct xfs_buf*) ;

__attribute__((used)) static inline void
FUNC_2(
 struct xfs_trans *VAR_0,
 struct xfs_btree_cur **VAR_1,
 struct xfs_buf **VAR_2,
 int VAR_3)
{
 if (*VAR_1) {
  FUNC_0(*VAR_1, VAR_3);
  *VAR_1 = ((void*)0);
 }
 if (*VAR_2) {
  FUNC_1(VAR_0, *VAR_2);
  *VAR_2 = ((void*)0);
 }
}
