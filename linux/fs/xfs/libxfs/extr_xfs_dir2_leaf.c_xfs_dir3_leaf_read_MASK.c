
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xfs_daddr_t ;
typedef int xfs_dablk_t ;
struct xfs_trans {int dummy; } ;
struct xfs_inode {int dummy; } ;
struct xfs_buf {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct xfs_trans*,struct xfs_inode*,int ,int ,struct xfs_buf**,int ,int *) ;
 int VAR_2 ;
 int FUNC_1 (struct xfs_trans*,struct xfs_buf*,int ) ;

int
FUNC_2(
 struct xfs_trans *VAR_3,
 struct xfs_inode *VAR_4,
 xfs_dablk_t VAR_5,
 xfs_daddr_t VAR_6,
 struct xfs_buf **VAR_7)
{
 int VAR_8;

 VAR_8 = FUNC_0(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7,
    VAR_1, &VAR_2);
 if (!VAR_8 && VAR_3 && *VAR_7)
  FUNC_1(VAR_3, *VAR_7, VAR_0);
 return VAR_8;
}
