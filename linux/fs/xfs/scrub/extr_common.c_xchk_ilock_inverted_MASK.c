
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
struct xfs_inode {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct xfs_inode*,int ) ;

int
FUNC_2(
 struct xfs_inode *VAR_1,
 uint VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < 20; VAR_3++) {
  if (FUNC_1(VAR_1, VAR_2))
   return 0;
  FUNC_0(1);
 }
 return -VAR_0;
}
