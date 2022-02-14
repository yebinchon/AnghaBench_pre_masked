
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct ast_vhub {int * ep0_bufs; int ep0_bufs_dma; int lock; scalar_t__ clk; scalar_t__ regs; TYPE_1__* ports; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,int,int *,int ) ;
 struct ast_vhub* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_8)
{
 struct ast_vhub *VAR_9 = FUNC_3(VAR_8);
 unsigned long VAR_10;
 int VAR_11;

 if (!VAR_9 || !VAR_9->regs)
  return 0;


 for (VAR_11 = 0; VAR_11 < VAR_4; VAR_11++)
  FUNC_0(&VAR_9->ports[VAR_11].dev);

 FUNC_4(&VAR_9->lock, VAR_10);


 FUNC_6(0, VAR_9->regs + VAR_2);
 FUNC_6(VAR_7, VAR_9->regs + VAR_3);


 FUNC_6(VAR_5 |
        VAR_6,
        VAR_9->regs + VAR_0);

 if (VAR_9->clk)
  FUNC_1(VAR_9->clk);

 FUNC_5(&VAR_9->lock, VAR_10);

 if (VAR_9->ep0_bufs)
  FUNC_2(&VAR_8->dev,
      VAR_1 *
      (VAR_4 + 1),
      VAR_9->ep0_bufs,
      VAR_9->ep0_bufs_dma);
 VAR_9->ep0_bufs = ((void*)0);

 return 0;
}
