
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ xfs_off_t ;
typedef scalar_t__ xfs_fileoff_t ;
typedef scalar_t__ xfs_filblks_t ;
struct xfs_mount {int dummy; } ;
struct xfs_inode {struct xfs_mount* i_mount; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct xfs_mount*,scalar_t__) ;
 scalar_t__ FUNC_2 (struct xfs_mount*,scalar_t__) ;
 int VAR_0 ;
 int FUNC_3 (struct xfs_inode*,int ) ;
 int FUNC_4 (struct xfs_inode*,int ) ;
 int FUNC_5 (struct xfs_inode*,scalar_t__,scalar_t__) ;

int
FUNC_6(
 struct xfs_inode *VAR_1,
 xfs_off_t VAR_2,
 xfs_off_t VAR_3)
{
 struct xfs_mount *VAR_4 = VAR_1->i_mount;
 xfs_fileoff_t VAR_5 = FUNC_2(VAR_4, VAR_2);
 xfs_fileoff_t VAR_6 = FUNC_1(VAR_4, VAR_2 + VAR_3);
 xfs_filblks_t VAR_7 = VAR_6 - VAR_5;
 int VAR_8;

 FUNC_0(VAR_3 != 0);

 FUNC_3(VAR_1, VAR_0);
 VAR_8 = FUNC_5(VAR_1, VAR_5, VAR_7);
 FUNC_4(VAR_1, VAR_0);
 return VAR_8;
}
