
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* parent; } ;
struct platform_device {TYPE_1__ dev; int num_resources; int resource; } ;
struct musb_hdrc_platform_data {int * platform_ops; } ;
struct jz4740_glue {struct clk* clk; struct platform_device* musb; TYPE_1__* dev; } ;
struct clk {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct clk*) ;
 int VAR_2 ;
 int FUNC_1 (struct clk*) ;
 int FUNC_2 (struct clk*) ;
 int FUNC_3 (struct clk*) ;
 int FUNC_4 (TYPE_1__*,char*) ;
 struct clk* FUNC_5 (TYPE_1__*,char*) ;
 struct jz4740_glue* FUNC_6 (TYPE_1__*,int,int ) ;
 int VAR_3 ;
 struct musb_hdrc_platform_data VAR_4 ;
 int FUNC_7 (struct platform_device*) ;
 int FUNC_8 (struct platform_device*,struct musb_hdrc_platform_data*,int) ;
 int FUNC_9 (struct platform_device*,int ,int ) ;
 struct platform_device* FUNC_10 (char*,int ) ;
 int FUNC_11 (struct platform_device*) ;
 int FUNC_12 (struct platform_device*,struct jz4740_glue*) ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_5)
{
 struct musb_hdrc_platform_data *VAR_6 = &VAR_4;
 struct platform_device *VAR_7;
 struct jz4740_glue *VAR_8;
 struct clk *VAR_9;
 int VAR_10;

 VAR_8 = FUNC_6(&VAR_5->dev, sizeof(*VAR_8), VAR_1);
 if (!VAR_8)
  return -VAR_0;

 VAR_7 = FUNC_10("musb-hdrc", VAR_2);
 if (!VAR_7) {
  FUNC_4(&VAR_5->dev, "failed to allocate musb device\n");
  return -VAR_0;
 }

 VAR_9 = FUNC_5(&VAR_5->dev, "udc");
 if (FUNC_0(VAR_9)) {
  FUNC_4(&VAR_5->dev, "failed to get clock\n");
  VAR_10 = FUNC_1(VAR_9);
  goto err_platform_device_put;
 }

 VAR_10 = FUNC_3(VAR_9);
 if (VAR_10) {
  FUNC_4(&VAR_5->dev, "failed to enable clock\n");
  goto err_platform_device_put;
 }

 VAR_7->dev.parent = &VAR_5->dev;

 VAR_8->dev = &VAR_5->dev;
 VAR_8->musb = VAR_7;
 VAR_8->clk = VAR_9;

 VAR_6->platform_ops = &VAR_3;

 FUNC_12(VAR_5, VAR_8);

 VAR_10 = FUNC_9(VAR_7, VAR_5->resource,
         VAR_5->num_resources);
 if (VAR_10) {
  FUNC_4(&VAR_5->dev, "failed to add resources\n");
  goto err_clk_disable;
 }

 VAR_10 = FUNC_8(VAR_7, VAR_6, sizeof(*VAR_6));
 if (VAR_10) {
  FUNC_4(&VAR_5->dev, "failed to add platform_data\n");
  goto err_clk_disable;
 }

 VAR_10 = FUNC_7(VAR_7);
 if (VAR_10) {
  FUNC_4(&VAR_5->dev, "failed to register musb device\n");
  goto err_clk_disable;
 }

 return 0;

err_clk_disable:
 FUNC_2(VAR_9);
err_platform_device_put:
 FUNC_11(VAR_7);
 return VAR_10;
}
