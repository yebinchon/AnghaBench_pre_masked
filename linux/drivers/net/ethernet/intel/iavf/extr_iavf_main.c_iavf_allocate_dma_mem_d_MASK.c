
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct iavf_hw {scalar_t__ back; } ;
struct iavf_dma_mem {scalar_t__ va; int pa; int size; } ;
struct iavf_adapter {TYPE_1__* pdev; } ;
typedef enum iavf_status { ____Placeholder_iavf_status } iavf_status ;
typedef int dma_addr_t ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int *,int ,int *,int ) ;

enum iavf_status FUNC_2(struct iavf_hw *VAR_3,
      struct iavf_dma_mem *VAR_4,
      u64 VAR_5, u32 VAR_6)
{
 struct iavf_adapter *VAR_7 = (struct iavf_adapter *)VAR_3->back;

 if (!VAR_4)
  return VAR_2;

 VAR_4->size = FUNC_0(VAR_5, VAR_6);
 VAR_4->va = FUNC_1(&VAR_7->pdev->dev, VAR_4->size,
         (dma_addr_t *)&VAR_4->pa, VAR_0);
 if (VAR_4->va)
  return 0;
 else
  return VAR_1;
}
