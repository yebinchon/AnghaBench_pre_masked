
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpfc_hba {int lpfc_sg_dma_buf_pool; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 void* FUNC_0 (int ,int ,int *) ;

void *
FUNC_1(struct lpfc_hba *VAR_1, int VAR_2, dma_addr_t *VAR_3)
{
 void *VAR_4;

 VAR_4 = FUNC_0(VAR_1->lpfc_sg_dma_buf_pool, VAR_0, VAR_3);
 return VAR_4;
}
