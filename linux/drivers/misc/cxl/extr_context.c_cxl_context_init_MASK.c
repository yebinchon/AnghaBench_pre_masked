
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__* range; } ;
struct cxl_context {int master; int assign_tidr; int pending_irq; int pending_fault; int pending_afu_err; int pe; int external_pe; int pe_inserted; struct cxl_afu* afu; int * elem; int status; int status_mutex; TYPE_1__ irqs; int irq_names; int * irq_bitmap; int lock; int wq; int fault_work; int sste_lock; scalar_t__ tidr; int * mapping; int mapping_lock; int * pid; } ;
struct cxl_afu {TYPE_2__* native; int contexts_lock; int num_procs; int contexts_idr; } ;
struct TYPE_4__ {int * spa; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct cxl_afu*) ;
 int FUNC_4 (struct cxl_context*) ;
 int VAR_5 ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (int *,struct cxl_context*,int ,int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 () ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

int FUNC_14(struct cxl_context *VAR_6, struct cxl_afu *VAR_7, bool VAR_8)
{
 int VAR_9;

 VAR_6->afu = VAR_7;
 VAR_6->master = VAR_8;
 VAR_6->pid = ((void*)0);
 FUNC_10(&VAR_6->mapping_lock);
 VAR_6->mapping = ((void*)0);
 VAR_6->tidr = 0;
 VAR_6->assign_tidr = 0;

 if (FUNC_5()) {
  FUNC_13(&VAR_6->sste_lock);
  VAR_9 = FUNC_4(VAR_6);
  if (VAR_9)
   return VAR_9;
 }

 FUNC_1(&VAR_6->fault_work, VAR_5);

 FUNC_9(&VAR_6->wq);
 FUNC_13(&VAR_6->lock);

 VAR_6->irq_bitmap = ((void*)0);
 VAR_6->pending_irq = 0;
 VAR_6->pending_fault = 0;
 VAR_6->pending_afu_err = 0;

 FUNC_0(&VAR_6->irq_names);
 for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++)
  VAR_6->irqs.range[VAR_9] = 0;

 FUNC_10(&VAR_6->status_mutex);

 VAR_6->status = VAR_4;





 FUNC_11(&VAR_7->contexts_lock);
 FUNC_7(VAR_2);
 VAR_9 = FUNC_6(&VAR_6->afu->contexts_idr, VAR_6, 0,
        VAR_6->afu->num_procs, VAR_3);
 FUNC_8();
 FUNC_12(&VAR_7->contexts_lock);
 if (VAR_9 < 0)
  return VAR_9;

 VAR_6->pe = VAR_9;
 if (FUNC_2(VAR_0)) {
  VAR_6->elem = &VAR_6->afu->native->spa[VAR_9];
  VAR_6->external_pe = VAR_6->pe;
 } else {
  VAR_6->external_pe = -1;
 }
 VAR_6->pe_inserted = 0;





 FUNC_3(VAR_7);
 return 0;
}
