
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u64 ;
struct cxl_context {TYPE_3__* afu; } ;
typedef int irqreturn_t ;
struct TYPE_10__ {int (* ack_irq ) (struct cxl_context*,int ,int ) ;} ;
struct TYPE_9__ {TYPE_2__* native; } ;
struct TYPE_8__ {TYPE_4__* adapter; int dev; } ;
struct TYPE_7__ {TYPE_1__* sl_ops; } ;
struct TYPE_6__ {int (* debugfs_stop_trace ) (TYPE_4__*) ;int (* psl_irq_dump_registers ) (struct cxl_context*) ;} ;


 TYPE_5__* VAR_0 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (struct cxl_context*) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (struct cxl_context*,int ,int ) ;

__attribute__((used)) static irqreturn_t FUNC_4(struct cxl_context *VAR_1,
      u64 VAR_2, u64 VAR_3)
{

 FUNC_0(&VAR_1->afu->dev, "PSL ERROR STATUS: 0x%016llx\n", VAR_3);

 if (VAR_1->afu->adapter->native->sl_ops->psl_irq_dump_registers)
  VAR_1->afu->adapter->native->sl_ops->psl_irq_dump_registers(VAR_1);

 if (VAR_1->afu->adapter->native->sl_ops->debugfs_stop_trace) {
  FUNC_0(&VAR_1->afu->dev, "STOPPING CXL TRACE\n");
  VAR_1->afu->adapter->native->sl_ops->debugfs_stop_trace(VAR_1->afu->adapter);
 }

 return VAR_0->ack_irq(VAR_1, 0, VAR_3);
}
