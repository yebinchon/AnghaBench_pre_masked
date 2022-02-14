
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xfs_dqid_t ;
typedef int uint ;
struct xfs_mount {int dummy; } ;
struct xfs_dquot {int dummy; } ;


 int FUNC_0 (struct xfs_mount*,int ) ;
 int FUNC_1 (struct xfs_mount*,int ,int ,int ,struct xfs_dquot**) ;

int
FUNC_2(
 struct xfs_mount *VAR_0,
 xfs_dqid_t VAR_1,
 uint VAR_2,
 struct xfs_dquot **VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_0, VAR_2);
 if (VAR_4)
  return VAR_4;

 return FUNC_1(VAR_0, VAR_1, VAR_2, 0, VAR_3);
}
