
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_trans_res {int member_0; } ;
struct xfs_trans {int dummy; } ;
struct xfs_mount {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct xfs_mount*,struct xfs_trans_res*,int ,int ,int ,struct xfs_trans**) ;

int
FUNC_1(
 struct xfs_mount *VAR_1,
 struct xfs_trans **VAR_2)
{
 struct xfs_trans_res VAR_3 = {0};

 return FUNC_0(VAR_1, &VAR_3, 0, 0, VAR_0, VAR_2);
}
