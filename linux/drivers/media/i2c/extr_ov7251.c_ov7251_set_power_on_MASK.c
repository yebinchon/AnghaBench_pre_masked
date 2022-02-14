
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ov7251 {int xclk_freq; int enable_gpio; int dev; int xclk; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (struct ov7251*) ;
 int FUNC_5 (struct ov7251*) ;
 int FUNC_6 (int,int) ;

__attribute__((used)) static int FUNC_7(struct ov7251 *VAR_0)
{
 int VAR_1;
 u32 VAR_2;

 VAR_1 = FUNC_5(VAR_0);
 if (VAR_1 < 0)
  return VAR_1;

 VAR_1 = FUNC_1(VAR_0->xclk);
 if (VAR_1 < 0) {
  FUNC_2(VAR_0->dev, "clk prepare enable failed\n");
  FUNC_4(VAR_0);
  return VAR_1;
 }

 FUNC_3(VAR_0->enable_gpio, 1);


 VAR_2 = FUNC_0(65536 * 1000,
          FUNC_0(VAR_0->xclk_freq, 1000));
 FUNC_6(VAR_2, VAR_2 + 1000);

 return 0;
}
