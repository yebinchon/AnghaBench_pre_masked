
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
struct xfs_inode {int dummy; } ;
struct inode {int i_mode; } ;
struct iattr {int ia_mode; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 struct inode* FUNC_1 (struct xfs_inode*) ;
 int VAR_1 ;
 int FUNC_2 (struct xfs_inode*,int ) ;

__attribute__((used)) static void
FUNC_3(
 struct xfs_inode *VAR_2,
 struct iattr *VAR_3)
{
 struct inode *VAR_4 = FUNC_1(VAR_2);
 umode_t VAR_5 = VAR_3->ia_mode;

 FUNC_0(FUNC_2(VAR_2, VAR_1));

 VAR_4->i_mode &= VAR_0;
 VAR_4->i_mode |= VAR_5 & ~VAR_0;
}
