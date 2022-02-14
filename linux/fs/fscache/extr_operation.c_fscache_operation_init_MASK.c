
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fscache_operation {int pend_link; int release; int cancel; int processor; int debug_id; int state; int usage; int work; } ;
struct fscache_cookie {int dummy; } ;
typedef int fscache_operation_release_t ;
typedef int fscache_operation_processor_t ;
typedef scalar_t__ fscache_operation_cancel_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct fscache_cookie*,struct fscache_operation*,int ) ;

void FUNC_6(struct fscache_cookie *VAR_6,
       struct fscache_operation *VAR_7,
       fscache_operation_processor_t VAR_8,
       fscache_operation_cancel_t VAR_9,
       fscache_operation_release_t VAR_10)
{
 FUNC_1(&VAR_7->work, VAR_4);
 FUNC_3(&VAR_7->usage, 1);
 VAR_7->state = VAR_0;
 VAR_7->debug_id = FUNC_2(&VAR_2);
 VAR_7->processor = VAR_8;
 VAR_7->cancel = VAR_9 ?: VAR_5;
 VAR_7->release = VAR_10;
 FUNC_0(&VAR_7->pend_link);
 FUNC_4(&VAR_1);
 FUNC_5(VAR_6, VAR_7, VAR_3);
}
