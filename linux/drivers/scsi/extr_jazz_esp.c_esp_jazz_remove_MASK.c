
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct esp {TYPE_1__* host; int command_block_dma; int command_block; int dev; } ;
struct TYPE_2__ {unsigned int irq; } ;


 struct esp* FUNC_0 (int *) ;
 int FUNC_1 (int ,int,int ,int ) ;
 int FUNC_2 (unsigned int,struct esp*) ;
 int FUNC_3 (struct esp*) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_0)
{
 struct esp *VAR_1 = FUNC_0(&VAR_0->dev);
 unsigned int VAR_2 = VAR_1->host->irq;

 FUNC_3(VAR_1);

 FUNC_2(VAR_2, VAR_1);
 FUNC_1(VAR_1->dev, 16,
     VAR_1->command_block,
     VAR_1->command_block_dma);

 FUNC_4(VAR_1->host);

 return 0;
}
