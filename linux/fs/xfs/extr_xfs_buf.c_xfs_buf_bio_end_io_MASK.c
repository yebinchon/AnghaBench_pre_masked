
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_buf {int b_flags; int b_io_remaining; int b_addr; int b_error; int b_io_error; } ;
struct bio {scalar_t__ bi_status; scalar_t__ bi_private; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct bio*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct xfs_buf*) ;
 scalar_t__ FUNC_6 (struct xfs_buf*) ;
 int FUNC_7 (struct xfs_buf*) ;

__attribute__((used)) static void
FUNC_8(
 struct bio *VAR_1)
{
 struct xfs_buf *VAR_2 = (struct xfs_buf *)VAR_1->bi_private;





 if (VAR_1->bi_status) {
  int VAR_3 = FUNC_2(VAR_1->bi_status);

  FUNC_3(&VAR_2->b_io_error, 0, VAR_3);
 }

 if (!VAR_2->b_error && FUNC_6(VAR_2) && (VAR_2->b_flags & VAR_0))
  FUNC_4(VAR_2->b_addr, FUNC_7(VAR_2));

 if (FUNC_0(&VAR_2->b_io_remaining) == 1)
  FUNC_5(VAR_2);
 FUNC_1(VAR_1);
}
