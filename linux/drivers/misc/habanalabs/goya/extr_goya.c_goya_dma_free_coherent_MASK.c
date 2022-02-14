
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hl_device {TYPE_1__* pdev; } ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,size_t,void*,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct hl_device *VAR_1, size_t VAR_2,
     void *VAR_3, dma_addr_t VAR_4)
{

 dma_addr_t VAR_5 = VAR_4 - VAR_0;

 FUNC_0(&VAR_1->pdev->dev, VAR_2, VAR_3, VAR_5);
}
