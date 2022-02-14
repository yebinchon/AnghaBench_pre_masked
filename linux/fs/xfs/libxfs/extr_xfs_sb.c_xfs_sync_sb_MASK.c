
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xfs_trans {int dummy; } ;
struct xfs_mount {int dummy; } ;
struct TYPE_2__ {int tr_sb; } ;


 TYPE_1__* FUNC_0 (struct xfs_mount*) ;
 int VAR_0 ;
 int FUNC_1 (struct xfs_trans*) ;
 int FUNC_2 (struct xfs_mount*,int *,int ,int ,int ,struct xfs_trans**) ;
 int FUNC_3 (struct xfs_trans*) ;
 int FUNC_4 (struct xfs_trans*) ;

int
FUNC_5(
 struct xfs_mount *VAR_1,
 bool VAR_2)
{
 struct xfs_trans *VAR_3;
 int VAR_4;

 VAR_4 = FUNC_2(VAR_1, &FUNC_0(VAR_1)->tr_sb, 0, 0,
   VAR_0, &VAR_3);
 if (VAR_4)
  return VAR_4;

 FUNC_1(VAR_3);
 if (VAR_2)
  FUNC_4(VAR_3);
 return FUNC_3(VAR_3);
}
