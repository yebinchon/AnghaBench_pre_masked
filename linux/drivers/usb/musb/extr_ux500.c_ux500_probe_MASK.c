
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct ux500_glue {struct clk* clk; struct platform_device* musb; TYPE_2__* dev; } ;
struct resource {int flags; int end; int start; int name; } ;
struct TYPE_7__ {int coherent_dma_mask; int * dma_mask; struct TYPE_7__* parent; struct musb_hdrc_platform_data* platform_data; struct device_node* of_node; } ;
struct platform_device {TYPE_2__ dev; TYPE_1__* resource; } ;
struct musb_hdrc_platform_data {int * config; int * platform_ops; } ;
struct device_node {int dummy; } ;
struct clk {int dummy; } ;
struct TYPE_6__ {int flags; int end; int start; int name; } ;


 int FUNC_0 (struct resource*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct clk*) ;
 int VAR_2 ;
 int FUNC_2 (struct clk*) ;
 int FUNC_3 (struct clk*) ;
 int FUNC_4 (struct clk*) ;
 int FUNC_5 (TYPE_2__*,char*) ;
 struct musb_hdrc_platform_data* FUNC_6 (TYPE_2__*) ;
 struct clk* FUNC_7 (TYPE_2__*,int *) ;
 struct ux500_glue* FUNC_8 (TYPE_2__*,int,int ) ;
 int FUNC_9 (struct resource*,int,int) ;
 int FUNC_10 (struct platform_device*) ;
 int FUNC_11 (struct platform_device*,struct musb_hdrc_platform_data*,int) ;
 int FUNC_12 (struct platform_device*,struct resource*,int) ;
 struct platform_device* FUNC_13 (char*,int ) ;
 int FUNC_14 (struct platform_device*) ;
 int FUNC_15 (struct platform_device*,struct ux500_glue*) ;
 int VAR_3 ;
 struct musb_hdrc_platform_data* FUNC_16 (struct platform_device*,struct device_node*) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_17(struct platform_device *VAR_5)
{
 struct resource VAR_6[2];
 struct musb_hdrc_platform_data *VAR_7 = FUNC_6(&VAR_5->dev);
 struct device_node *VAR_8 = VAR_5->dev.of_node;
 struct platform_device *VAR_9;
 struct ux500_glue *VAR_10;
 struct clk *VAR_11;
 int VAR_12 = -VAR_0;

 if (!VAR_7) {
  if (VAR_8) {
   VAR_7 = FUNC_16(VAR_5, VAR_8);
   if (!VAR_7)
    goto err0;

   VAR_5->dev.platform_data = VAR_7;
  } else {
   FUNC_5(&VAR_5->dev, "no pdata or device tree found\n");
   goto err0;
  }
 }

 VAR_10 = FUNC_8(&VAR_5->dev, sizeof(*VAR_10), VAR_1);
 if (!VAR_10)
  goto err0;

 VAR_9 = FUNC_13("musb-hdrc", VAR_2);
 if (!VAR_9) {
  FUNC_5(&VAR_5->dev, "failed to allocate musb device\n");
  goto err0;
 }

 VAR_11 = FUNC_7(&VAR_5->dev, ((void*)0));
 if (FUNC_1(VAR_11)) {
  FUNC_5(&VAR_5->dev, "failed to get clock\n");
  VAR_12 = FUNC_2(VAR_11);
  goto err1;
 }

 VAR_12 = FUNC_4(VAR_11);
 if (VAR_12) {
  FUNC_5(&VAR_5->dev, "failed to enable clock\n");
  goto err1;
 }

 VAR_9->dev.parent = &VAR_5->dev;
 VAR_9->dev.dma_mask = &VAR_5->dev.coherent_dma_mask;
 VAR_9->dev.coherent_dma_mask = VAR_5->dev.coherent_dma_mask;

 VAR_10->dev = &VAR_5->dev;
 VAR_10->musb = VAR_9;
 VAR_10->clk = VAR_11;

 VAR_7->platform_ops = &VAR_4;
 VAR_7->config = &VAR_3;

 FUNC_15(VAR_5, VAR_10);

 FUNC_9(VAR_6, 0x00, sizeof(*VAR_6) *
   FUNC_0(VAR_6));

 VAR_6[0].name = VAR_5->resource[0].name;
 VAR_6[0].start = VAR_5->resource[0].start;
 VAR_6[0].end = VAR_5->resource[0].end;
 VAR_6[0].flags = VAR_5->resource[0].flags;

 VAR_6[1].name = VAR_5->resource[1].name;
 VAR_6[1].start = VAR_5->resource[1].start;
 VAR_6[1].end = VAR_5->resource[1].end;
 VAR_6[1].flags = VAR_5->resource[1].flags;

 VAR_12 = FUNC_12(VAR_9, VAR_6,
   FUNC_0(VAR_6));
 if (VAR_12) {
  FUNC_5(&VAR_5->dev, "failed to add resources\n");
  goto err2;
 }

 VAR_12 = FUNC_11(VAR_9, VAR_7, sizeof(*VAR_7));
 if (VAR_12) {
  FUNC_5(&VAR_5->dev, "failed to add platform_data\n");
  goto err2;
 }

 VAR_12 = FUNC_10(VAR_9);
 if (VAR_12) {
  FUNC_5(&VAR_5->dev, "failed to register musb device\n");
  goto err2;
 }

 return 0;

err2:
 FUNC_3(VAR_11);

err1:
 FUNC_14(VAR_9);

err0:
 return VAR_12;
}
