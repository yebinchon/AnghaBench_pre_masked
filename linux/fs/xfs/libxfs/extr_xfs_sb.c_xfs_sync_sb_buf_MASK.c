
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xfs_trans {int dummy; } ;
struct xfs_mount {int dummy; } ;
struct xfs_buf {int dummy; } ;
struct TYPE_2__ {int tr_sb; } ;


 TYPE_1__* FUNC_0 (struct xfs_mount*) ;
 int FUNC_1 (struct xfs_buf*) ;
 int FUNC_2 (struct xfs_buf*) ;
 int FUNC_3 (struct xfs_trans*) ;
 int FUNC_4 (struct xfs_mount*,int *,int ,int ,int ,struct xfs_trans**) ;
 int FUNC_5 (struct xfs_trans*,struct xfs_buf*) ;
 int FUNC_6 (struct xfs_trans*) ;
 struct xfs_buf* FUNC_7 (struct xfs_trans*,struct xfs_mount*) ;
 int FUNC_8 (struct xfs_trans*) ;

int
FUNC_9(
 struct xfs_mount *VAR_0)
{
 struct xfs_trans *VAR_1;
 struct xfs_buf *VAR_2;
 int VAR_3;

 VAR_3 = FUNC_4(VAR_0, &FUNC_0(VAR_0)->tr_sb, 0, 0, 0, &VAR_1);
 if (VAR_3)
  return VAR_3;

 VAR_2 = FUNC_7(VAR_1, VAR_0);
 FUNC_3(VAR_1);
 FUNC_5(VAR_1, VAR_2);
 FUNC_8(VAR_1);
 VAR_3 = FUNC_6(VAR_1);
 if (VAR_3)
  goto out;



 VAR_3 = FUNC_2(VAR_2);
out:
 FUNC_1(VAR_2);
 return VAR_3;
}
