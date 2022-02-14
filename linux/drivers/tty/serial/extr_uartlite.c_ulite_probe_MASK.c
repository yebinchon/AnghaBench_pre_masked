
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct uartlite_data {int * clk; TYPE_1__* ulite_uart_driver; } ;
struct resource {int start; } ;
struct TYPE_15__ {int of_node; } ;
struct platform_device {int id; TYPE_2__ dev; } ;
typedef int __be32 ;
struct TYPE_14__ {int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_6 ;
 int FUNC_2 (int const*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_2__*,char*) ;
 int FUNC_5 (TYPE_2__*,char*) ;
 int * FUNC_6 (TYPE_2__*,char*) ;
 struct uartlite_data* FUNC_7 (TYPE_2__*,int,int ) ;
 int FUNC_8 (int ,char*) ;
 int * FUNC_9 (int ,char*,int *) ;
 int FUNC_10 (struct platform_device*,int ) ;
 struct resource* FUNC_11 (struct platform_device*,int ,int ) ;
 int FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (TYPE_2__*) ;
 int FUNC_14 (TYPE_2__*) ;
 int FUNC_15 (TYPE_2__*) ;
 int FUNC_16 (TYPE_2__*,int ) ;
 int FUNC_17 (TYPE_2__*) ;
 int FUNC_18 (TYPE_1__*) ;
 int FUNC_19 (TYPE_2__*,int,int ,int,struct uartlite_data*) ;
 TYPE_1__ VAR_7 ;

__attribute__((used)) static int FUNC_20(struct platform_device *VAR_8)
{
 struct resource *VAR_9;
 struct uartlite_data *VAR_10;
 int VAR_11, VAR_12;
 int VAR_13 = VAR_8->id;







 if (VAR_13 < 0) {

  VAR_13 = FUNC_8(VAR_8->dev.of_node, "serial");
  if (VAR_13 < 0)
   VAR_13 = 0;
 }

 if (!VAR_7.state) {
  FUNC_4(&VAR_8->dev, "uartlite: calling uart_register_driver()\n");
  VAR_12 = FUNC_18(&VAR_7);
  if (VAR_12 < 0) {
   FUNC_5(&VAR_8->dev, "Failed to register driver\n");
   return VAR_12;
  }
 }

 VAR_10 = FUNC_7(&VAR_8->dev, sizeof(struct uartlite_data),
        VAR_4);
 if (!VAR_10)
  return -VAR_2;

 VAR_9 = FUNC_11(VAR_8, VAR_5, 0);
 if (!VAR_9)
  return -VAR_0;

 VAR_11 = FUNC_10(VAR_8, 0);
 if (VAR_11 <= 0)
  return -VAR_3;

 VAR_10->clk = FUNC_6(&VAR_8->dev, "s_axi_aclk");
 if (FUNC_0(VAR_10->clk)) {
  if (FUNC_1(VAR_10->clk) != -VAR_1)
   return FUNC_1(VAR_10->clk);





  VAR_10->clk = ((void*)0);
 }

 VAR_10->ulite_uart_driver = &VAR_7;
 VAR_12 = FUNC_3(VAR_10->clk);
 if (VAR_12) {
  FUNC_5(&VAR_8->dev, "Failed to prepare clock\n");
  return VAR_12;
 }

 FUNC_17(&VAR_8->dev);
 FUNC_16(&VAR_8->dev, VAR_6);
 FUNC_15(&VAR_8->dev);
 FUNC_12(&VAR_8->dev);

 VAR_12 = FUNC_19(&VAR_8->dev, VAR_13, VAR_9->start, VAR_11, VAR_10);

 FUNC_13(&VAR_8->dev);
 FUNC_14(&VAR_8->dev);

 return VAR_12;
}
