
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ov5645 {int rst_gpio; int enable_gpio; int supplies; int dev; int xclk; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int,int) ;

__attribute__((used)) static int FUNC_7(struct ov5645 *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_5(VAR_0, VAR_1->supplies);
 if (VAR_2 < 0)
  return VAR_2;

 VAR_2 = FUNC_0(VAR_1->xclk);
 if (VAR_2 < 0) {
  FUNC_1(VAR_1->dev, "clk prepare enable failed\n");
  FUNC_4(VAR_0, VAR_1->supplies);
  return VAR_2;
 }

 FUNC_6(5000, 15000);
 FUNC_2(VAR_1->enable_gpio, 1);

 FUNC_6(1000, 2000);
 FUNC_2(VAR_1->rst_gpio, 0);

 FUNC_3(20);

 return 0;
}
