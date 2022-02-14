
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ xfs_agnumber_t ;
struct xfs_trans {int dummy; } ;
struct xfs_mount {int m_ddev_targp; } ;
struct xfs_buf {int dummy; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct xfs_mount*) ;
 int VAR_1 ;
 int FUNC_2 (struct xfs_mount*,scalar_t__,int ) ;
 int VAR_2 ;
 int FUNC_3 (struct xfs_mount*,int) ;
 int FUNC_4 (struct xfs_mount*,scalar_t__) ;
 int VAR_3 ;
 int FUNC_5 (struct xfs_buf*,int ) ;
 int FUNC_6 (struct xfs_trans*,struct xfs_buf*,int ) ;
 int FUNC_7 (struct xfs_mount*,struct xfs_trans*,int ,int ,int ,int ,struct xfs_buf**,int *) ;

int
FUNC_8(
 struct xfs_mount *VAR_4,
 struct xfs_trans *VAR_5,
 xfs_agnumber_t VAR_6,
 struct xfs_buf **VAR_7)
{
 int VAR_8;

 FUNC_4(VAR_4, VAR_6);

 FUNC_0(VAR_6 != VAR_0);
 VAR_8 = FUNC_7(VAR_4, VAR_5, VAR_4->m_ddev_targp,
   FUNC_2(VAR_4, VAR_6, FUNC_1(VAR_4)),
   FUNC_3(VAR_4, 1), 0, VAR_7, &VAR_3);
 if (VAR_8)
  return VAR_8;
 if (VAR_5)
  FUNC_6(VAR_5, *VAR_7, VAR_2);

 FUNC_5(*VAR_7, VAR_1);
 return 0;
}
