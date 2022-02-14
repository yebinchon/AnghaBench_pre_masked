
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_ibulk {int ubuffer; int mp; } ;
struct xfs_bulkstat {int dummy; } ;
struct xfs_bstat {int dummy; } ;
typedef int bs1 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,struct xfs_bstat*,int) ;
 int FUNC_1 (int ,struct xfs_bstat*,struct xfs_bulkstat const*) ;
 int FUNC_2 (struct xfs_ibulk*,int) ;

int
FUNC_3(
 struct xfs_ibulk *VAR_1,
 const struct xfs_bulkstat *VAR_2)
{
 struct xfs_bstat VAR_3;

 FUNC_1(VAR_1->mp, &VAR_3, VAR_2);
 if (FUNC_0(VAR_1->ubuffer, &VAR_3, sizeof(VAR_3)))
  return -VAR_0;
 return FUNC_2(VAR_1, sizeof(struct xfs_bstat));
}
