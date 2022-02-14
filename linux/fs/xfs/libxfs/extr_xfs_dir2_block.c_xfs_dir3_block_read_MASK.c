
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xfs_trans {int dummy; } ;
struct xfs_mount {TYPE_1__* m_dir_geo; } ;
struct xfs_inode {struct xfs_mount* i_mount; } ;
struct xfs_buf {int dummy; } ;
struct TYPE_2__ {int datablk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct xfs_trans*,struct xfs_inode*,int ,int,struct xfs_buf**,int ,int *) ;
 int VAR_2 ;
 int FUNC_1 (struct xfs_trans*,struct xfs_buf*,int ) ;

int
FUNC_2(
 struct xfs_trans *VAR_3,
 struct xfs_inode *VAR_4,
 struct xfs_buf **VAR_5)
{
 struct xfs_mount *VAR_6 = VAR_4->i_mount;
 int VAR_7;

 VAR_7 = FUNC_0(VAR_3, VAR_4, VAR_6->m_dir_geo->datablk, -1, VAR_5,
    VAR_1, &VAR_2);
 if (!VAR_7 && VAR_3 && *VAR_5)
  FUNC_1(VAR_3, *VAR_5, VAR_0);
 return VAR_7;
}
