
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xfs_trans_t ;
typedef int xfs_mount_t ;
typedef int xfs_buf_t ;
typedef int xfs_agnumber_t ;


 int FUNC_0 (int *,int *,int ,int **) ;
 int FUNC_1 (int *,int *) ;

int
FUNC_2(
 xfs_mount_t *VAR_0,
 xfs_trans_t *VAR_1,
 xfs_agnumber_t VAR_2)
{
 xfs_buf_t *VAR_3 = ((void*)0);
 int VAR_4;

 VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2, &VAR_3);
 if (VAR_4)
  return VAR_4;
 if (VAR_3)
  FUNC_1(VAR_1, VAR_3);
 return 0;
}
