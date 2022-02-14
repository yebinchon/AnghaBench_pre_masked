
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ena_host_attribute {TYPE_1__* host_info; int host_info_dma_addr; } ;
struct ena_com_dev {int dmadev; struct ena_host_attribute host_attr; } ;
struct TYPE_2__ {int ena_spec_version; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__* FUNC_0 (int ,int ,int *,int ) ;
 scalar_t__ FUNC_1 (int) ;

int FUNC_2(struct ena_com_dev *VAR_6)
{
 struct ena_host_attribute *VAR_7 = &VAR_6->host_attr;

 VAR_7->host_info =
  FUNC_0(VAR_6->dmadev, VAR_5,
       &VAR_7->host_info_dma_addr, VAR_4);
 if (FUNC_1(!VAR_7->host_info))
  return -VAR_3;

 VAR_7->host_info->ena_spec_version = ((VAR_0 <<
  VAR_2) |
  (VAR_1));

 return 0;
}
