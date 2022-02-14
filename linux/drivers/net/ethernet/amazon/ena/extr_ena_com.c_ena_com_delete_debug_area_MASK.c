
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ena_host_attribute {int * debug_area_virt_addr; int debug_area_dma_addr; int debug_area_size; } ;
struct ena_com_dev {int dmadev; struct ena_host_attribute host_attr; } ;


 int FUNC_0 (int ,int ,int *,int ) ;

void FUNC_1(struct ena_com_dev *VAR_0)
{
 struct ena_host_attribute *VAR_1 = &VAR_0->host_attr;

 if (VAR_1->debug_area_virt_addr) {
  FUNC_0(VAR_0->dmadev, VAR_1->debug_area_size,
      VAR_1->debug_area_virt_addr,
      VAR_1->debug_area_dma_addr);
  VAR_1->debug_area_virt_addr = ((void*)0);
 }
}
