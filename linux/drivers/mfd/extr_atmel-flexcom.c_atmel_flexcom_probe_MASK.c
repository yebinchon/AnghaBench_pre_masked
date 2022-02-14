
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct resource {int dummy; } ;
struct TYPE_5__ {struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct device_node {int dummy; } ;
struct atmel_flexcom {scalar_t__ opmode; scalar_t__ clk; scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_6 (TYPE_1__*,struct resource*) ;
 struct atmel_flexcom* FUNC_7 (TYPE_1__*,int,int ) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (struct device_node*,char*,scalar_t__*) ;
 struct resource* FUNC_10 (struct platform_device*,int ,int ) ;
 int FUNC_11 (struct platform_device*,struct atmel_flexcom*) ;
 int FUNC_12 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_7)
{
 struct device_node *VAR_8 = VAR_7->dev.of_node;
 struct resource *VAR_9;
 struct atmel_flexcom *VAR_10;
 int VAR_11;

 VAR_10 = FUNC_7(&VAR_7->dev, sizeof(*VAR_10), VAR_5);
 if (!VAR_10)
  return -VAR_3;

 FUNC_11(VAR_7, VAR_10);

 VAR_11 = FUNC_9(VAR_8, "atmel,flexcom-mode", &VAR_10->opmode);
 if (VAR_11)
  return VAR_11;

 if (VAR_10->opmode < VAR_1 ||
     VAR_10->opmode > VAR_0)
  return -VAR_2;

 VAR_9 = FUNC_10(VAR_7, VAR_6, 0);
 VAR_10->base = FUNC_6(&VAR_7->dev, VAR_9);
 if (FUNC_1(VAR_10->base))
  return FUNC_2(VAR_10->base);

 VAR_10->clk = FUNC_5(&VAR_7->dev, ((void*)0));
 if (FUNC_1(VAR_10->clk))
  return FUNC_2(VAR_10->clk);

 VAR_11 = FUNC_4(VAR_10->clk);
 if (VAR_11)
  return VAR_11;







 FUNC_12(FUNC_0(VAR_10->opmode), VAR_10->base + VAR_4);

 FUNC_3(VAR_10->clk);

 return FUNC_8(&VAR_7->dev);
}
