
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct TYPE_2__ {int line; } ;
struct dw8250_data {int clk; int pclk; int rst; TYPE_1__ data; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct dw8250_data* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (struct device*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_0)
{
 struct dw8250_data *VAR_1 = FUNC_2(VAR_0);
 struct device *VAR_2 = &VAR_0->dev;

 FUNC_4(VAR_2);

 FUNC_7(VAR_1->data.line);

 FUNC_6(VAR_1->rst);

 if (!FUNC_0(VAR_1->pclk))
  FUNC_1(VAR_1->pclk);

 if (!FUNC_0(VAR_1->clk))
  FUNC_1(VAR_1->clk);

 FUNC_3(VAR_2);
 FUNC_5(VAR_2);

 return 0;
}
