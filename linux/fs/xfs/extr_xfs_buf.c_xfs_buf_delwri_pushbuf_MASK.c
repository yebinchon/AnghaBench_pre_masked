
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_buf {int b_flags; int b_list; } ;
struct list_head {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *,int *) ;
 int VAR_2 ;
 int FUNC_3 (struct xfs_buf*,int ) ;
 int FUNC_4 (int *,struct list_head*) ;
 int FUNC_5 (struct xfs_buf*) ;
 int FUNC_6 (struct xfs_buf*) ;
 int FUNC_7 (struct xfs_buf*) ;

int
FUNC_8(
 struct xfs_buf *VAR_3,
 struct list_head *VAR_4)
{
 FUNC_1 (VAR_2);
 int VAR_5;

 FUNC_0(VAR_3->b_flags & VAR_1);

 FUNC_3(VAR_3, VAR_0);





 FUNC_6(VAR_3);
 FUNC_2(&VAR_3->b_list, &VAR_2);
 FUNC_7(VAR_3);







 FUNC_4(&VAR_2, VAR_4);






 VAR_5 = FUNC_5(VAR_3);
 VAR_3->b_flags |= VAR_1;
 FUNC_7(VAR_3);

 return VAR_5;
}
