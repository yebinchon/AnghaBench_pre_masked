
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct ena_host_attribute {scalar_t__ debug_area_size; int debug_area_virt_addr; int debug_area_dma_addr; } ;
struct ena_com_dev {int dmadev; struct ena_host_attribute host_attr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,scalar_t__,int *,int ) ;
 scalar_t__ FUNC_1 (int) ;

int FUNC_2(struct ena_com_dev *VAR_2,
    u32 VAR_3)
{
 struct ena_host_attribute *VAR_4 = &VAR_2->host_attr;

 VAR_4->debug_area_virt_addr =
  FUNC_0(VAR_2->dmadev, VAR_3,
       &VAR_4->debug_area_dma_addr,
       VAR_1);
 if (FUNC_1(!VAR_4->debug_area_virt_addr)) {
  VAR_4->debug_area_size = 0;
  return -VAR_0;
 }

 VAR_4->debug_area_size = VAR_3;

 return 0;
}
