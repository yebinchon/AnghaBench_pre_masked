
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cxl_context {int pending_fault; int wq; int lock; int dsisr; int fault_dsisr; int dar; int fault_addr; } ;
struct TYPE_2__ {int (* ack_irq ) (struct cxl_context*,int ,int ) ;} ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (struct cxl_context*,int ,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct cxl_context *VAR_2)
{
 unsigned long VAR_3;

 VAR_1->ack_irq(VAR_2, VAR_0, 0);

 FUNC_0(&VAR_2->lock, VAR_3);
 VAR_2->pending_fault = 1;
 VAR_2->fault_addr = VAR_2->dar;
 VAR_2->fault_dsisr = VAR_2->dsisr;
 FUNC_1(&VAR_2->lock, VAR_3);

 FUNC_3(&VAR_2->wq);
}
