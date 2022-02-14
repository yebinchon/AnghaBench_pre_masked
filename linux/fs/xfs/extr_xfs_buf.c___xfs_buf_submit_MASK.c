
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_buf {int b_flags; scalar_t__ b_error; int b_io_remaining; scalar_t__ b_io_error; int b_mount; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct xfs_buf*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (struct xfs_buf*,int ) ;
 int FUNC_6 (struct xfs_buf*) ;
 int FUNC_7 (struct xfs_buf*) ;
 int FUNC_8 (struct xfs_buf*) ;
 int FUNC_9 (struct xfs_buf*) ;
 int FUNC_10 (struct xfs_buf*,int) ;
 int FUNC_11 (struct xfs_buf*) ;
 int FUNC_12 (struct xfs_buf*) ;
 int FUNC_13 (struct xfs_buf*) ;
 int FUNC_14 (struct xfs_buf*) ;

int
FUNC_15(
 struct xfs_buf *VAR_6,
 bool VAR_7)
{
 int VAR_8 = 0;

 FUNC_5(VAR_6, VAR_4);

 FUNC_0(!(VAR_6->b_flags & VAR_5));


 if (FUNC_1(VAR_6->b_mount)) {
  FUNC_10(VAR_6, -VAR_0);
  VAR_6->b_flags &= ~VAR_2;
  FUNC_13(VAR_6);
  FUNC_8(VAR_6);
  return -VAR_0;
 }






 FUNC_6(VAR_6);

 if (VAR_6->b_flags & VAR_3)
  FUNC_14(VAR_6);


 VAR_6->b_io_error = 0;






 FUNC_4(&VAR_6->b_io_remaining, 1);
 if (VAR_6->b_flags & VAR_1)
  FUNC_7(VAR_6);
 FUNC_2(VAR_6);






 if (FUNC_3(&VAR_6->b_io_remaining) == 1) {
  if (VAR_6->b_error || !(VAR_6->b_flags & VAR_1))
   FUNC_8(VAR_6);
  else
   FUNC_9(VAR_6);
 }

 if (VAR_7)
  VAR_8 = FUNC_11(VAR_6);






 FUNC_12(VAR_6);
 return VAR_8;
}
