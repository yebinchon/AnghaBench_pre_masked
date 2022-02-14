
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hl_device {TYPE_1__* pdev; } ;
typedef int gfp_t ;
typedef int dma_addr_t ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 void* FUNC_0 (int *,size_t,int *,int ) ;

__attribute__((used)) static void *FUNC_1(struct hl_device *VAR_1, size_t VAR_2,
     dma_addr_t *VAR_3, gfp_t VAR_4)
{
 void *VAR_5 = FUNC_0(&VAR_1->pdev->dev, VAR_2,
      VAR_3, VAR_4);


 if (VAR_5)
  *VAR_3 += VAR_0;

 return VAR_5;
}
