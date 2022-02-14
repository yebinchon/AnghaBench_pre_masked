
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_ibulk {int ubuffer; } ;
struct xfs_bulkstat {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,struct xfs_bulkstat const*,int) ;
 int FUNC_1 (struct xfs_ibulk*,int) ;

__attribute__((used)) static int
FUNC_2(
 struct xfs_ibulk *VAR_1,
 const struct xfs_bulkstat *VAR_2)
{
 if (FUNC_0(VAR_1->ubuffer, VAR_2, sizeof(struct xfs_bulkstat)))
  return -VAR_0;
 return FUNC_1(VAR_1, sizeof(struct xfs_bulkstat));
}
