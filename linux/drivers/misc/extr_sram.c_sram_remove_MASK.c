
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sram_dev {scalar_t__ clk; int dev; int pool; } ;
struct platform_device {int dummy; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 struct sram_dev* FUNC_4 (struct platform_device*) ;
 int FUNC_5 (struct sram_dev*) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_0)
{
 struct sram_dev *VAR_1 = FUNC_4(VAR_0);

 FUNC_5(VAR_1);

 if (FUNC_2(VAR_1->pool) < FUNC_3(VAR_1->pool))
  FUNC_1(VAR_1->dev, "removed while SRAM allocated\n");

 if (VAR_1->clk)
  FUNC_0(VAR_1->clk);

 return 0;
}
