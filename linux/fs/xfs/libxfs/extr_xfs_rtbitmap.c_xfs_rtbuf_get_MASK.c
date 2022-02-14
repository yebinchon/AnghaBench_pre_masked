
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int xfs_trans_t ;
typedef int xfs_rtblock_t ;
struct TYPE_8__ {int m_bsize; int m_ddev_targp; int * m_rbmip; int * m_rsumip; } ;
typedef TYPE_1__ xfs_mount_t ;
typedef int xfs_inode_t ;
typedef int xfs_buf_t ;
struct TYPE_9__ {scalar_t__ br_startblock; } ;
typedef TYPE_2__ xfs_bmbt_irec_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_1__*,scalar_t__) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *,int ,int,TYPE_2__*,int*,int ) ;
 int VAR_5 ;
 int FUNC_4 (int *,int *,int ) ;
 int FUNC_5 (TYPE_1__*,int *,int ,int ,int ,int ,int **,int *) ;

int
FUNC_6(
 xfs_mount_t *VAR_6,
 xfs_trans_t *VAR_7,
 xfs_rtblock_t VAR_8,
 int VAR_9,
 xfs_buf_t **VAR_10)
{
 xfs_buf_t *VAR_11;
 xfs_inode_t *VAR_12;
 xfs_bmbt_irec_t VAR_13;
 int VAR_14 = 1;
 int VAR_15;

 VAR_12 = VAR_9 ? VAR_6->m_rsumip : VAR_6->m_rbmip;

 VAR_15 = FUNC_3(VAR_12, VAR_8, 1, &VAR_13, &VAR_14, VAR_4);
 if (VAR_15)
  return VAR_15;

 if (VAR_14 == 0 || !FUNC_2(&VAR_13))
  return -VAR_0;

 FUNC_0(VAR_13.br_startblock != VAR_1);
 VAR_15 = FUNC_5(VAR_6, VAR_7, VAR_6->m_ddev_targp,
       FUNC_1(VAR_6, VAR_13.br_startblock),
       VAR_6->m_bsize, 0, &VAR_11, &VAR_5);
 if (VAR_15)
  return VAR_15;

 FUNC_4(VAR_7, VAR_11, VAR_9 ? VAR_3
          : VAR_2);
 *VAR_10 = VAR_11;
 return 0;
}
