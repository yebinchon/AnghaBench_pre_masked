
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dw_mci {int pending_events; TYPE_1__* dma_ops; scalar_t__ using_dma; } ;
struct TYPE_2__ {int (* cleanup ) (struct dw_mci*) ;int (* stop ) (struct dw_mci*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct dw_mci*) ;
 int FUNC_2 (struct dw_mci*) ;

__attribute__((used)) static void FUNC_3(struct dw_mci *VAR_1)
{
 if (VAR_1->using_dma) {
  VAR_1->dma_ops->stop(VAR_1);
  VAR_1->dma_ops->cleanup(VAR_1);
 }


 FUNC_0(VAR_0, &VAR_1->pending_events);
}
