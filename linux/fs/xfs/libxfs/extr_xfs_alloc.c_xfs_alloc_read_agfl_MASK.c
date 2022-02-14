
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int xfs_trans_t ;
struct TYPE_7__ {int m_ddev_targp; } ;
typedef TYPE_1__ xfs_mount_t ;
typedef int xfs_buf_t ;
typedef scalar_t__ xfs_agnumber_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*,scalar_t__,int ) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int VAR_2 ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (TYPE_1__*,int *,int ,int ,int ,int ,int **,int *) ;

int
FUNC_6(
 xfs_mount_t *VAR_3,
 xfs_trans_t *VAR_4,
 xfs_agnumber_t VAR_5,
 xfs_buf_t **VAR_6)
{
 xfs_buf_t *VAR_7;
 int VAR_8;

 FUNC_0(VAR_5 != VAR_0);
 VAR_8 = FUNC_5(
   VAR_3, VAR_4, VAR_3->m_ddev_targp,
   FUNC_2(VAR_3, VAR_5, FUNC_1(VAR_3)),
   FUNC_3(VAR_3, 1), 0, &VAR_7, &VAR_2);
 if (VAR_8)
  return VAR_8;
 FUNC_4(VAR_7, VAR_1);
 *VAR_6 = VAR_7;
 return 0;
}
