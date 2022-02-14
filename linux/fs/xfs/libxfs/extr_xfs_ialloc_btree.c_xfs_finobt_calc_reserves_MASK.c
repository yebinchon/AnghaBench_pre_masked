
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ xfs_extlen_t ;
typedef int xfs_agnumber_t ;
struct xfs_trans {int dummy; } ;
struct xfs_mount {int m_sb; } ;


 int VAR_0 ;
 int FUNC_0 (struct xfs_mount*,struct xfs_trans*,int ,int ,scalar_t__*) ;
 scalar_t__ FUNC_1 (struct xfs_mount*,int ) ;
 int FUNC_2 (int *) ;

int
FUNC_3(
 struct xfs_mount *VAR_1,
 struct xfs_trans *VAR_2,
 xfs_agnumber_t VAR_3,
 xfs_extlen_t *VAR_4,
 xfs_extlen_t *VAR_5)
{
 xfs_extlen_t VAR_6 = 0;
 int VAR_7;

 if (!FUNC_2(&VAR_1->m_sb))
  return 0;

 VAR_7 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_0, &VAR_6);
 if (VAR_7)
  return VAR_7;

 *VAR_4 += FUNC_1(VAR_1, VAR_3);
 *VAR_5 += VAR_6;
 return 0;
}
