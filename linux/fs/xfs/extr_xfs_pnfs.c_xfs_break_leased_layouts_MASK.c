
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
struct xfs_inode {int dummy; } ;
struct inode {int dummy; } ;


 int VAR_0 ;
 struct xfs_inode* FUNC_0 (struct inode*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct inode*,int) ;
 int FUNC_2 (struct xfs_inode*,int ) ;
 int FUNC_3 (struct xfs_inode*,int ) ;

int
FUNC_4(
 struct inode *VAR_3,
 uint *VAR_4,
 bool *VAR_5)
{
 struct xfs_inode *VAR_6 = FUNC_0(VAR_3);
 int VAR_7;

 while ((VAR_7 = FUNC_1(VAR_3, 0)) == -VAR_0) {
  FUNC_3(VAR_6, *VAR_4);
  *VAR_5 = 1;
  VAR_7 = FUNC_1(VAR_3, 1);
  *VAR_4 &= ~VAR_2;
  *VAR_4 |= VAR_1;
  FUNC_2(VAR_6, *VAR_4);
 }

 return VAR_7;
}
