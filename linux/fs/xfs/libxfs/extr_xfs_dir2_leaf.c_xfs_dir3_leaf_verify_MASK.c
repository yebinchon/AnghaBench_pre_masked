
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ xfs_failaddr_t ;
struct xfs_mount {int dummy; } ;
struct xfs_dir2_leaf {int dummy; } ;
struct xfs_buf {struct xfs_dir2_leaf* b_addr; struct xfs_mount* b_mount; } ;


 scalar_t__ FUNC_0 (struct xfs_buf*,struct xfs_dir2_leaf*) ;
 scalar_t__ FUNC_1 (struct xfs_mount*,int *,int *,struct xfs_dir2_leaf*) ;

__attribute__((used)) static xfs_failaddr_t
FUNC_2(
 struct xfs_buf *VAR_0)
{
 struct xfs_mount *VAR_1 = VAR_0->b_mount;
 struct xfs_dir2_leaf *VAR_2 = VAR_0->b_addr;
 xfs_failaddr_t VAR_3;

 VAR_3 = FUNC_0(VAR_0, VAR_0->b_addr);
 if (VAR_3)
  return VAR_3;

 return FUNC_1(VAR_1, ((void*)0), ((void*)0), VAR_2);
}
