
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u64 ;
struct TYPE_2__ {int count; void* dsisr; void* addr; } ;
struct ocxl_context {int events_wq; int xsl_error_lock; TYPE_1__ xsl_error; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(void *VAR_0, u64 VAR_1, u64 VAR_2)
{
 struct ocxl_context *VAR_3 = (struct ocxl_context *) VAR_0;

 FUNC_0(&VAR_3->xsl_error_lock);
 VAR_3->xsl_error.addr = VAR_1;
 VAR_3->xsl_error.dsisr = VAR_2;
 VAR_3->xsl_error.count++;
 FUNC_1(&VAR_3->xsl_error_lock);

 FUNC_2(&VAR_3->events_wq);
}
