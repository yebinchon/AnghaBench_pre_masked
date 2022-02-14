
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct platform_device {int dev; int * resource; } ;
struct esp {scalar_t__ dmarev; TYPE_1__* host; int dma_regs; int regs; int command_block_dma; int command_block; struct platform_device* dma; } ;
struct TYPE_2__ {unsigned int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct esp* FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_5 (unsigned int,struct esp*) ;
 int FUNC_6 (int *,int ,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct esp*) ;
 int FUNC_10 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_4)
{
 struct esp *VAR_5 = FUNC_0(&VAR_4->dev);
 struct platform_device *VAR_6 = VAR_5->dma;
 unsigned int VAR_7 = VAR_5->host->irq;
 bool VAR_8;
 u32 VAR_9;

 FUNC_9(VAR_5);


 VAR_9 = FUNC_3(VAR_0);
 FUNC_4(VAR_9 & ~VAR_1, VAR_0);

 FUNC_5(VAR_7, VAR_5);

 VAR_8 = (VAR_5->dmarev == VAR_3);

 FUNC_2(&VAR_4->dev, 16,
     VAR_5->command_block,
     VAR_5->command_block_dma);
 FUNC_6(&VAR_4->resource[(VAR_8 ? 1 : 0)], VAR_5->regs,
     VAR_2);
 FUNC_6(&VAR_6->resource[0], VAR_5->dma_regs,
     FUNC_8(&VAR_6->resource[0]));

 FUNC_10(VAR_5->host);

 FUNC_1(&VAR_4->dev, ((void*)0));

 FUNC_7(&VAR_6->dev);

 return 0;
}
