
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_inode {int dummy; } ;
typedef scalar_t__ loff_t ;


 int FUNC_0 (struct xfs_inode*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,scalar_t__,scalar_t__,int *,int *) ;
 int FUNC_3 (struct xfs_inode*,scalar_t__,scalar_t__) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_4(
 struct xfs_inode *VAR_1,
 loff_t VAR_2)
{
 loff_t VAR_3 = FUNC_1(FUNC_0(VAR_1));

 if (VAR_2 <= VAR_3)
  return 0;

 FUNC_3(VAR_1, VAR_3, VAR_2 - VAR_3);
 return FUNC_2(FUNC_0(VAR_1), VAR_3, VAR_2 - VAR_3, ((void*)0),
   &VAR_0);
}
