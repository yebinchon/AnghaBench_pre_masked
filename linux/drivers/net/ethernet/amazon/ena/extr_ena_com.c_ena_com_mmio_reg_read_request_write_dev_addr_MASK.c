
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ena_com_mmio_read {int read_resp_dma_addr; } ;
struct ena_com_dev {scalar_t__ reg_bar; struct ena_com_mmio_read mmio_read; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ,scalar_t__) ;

void FUNC_3(struct ena_com_dev *VAR_2)
{
 struct ena_com_mmio_read *VAR_3 = &VAR_2->mmio_read;
 u32 VAR_4, VAR_5;

 VAR_4 = FUNC_1(VAR_3->read_resp_dma_addr);
 VAR_5 = FUNC_0(VAR_3->read_resp_dma_addr);

 FUNC_2(VAR_4, VAR_2->reg_bar + VAR_1);
 FUNC_2(VAR_5, VAR_2->reg_bar + VAR_0);
}
