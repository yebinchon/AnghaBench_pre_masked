
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_buf {int b_sema; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct xfs_buf*,int ) ;
 int FUNC_2 (struct xfs_buf*,int ) ;

int
FUNC_3(
 struct xfs_buf *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(&VAR_1->b_sema) == 0;
 if (VAR_2)
  FUNC_1(VAR_1, VAR_0);
 else
  FUNC_2(VAR_1, VAR_0);
 return VAR_2;
}
