
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_buf {int b_flags; int b_sema; int b_mount; int b_pin_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct xfs_buf*,int ) ;
 int FUNC_3 (struct xfs_buf*,int ) ;
 int FUNC_4 (int ,int ) ;

void
FUNC_5(
 struct xfs_buf *VAR_2)
{
 FUNC_2(VAR_2, VAR_1);

 if (FUNC_0(&VAR_2->b_pin_count) && (VAR_2->b_flags & VAR_0))
  FUNC_4(VAR_2->b_mount, 0);
 FUNC_1(&VAR_2->b_sema);

 FUNC_3(VAR_2, VAR_1);
}
