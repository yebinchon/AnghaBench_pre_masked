
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct cxl_context {int status; int * mm; TYPE_1__* afu; int pid; int fault_work; int status_mutex; } ;
typedef enum cxl_context_status { ____Placeholder_cxl_context_status } cxl_context_status ;
struct TYPE_4__ {int (* irq_wait ) (struct cxl_context*) ;scalar_t__ (* link_ok ) (int ,TYPE_1__*) ;scalar_t__ (* detach_process ) (struct cxl_context*) ;} ;
struct TYPE_3__ {int adapter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct cxl_context*) ;
 int FUNC_3 () ;
 TYPE_2__* VAR_3 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (struct cxl_context*) ;
 scalar_t__ FUNC_10 (int ,TYPE_1__*) ;
 int FUNC_11 (struct cxl_context*) ;

int FUNC_12(struct cxl_context *VAR_4)
{
 enum cxl_context_status VAR_5;

 FUNC_6(&VAR_4->status_mutex);
 VAR_5 = VAR_4->status;
 VAR_4->status = VAR_0;
 FUNC_7(&VAR_4->status_mutex);
 if (VAR_5 != VAR_2)
  return -VAR_1;




 FUNC_0(VAR_3->detach_process(VAR_4) &&
  VAR_3->link_ok(VAR_4->afu->adapter, VAR_4->afu));
 FUNC_4(&VAR_4->fault_work);





 if (VAR_3->irq_wait)
  VAR_3->irq_wait(VAR_4);


 FUNC_8(VAR_4->pid);

 FUNC_3();


 FUNC_1(VAR_4->afu->adapter);


 FUNC_2(VAR_4);
 if (VAR_4->mm)
  FUNC_5(VAR_4->mm);
 VAR_4->mm = ((void*)0);

 return 0;
}
