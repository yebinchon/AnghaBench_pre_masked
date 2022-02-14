
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct cxl {TYPE_2__* native; int dev; } ;
typedef int irqreturn_t ;
struct TYPE_4__ {TYPE_1__* sl_ops; } ;
struct TYPE_3__ {int (* err_irq_dump_registers ) (struct cxl*) ;int (* debugfs_stop_trace ) (struct cxl*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (struct cxl*,int ) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (struct cxl*) ;
 int FUNC_4 (struct cxl*) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_2, void *VAR_3)
{
 struct cxl *VAR_4 = VAR_3;
 u64 VAR_5;

 FUNC_0(1, "CXL ERROR interrupt %i\n", VAR_2);

 VAR_5 = FUNC_1(VAR_4, VAR_0);
 FUNC_2(&VAR_4->dev, "PSL_ErrIVTE: 0x%016llx\n", VAR_5);

 if (VAR_4->native->sl_ops->debugfs_stop_trace) {
  FUNC_2(&VAR_4->dev, "STOPPING CXL TRACE\n");
  VAR_4->native->sl_ops->debugfs_stop_trace(VAR_4);
 }

 if (VAR_4->native->sl_ops->err_irq_dump_registers)
  VAR_4->native->sl_ops->err_irq_dump_registers(VAR_4);

 return VAR_1;
}
