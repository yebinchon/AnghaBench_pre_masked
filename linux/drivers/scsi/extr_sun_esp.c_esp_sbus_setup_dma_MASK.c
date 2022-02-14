
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int * resource; } ;
struct esp {int dmarev; int dma_regs; struct platform_device* dma; } ;


 int VAR_0 ;
 int VAR_1 ;






 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int *,int ,int ,char*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct esp *VAR_9, struct platform_device *VAR_10)
{
 VAR_9->dma = VAR_10;

 VAR_9->dma_regs = FUNC_1(&VAR_10->resource[0], 0,
       FUNC_2(&VAR_10->resource[0]),
       "espdma");
 if (!VAR_9->dma_regs)
  return -VAR_2;

 switch (FUNC_0(VAR_0) & VAR_1) {
 case 131:
  VAR_9->dmarev = VAR_5;
  break;
 case 133:
  VAR_9->dmarev = VAR_3;
  break;
 case 130:
  VAR_9->dmarev = VAR_6;
  break;
 case 129:
  VAR_9->dmarev = VAR_7;
  break;
 case 132:
  VAR_9->dmarev = VAR_4;
  break;
 case 128:
  VAR_9->dmarev = VAR_8;
  break;
 }

 return 0;

}
