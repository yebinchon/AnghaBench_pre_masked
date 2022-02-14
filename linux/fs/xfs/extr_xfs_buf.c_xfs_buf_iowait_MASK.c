
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_buf {int b_flags; int b_error; int b_iowait; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct xfs_buf*,int ) ;
 int FUNC_2 (struct xfs_buf*,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int
FUNC_4(
 struct xfs_buf *VAR_2)
{
 FUNC_0(!(VAR_2->b_flags & VAR_0));

 FUNC_1(VAR_2, VAR_1);
 FUNC_3(&VAR_2->b_iowait);
 FUNC_2(VAR_2, VAR_1);

 return VAR_2->b_error;
}
