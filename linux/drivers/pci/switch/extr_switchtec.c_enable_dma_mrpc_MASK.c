
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct switchtec_dev {TYPE_1__* mmio_mrpc; int dma_mrpc_dma_addr; } ;
struct TYPE_2__ {int dma_en; int dma_addr; } ;


 int VAR_0 ;
 int FUNC_0 (struct switchtec_dev*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(struct switchtec_dev *VAR_1)
{
 FUNC_2(VAR_1->dma_mrpc_dma_addr, &VAR_1->mmio_mrpc->dma_addr);
 FUNC_0(VAR_1);
 FUNC_1(VAR_0, &VAR_1->mmio_mrpc->dma_en);
}
