
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ xfs_off_t ;
typedef scalar_t__ xfs_fileoff_t ;
struct xfs_inode {int i_mount; } ;


 scalar_t__ FUNC_0 (int ,scalar_t__) ;
 scalar_t__ FUNC_1 (int ,scalar_t__) ;
 int VAR_0 ;
 int FUNC_2 (struct xfs_inode*,scalar_t__,scalar_t__) ;
 int FUNC_3 (struct xfs_inode*,int,int ) ;
 int FUNC_4 (struct xfs_inode*,scalar_t__,scalar_t__*) ;

int
FUNC_5(
 struct xfs_inode *VAR_1,
 xfs_off_t VAR_2,
 xfs_off_t VAR_3)
{
 xfs_fileoff_t VAR_4;
 xfs_fileoff_t VAR_5;
 int VAR_6 = 0;

 FUNC_2(VAR_1, VAR_2, VAR_3);

 VAR_4 = FUNC_1(VAR_1->i_mount, VAR_2);
 VAR_5 = FUNC_0(VAR_1->i_mount, VAR_2 + VAR_3);
 while (VAR_5 > VAR_4 && !VAR_6)
  VAR_6 = FUNC_4(VAR_1, VAR_4, &VAR_5);

 if (VAR_6)
  FUNC_3(VAR_1, VAR_6, VAR_0);
 return VAR_6;
}
