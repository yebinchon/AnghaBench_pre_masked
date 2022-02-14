
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct hifmc_host {void* clk; int lock; int buffer; int dma_buffer; void* iobase; void* regbase; struct device* dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (struct device*,char*) ;
 void* FUNC_6 (struct device*,int *) ;
 void* FUNC_7 (struct device*,struct resource*) ;
 struct hifmc_host* FUNC_8 (struct device*,int,int ) ;
 int FUNC_9 (struct device*,int ) ;
 int FUNC_10 (struct device*,int ,int *,int ) ;
 int FUNC_11 (struct hifmc_host*) ;
 int FUNC_12 (struct hifmc_host*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 struct resource* FUNC_15 (struct platform_device*,int ,char*) ;
 int FUNC_16 (struct platform_device*,struct hifmc_host*) ;

__attribute__((used)) static int FUNC_17(struct platform_device *VAR_4)
{
 struct device *VAR_5 = &VAR_4->dev;
 struct resource *VAR_6;
 struct hifmc_host *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_8(VAR_5, sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 FUNC_16(VAR_4, VAR_7);
 VAR_7->dev = VAR_5;

 VAR_6 = FUNC_15(VAR_4, VAR_3, "control");
 VAR_7->regbase = FUNC_7(VAR_5, VAR_6);
 if (FUNC_1(VAR_7->regbase))
  return FUNC_2(VAR_7->regbase);

 VAR_6 = FUNC_15(VAR_4, VAR_3, "memory");
 VAR_7->iobase = FUNC_7(VAR_5, VAR_6);
 if (FUNC_1(VAR_7->iobase))
  return FUNC_2(VAR_7->iobase);

 VAR_7->clk = FUNC_6(VAR_5, ((void*)0));
 if (FUNC_1(VAR_7->clk))
  return FUNC_2(VAR_7->clk);

 VAR_8 = FUNC_9(VAR_5, FUNC_0(32));
 if (VAR_8) {
  FUNC_5(VAR_5, "Unable to set dma mask\n");
  return VAR_8;
 }

 VAR_7->buffer = FUNC_10(VAR_5, VAR_2,
   &VAR_7->dma_buffer, VAR_1);
 if (!VAR_7->buffer)
  return -VAR_0;

 VAR_8 = FUNC_4(VAR_7->clk);
 if (VAR_8)
  return VAR_8;

 FUNC_14(&VAR_7->lock);
 FUNC_11(VAR_7);
 VAR_8 = FUNC_12(VAR_7);
 if (VAR_8)
  FUNC_13(&VAR_7->lock);

 FUNC_3(VAR_7->clk);
 return VAR_8;
}
