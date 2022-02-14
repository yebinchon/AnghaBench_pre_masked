
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_buf {int * b_iodone; int b_li_list; int * b_log_item; scalar_t__ b_first_retry_time; scalar_t__ b_retries; scalar_t__ b_last_error; scalar_t__ b_error; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct xfs_buf*) ;
 scalar_t__ FUNC_2 (struct xfs_buf*) ;
 int FUNC_3 (struct xfs_buf*) ;

void
FUNC_4(
 struct xfs_buf *VAR_0)
{





 if (VAR_0->b_error && FUNC_2(VAR_0))
  return;





 VAR_0->b_last_error = 0;
 VAR_0->b_retries = 0;
 VAR_0->b_first_retry_time = 0;

 FUNC_1(VAR_0);
 VAR_0->b_log_item = ((void*)0);
 FUNC_0(&VAR_0->b_li_list);
 VAR_0->b_iodone = ((void*)0);
 FUNC_3(VAR_0);
}
