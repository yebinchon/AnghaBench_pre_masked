
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int xfs_off_t ;
struct xfs_trans {int dummy; } ;
struct xfs_mount {int dummy; } ;
struct xfs_inode {struct xfs_mount* i_mount; } ;
struct TYPE_2__ {int tr_fsyncts; } ;


 TYPE_1__* FUNC_0 (struct xfs_mount*) ;
 int FUNC_1 (struct xfs_inode*,struct xfs_trans*,int ,size_t) ;
 int FUNC_2 (struct xfs_mount*,int *,int ,int ,int ,struct xfs_trans**) ;

int
FUNC_3(
 struct xfs_inode *VAR_0,
 xfs_off_t VAR_1,
 size_t VAR_2)
{
 struct xfs_mount *VAR_3 = VAR_0->i_mount;
 struct xfs_trans *VAR_4;
 int VAR_5;

 VAR_5 = FUNC_2(VAR_3, &FUNC_0(VAR_3)->tr_fsyncts, 0, 0, 0, &VAR_4);
 if (VAR_5)
  return VAR_5;

 return FUNC_1(VAR_0, VAR_4, VAR_1, VAR_2);
}
