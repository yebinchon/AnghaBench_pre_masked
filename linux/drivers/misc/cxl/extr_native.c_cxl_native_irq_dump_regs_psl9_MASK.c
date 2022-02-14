
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u64 ;
struct cxl_context {TYPE_3__* afu; } ;
struct TYPE_9__ {TYPE_2__* native; } ;
struct TYPE_8__ {TYPE_4__* adapter; int dev; } ;
struct TYPE_7__ {TYPE_1__* sl_ops; } ;
struct TYPE_6__ {scalar_t__ register_serr_irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,int ) ;
 int FUNC_1 (TYPE_4__*,int ) ;
 int FUNC_2 (TYPE_3__*,int ) ;
 int FUNC_3 (int *,char*,int ) ;

void FUNC_4(struct cxl_context *VAR_2)
{
 u64 VAR_3, VAR_4;

 VAR_3 = FUNC_1(VAR_2->afu->adapter, VAR_0);

 FUNC_3(&VAR_2->afu->dev, "PSL_FIR1: 0x%016llx\n", VAR_3);
 if (VAR_2->afu->adapter->native->sl_ops->register_serr_irq) {
  VAR_4 = FUNC_2(VAR_2->afu, VAR_1);
  FUNC_0(VAR_2->afu, VAR_4);
 }
}
