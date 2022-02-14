
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct gdma_dma_dev {int ddev; int task; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 struct gdma_dma_dev* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_0)
{
 struct gdma_dma_dev *VAR_1 = FUNC_2(VAR_0);

 FUNC_3(&VAR_1->task);
 FUNC_1(VAR_0->dev.of_node);
 FUNC_0(&VAR_1->ddev);

 return 0;
}
