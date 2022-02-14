
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct resource {int dummy; } ;
struct TYPE_5__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct mtk_nor {TYPE_1__* dev; void* nor_clk; void* spi_clk; void* base; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 void* FUNC_3 (TYPE_1__*,char*) ;
 void* FUNC_4 (TYPE_1__*,struct resource*) ;
 struct mtk_nor* FUNC_5 (TYPE_1__*,int,int ) ;
 int FUNC_6 (struct mtk_nor*) ;
 int FUNC_7 (struct mtk_nor*) ;
 int FUNC_8 (struct mtk_nor*,struct device_node*) ;
 struct device_node* FUNC_9 (int ,int *) ;
 struct resource* FUNC_10 (struct platform_device*,int ,int ) ;
 int FUNC_11 (struct platform_device*,struct mtk_nor*) ;

__attribute__((used)) static int FUNC_12(struct platform_device *VAR_5)
{
 struct device_node *VAR_6;
 struct resource *VAR_7;
 int VAR_8;
 struct mtk_nor *VAR_9;

 if (!VAR_5->dev.of_node) {
  FUNC_2(&VAR_5->dev, "No DT found\n");
  return -VAR_0;
 }

 VAR_9 = FUNC_5(&VAR_5->dev, sizeof(*VAR_9), VAR_3);
 if (!VAR_9)
  return -VAR_2;
 FUNC_11(VAR_5, VAR_9);

 VAR_7 = FUNC_10(VAR_5, VAR_4, 0);
 VAR_9->base = FUNC_4(&VAR_5->dev, VAR_7);
 if (FUNC_0(VAR_9->base))
  return FUNC_1(VAR_9->base);

 VAR_9->spi_clk = FUNC_3(&VAR_5->dev, "spi");
 if (FUNC_0(VAR_9->spi_clk))
  return FUNC_1(VAR_9->spi_clk);

 VAR_9->nor_clk = FUNC_3(&VAR_5->dev, "sf");
 if (FUNC_0(VAR_9->nor_clk))
  return FUNC_1(VAR_9->nor_clk);

 VAR_9->dev = &VAR_5->dev;

 VAR_8 = FUNC_7(VAR_9);
 if (VAR_8)
  return VAR_8;


 VAR_6 = FUNC_9(VAR_5->dev.of_node, ((void*)0));
 if (!VAR_6) {
  FUNC_2(&VAR_5->dev, "no SPI flash device to configure\n");
  VAR_8 = -VAR_1;
  goto nor_free;
 }
 VAR_8 = FUNC_8(VAR_9, VAR_6);

nor_free:
 if (VAR_8)
  FUNC_6(VAR_9);

 return VAR_8;
}
