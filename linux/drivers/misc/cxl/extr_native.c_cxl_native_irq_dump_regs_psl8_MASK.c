
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
struct TYPE_8__ {int dev; TYPE_4__* adapter; } ;
struct TYPE_7__ {TYPE_1__* sl_ops; } ;
struct TYPE_6__ {scalar_t__ register_serr_irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_3__*,int ) ;
 int FUNC_1 (TYPE_4__*,int ) ;
 int FUNC_2 (TYPE_3__*,int ) ;
 int FUNC_3 (int *,char*,int ) ;

void FUNC_4(struct cxl_context *VAR_5)
{
 u64 VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;

 VAR_6 = FUNC_1(VAR_5->afu->adapter, VAR_1);
 VAR_7 = FUNC_1(VAR_5->afu->adapter, VAR_2);
 VAR_8 = FUNC_2(VAR_5->afu, VAR_3);
 VAR_10 = FUNC_2(VAR_5->afu, VAR_0);

 FUNC_3(&VAR_5->afu->dev, "PSL_FIR1: 0x%016llx\n", VAR_6);
 FUNC_3(&VAR_5->afu->dev, "PSL_FIR2: 0x%016llx\n", VAR_7);
 if (VAR_5->afu->adapter->native->sl_ops->register_serr_irq) {
  VAR_9 = FUNC_2(VAR_5->afu, VAR_4);
  FUNC_0(VAR_5->afu, VAR_9);
 }
 FUNC_3(&VAR_5->afu->dev, "PSL_FIR_SLICE_An: 0x%016llx\n", VAR_8);
 FUNC_3(&VAR_5->afu->dev, "CXL_PSL_AFU_DEBUG_An: 0x%016llx\n", VAR_10);
}
