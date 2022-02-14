
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_inode {int dummy; } ;
typedef int loff_t ;


 int VAR_0 ;
 int FUNC_0 (struct xfs_inode*) ;
 scalar_t__ FUNC_1 (struct xfs_inode*,int) ;
 int FUNC_2 (struct xfs_inode*,int ,int ) ;
 int FUNC_3 (struct xfs_inode*) ;
 scalar_t__ FUNC_4 (struct xfs_inode*) ;
 int FUNC_5 (struct xfs_inode*,int ,int ,int) ;

__attribute__((used)) static int
FUNC_6(
 struct xfs_inode *VAR_1,
 loff_t VAR_2)
{
 int VAR_3;





 if (FUNC_1(VAR_1, 1)) {
  VAR_3 = FUNC_3(VAR_1);
  if (VAR_3)
   return VAR_3;
 }





 VAR_3 = FUNC_2(VAR_1, VAR_2, FUNC_0(VAR_1));
 if (VAR_3)
  return VAR_3;






 if (FUNC_4(VAR_1)) {
  VAR_3 = FUNC_5(VAR_1, VAR_2, VAR_0,
    1);
  if (VAR_3)
   return VAR_3;
 }

 return 0;
}
