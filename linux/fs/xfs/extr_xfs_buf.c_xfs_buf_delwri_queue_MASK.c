
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_buf {int b_flags; int b_list; int b_hold; } ;
struct list_head {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,struct list_head*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (struct xfs_buf*,int ) ;
 int FUNC_5 (struct xfs_buf*,int ) ;
 int FUNC_6 (struct xfs_buf*) ;

bool
FUNC_7(
 struct xfs_buf *VAR_3,
 struct list_head *VAR_4)
{
 FUNC_0(FUNC_6(VAR_3));
 FUNC_0(!(VAR_3->b_flags & VAR_0));






 if (VAR_3->b_flags & VAR_2) {
  FUNC_5(VAR_3, VAR_1);
  return 0;
 }

 FUNC_4(VAR_3, VAR_1);
 VAR_3->b_flags |= VAR_2;
 if (FUNC_3(&VAR_3->b_list)) {
  FUNC_1(&VAR_3->b_hold);
  FUNC_2(&VAR_3->b_list, VAR_4);
 }

 return 1;
}
