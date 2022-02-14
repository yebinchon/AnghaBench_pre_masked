
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iavf_hw {scalar_t__ back; } ;
struct iavf_dma_mem {scalar_t__ pa; int va; int size; } ;
struct iavf_adapter {TYPE_1__* pdev; } ;
typedef enum iavf_status { ____Placeholder_iavf_status } iavf_status ;
typedef int dma_addr_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ,int ) ;

enum iavf_status FUNC_1(struct iavf_hw *VAR_1,
         struct iavf_dma_mem *VAR_2)
{
 struct iavf_adapter *VAR_3 = (struct iavf_adapter *)VAR_1->back;

 if (!VAR_2 || !VAR_2->va)
  return VAR_0;
 FUNC_0(&VAR_3->pdev->dev, VAR_2->size,
     VAR_2->va, (dma_addr_t)VAR_2->pa);
 return 0;
}
