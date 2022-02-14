
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_inode {int dummy; } ;
struct inode {int i_mtime; int i_ctime; int i_atime; } ;
struct iattr {int ia_valid; int ia_mtime; int ia_ctime; int ia_atime; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct inode* FUNC_1 (struct xfs_inode*) ;
 int VAR_3 ;
 int FUNC_2 (struct xfs_inode*,int ) ;

void
FUNC_3(
 struct xfs_inode *VAR_4,
 struct iattr *VAR_5)
{
 struct inode *VAR_6 = FUNC_1(VAR_4);

 FUNC_0(FUNC_2(VAR_4, VAR_3));

 if (VAR_5->ia_valid & VAR_0)
  VAR_6->i_atime = VAR_5->ia_atime;
 if (VAR_5->ia_valid & VAR_1)
  VAR_6->i_ctime = VAR_5->ia_ctime;
 if (VAR_5->ia_valid & VAR_2)
  VAR_6->i_mtime = VAR_5->ia_mtime;
}
