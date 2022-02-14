
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ena_com_mmio_read {int * read_resp; int read_resp_dma_addr; } ;
struct ena_com_dev {int dmadev; scalar_t__ reg_bar; struct ena_com_mmio_read mmio_read; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int,int *,int ) ;
 int FUNC_1 (int,scalar_t__) ;

void FUNC_2(struct ena_com_dev *VAR_2)
{
 struct ena_com_mmio_read *VAR_3 = &VAR_2->mmio_read;

 FUNC_1(0x0, VAR_2->reg_bar + VAR_1);
 FUNC_1(0x0, VAR_2->reg_bar + VAR_0);

 FUNC_0(VAR_2->dmadev, sizeof(*VAR_3->read_resp),
     VAR_3->read_resp, VAR_3->read_resp_dma_addr);

 VAR_3->read_resp = ((void*)0);
}
