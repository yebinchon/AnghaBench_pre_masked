
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct platform_device {int dev; } ;
struct esp {TYPE_1__* host; int command_block_dma; int command_block; int dev; } ;
struct TYPE_2__ {unsigned int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct esp* FUNC_0 (int *) ;
 int FUNC_1 (int ,int,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (unsigned int,struct esp*) ;
 int FUNC_5 (struct esp*) ;
 int FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_2)
{
 struct esp *VAR_3 = FUNC_0(&VAR_2->dev);
 unsigned int VAR_4 = VAR_3->host->irq;
 u32 VAR_5;

 FUNC_5(VAR_3);


 VAR_5 = FUNC_2(VAR_0);
 FUNC_3(VAR_5 & ~VAR_1, VAR_0);

 FUNC_4(VAR_4, VAR_3);
 FUNC_1(VAR_3->dev, 16,
     VAR_3->command_block,
     VAR_3->command_block_dma);

 FUNC_6(VAR_3->host);

 return 0;
}
