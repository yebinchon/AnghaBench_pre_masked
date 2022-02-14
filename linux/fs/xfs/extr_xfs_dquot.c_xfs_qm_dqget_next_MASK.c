
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xfs_dqid_t ;
typedef int uint ;
struct xfs_mount {int dummy; } ;
struct xfs_dquot {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct xfs_dquot*) ;
 int FUNC_1 (struct xfs_mount*,int ,int *) ;
 int FUNC_2 (struct xfs_mount*,int ,int ,int,struct xfs_dquot**) ;
 int FUNC_3 (struct xfs_dquot*) ;

int
FUNC_4(
 struct xfs_mount *VAR_1,
 xfs_dqid_t VAR_2,
 uint VAR_3,
 struct xfs_dquot **VAR_4)
{
 struct xfs_dquot *VAR_5;
 int VAR_6 = 0;

 *VAR_4 = ((void*)0);
 for (; !VAR_6; VAR_6 = FUNC_1(VAR_1, VAR_3, &VAR_2)) {
  VAR_6 = FUNC_2(VAR_1, VAR_2, VAR_3, 0, &VAR_5);
  if (VAR_6 == -VAR_0)
   continue;
  else if (VAR_6 != 0)
   break;

  if (!FUNC_0(VAR_5)) {
   *VAR_4 = VAR_5;
   return 0;
  }

  FUNC_3(VAR_5);
 }

 return VAR_6;
}
