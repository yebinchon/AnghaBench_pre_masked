
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int xfs_dqid_t ;
typedef int uint ;
struct xfs_mount {int dummy; } ;
struct TYPE_2__ {int d_id; } ;
struct xfs_dquot {TYPE_1__ q_core; } ;
struct qc_dqblk {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct xfs_mount*,int ,int ,struct xfs_dquot**) ;
 int FUNC_2 (struct xfs_dquot*) ;
 int FUNC_3 (struct xfs_mount*,int ,struct xfs_dquot*,struct qc_dqblk*) ;

int
FUNC_4(
 struct xfs_mount *VAR_0,
 xfs_dqid_t *VAR_1,
 uint VAR_2,
 struct qc_dqblk *VAR_3)
{
 struct xfs_dquot *VAR_4;
 int VAR_5;

 VAR_5 = FUNC_1(VAR_0, *VAR_1, VAR_2, &VAR_4);
 if (VAR_5)
  return VAR_5;


 *VAR_1 = FUNC_0(VAR_4->q_core.d_id);

 FUNC_3(VAR_0, VAR_2, VAR_4, VAR_3);

 FUNC_2(VAR_4);
 return VAR_5;
}
