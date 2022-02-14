
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ xfs_agnumber_t ;
struct xfs_trans {int dummy; } ;
struct xfs_mount {int m_ddev_targp; } ;
struct xfs_buf {int * b_ops; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct xfs_mount*,scalar_t__,int ) ;
 int FUNC_2 (struct xfs_mount*,int) ;
 int FUNC_3 (struct xfs_mount*) ;
 int FUNC_4 (struct xfs_buf*) ;
 int VAR_2 ;
 struct xfs_buf* FUNC_5 (struct xfs_trans*,int ,int ,int ,int ) ;

int
FUNC_6(
 struct xfs_mount *VAR_3,
 struct xfs_trans *VAR_4,
 xfs_agnumber_t VAR_5,
 struct xfs_buf **VAR_6)
{
 struct xfs_buf *VAR_7;

 FUNC_0(VAR_5 != 0 && VAR_5 != VAR_1);
 VAR_7 = FUNC_5(VAR_4, VAR_3->m_ddev_targp,
   FUNC_1(VAR_3, VAR_5, FUNC_3(VAR_3)),
   FUNC_2(VAR_3, 1), 0);
 if (!VAR_7)
  return -VAR_0;
 VAR_7->b_ops = &VAR_2;
 FUNC_4(VAR_7);
 *VAR_6 = VAR_7;
 return 0;
}
