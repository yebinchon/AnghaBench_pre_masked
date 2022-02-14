
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct mvneta_bm {int clk; struct platform_device* pdev; int reg_base; } ;
struct device_node {struct mvneta_bm* data; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*,char*) ;
 int FUNC_5 (TYPE_1__*,char*) ;
 int FUNC_6 (TYPE_1__*,int *) ;
 struct mvneta_bm* FUNC_7 (TYPE_1__*,int,int ) ;
 int FUNC_8 (struct platform_device*,int ) ;
 int FUNC_9 (struct device_node*,struct mvneta_bm*) ;
 int FUNC_10 (struct mvneta_bm*) ;
 int FUNC_11 (struct mvneta_bm*) ;
 int FUNC_12 (struct platform_device*,struct mvneta_bm*) ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_2)
{
 struct device_node *VAR_3 = VAR_2->dev.of_node;
 struct mvneta_bm *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_7(&VAR_2->dev, sizeof(struct mvneta_bm), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 VAR_4->reg_base = FUNC_8(VAR_2, 0);
 if (FUNC_0(VAR_4->reg_base))
  return FUNC_1(VAR_4->reg_base);

 VAR_4->clk = FUNC_6(&VAR_2->dev, ((void*)0));
 if (FUNC_0(VAR_4->clk))
  return FUNC_1(VAR_4->clk);
 VAR_5 = FUNC_3(VAR_4->clk);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_5 = FUNC_9(VAR_3, VAR_4);
 if (VAR_5 < 0) {
  FUNC_4(&VAR_2->dev, "failed to allocate internal memory\n");
  goto err_clk;
 }

 VAR_4->pdev = VAR_2;


 VAR_5 = FUNC_10(VAR_4);
 if (VAR_5 < 0) {
  FUNC_4(&VAR_2->dev, "failed to initialize controller\n");
  goto err_sram;
 }

 VAR_3->data = VAR_4;
 FUNC_12(VAR_2, VAR_4);

 FUNC_5(&VAR_2->dev, "Buffer Manager for network controller enabled\n");

 return 0;

err_sram:
 FUNC_11(VAR_4);
err_clk:
 FUNC_2(VAR_4->clk);
 return VAR_5;
}
