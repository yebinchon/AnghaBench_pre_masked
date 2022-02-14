
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xfs_dqid_t ;
typedef int uint ;
struct xfs_mount {int dummy; } ;
struct xfs_dquot {int dummy; } ;
struct qc_dqblk {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct xfs_dquot*) ;
 int FUNC_1 (struct xfs_mount*,int ,int ,int,struct xfs_dquot**) ;
 int FUNC_2 (struct xfs_dquot*) ;
 int FUNC_3 (struct xfs_mount*,int ,struct xfs_dquot*,struct qc_dqblk*) ;

int
FUNC_4(
 struct xfs_mount *VAR_1,
 xfs_dqid_t VAR_2,
 uint VAR_3,
 struct qc_dqblk *VAR_4)
{
 struct xfs_dquot *VAR_5;
 int VAR_6;





 VAR_6 = FUNC_1(VAR_1, VAR_2, VAR_3, 0, &VAR_5);
 if (VAR_6)
  return VAR_6;





 if (FUNC_0(VAR_5)) {
  VAR_6 = -VAR_0;
  goto out_put;
 }

 FUNC_3(VAR_1, VAR_3, VAR_5, VAR_4);

out_put:
 FUNC_2(VAR_5);
 return VAR_6;
}
