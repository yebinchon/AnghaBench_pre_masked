
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct cxl_context {scalar_t__ status; TYPE_1__* afu; } ;
typedef scalar_t__ irq_hw_number_t ;
struct TYPE_4__ {int (* update_ivtes ) (struct cxl_context*) ;int psl_interrupt; } ;
struct TYPE_3__ {int pp_irqs; int adapter; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct cxl_context*,int) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct cxl_context*,int ) ;
 int FUNC_4 (int ,scalar_t__,int ,struct cxl_context*,char*) ;
 TYPE_2__* VAR_2 ;
 int FUNC_5 (struct cxl_context*) ;

int FUNC_6(struct cxl_context *VAR_3, int VAR_4)
{
 int VAR_5;
 irq_hw_number_t VAR_6;

 if (VAR_4 == 0)
  VAR_4 = VAR_3->afu->pp_irqs;
 VAR_5 = FUNC_1(VAR_3, VAR_4);
 if (VAR_5)
  return VAR_5;

 if (!FUNC_2(VAR_0)) {



  VAR_6 = FUNC_3(VAR_3, 0);
  if (VAR_6)
   FUNC_4(VAR_3->afu->adapter, VAR_6, VAR_2->psl_interrupt, VAR_3, "psl");
 }

 if (VAR_3->status == VAR_1) {
  if (VAR_2->update_ivtes)
   VAR_2->update_ivtes(VAR_3);
  else FUNC_0(1, "BUG: cxl_allocate_afu_irqs must be called prior to starting the context on this platform\n");
 }

 return VAR_5;
}
