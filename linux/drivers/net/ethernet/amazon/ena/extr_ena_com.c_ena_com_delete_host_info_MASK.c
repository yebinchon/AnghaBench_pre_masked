
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ena_host_attribute {int * host_info; int host_info_dma_addr; } ;
struct ena_com_dev {int dmadev; struct ena_host_attribute host_attr; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int *,int ) ;

void FUNC_1(struct ena_com_dev *VAR_1)
{
 struct ena_host_attribute *VAR_2 = &VAR_1->host_attr;

 if (VAR_2->host_info) {
  FUNC_0(VAR_1->dmadev, VAR_0, VAR_2->host_info,
      VAR_2->host_info_dma_addr);
  VAR_2->host_info = ((void*)0);
 }
}
