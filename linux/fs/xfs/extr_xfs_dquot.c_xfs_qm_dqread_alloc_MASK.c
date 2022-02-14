
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xfs_trans {int dummy; } ;
struct xfs_mount {int dummy; } ;
struct xfs_dquot {int dummy; } ;
struct xfs_buf {int dummy; } ;
struct TYPE_2__ {int tr_qm_dqalloc; } ;


 TYPE_1__* FUNC_0 (struct xfs_mount*) ;
 int FUNC_1 (struct xfs_mount*) ;
 int FUNC_2 (struct xfs_buf*) ;
 int FUNC_3 (struct xfs_trans**,struct xfs_dquot*,struct xfs_buf**) ;
 int FUNC_4 (struct xfs_mount*,int *,int ,int ,int ,struct xfs_trans**) ;
 int FUNC_5 (struct xfs_trans*) ;
 int FUNC_6 (struct xfs_trans*) ;

__attribute__((used)) static int
FUNC_7(
 struct xfs_mount *VAR_0,
 struct xfs_dquot *VAR_1,
 struct xfs_buf **VAR_2)
{
 struct xfs_trans *VAR_3;
 int VAR_4;

 VAR_4 = FUNC_4(VAR_0, &FUNC_0(VAR_0)->tr_qm_dqalloc,
   FUNC_1(VAR_0), 0, 0, &VAR_3);
 if (VAR_4)
  goto err;

 VAR_4 = FUNC_3(&VAR_3, VAR_1, VAR_2);
 if (VAR_4)
  goto err_cancel;

 VAR_4 = FUNC_6(VAR_3);
 if (VAR_4) {




  FUNC_2(*VAR_2);
  *VAR_2 = ((void*)0);
  goto err;
 }
 return 0;

err_cancel:
 FUNC_5(VAR_3);
err:
 return VAR_4;
}
