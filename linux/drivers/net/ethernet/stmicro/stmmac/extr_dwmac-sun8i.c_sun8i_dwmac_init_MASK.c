
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sunxi_priv_data {scalar_t__ regulator; int tx_clk; } ;
struct platform_device {int dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_0, void *VAR_1)
{
 struct sunxi_priv_data *VAR_2 = VAR_1;
 int VAR_3;

 if (VAR_2->regulator) {
  VAR_3 = FUNC_3(VAR_2->regulator);
  if (VAR_3) {
   FUNC_1(&VAR_0->dev, "Fail to enable regulator\n");
   return VAR_3;
  }
 }

 VAR_3 = FUNC_0(VAR_2->tx_clk);
 if (VAR_3) {
  if (VAR_2->regulator)
   FUNC_2(VAR_2->regulator);
  FUNC_1(&VAR_0->dev, "Could not enable AHB clock\n");
  return VAR_3;
 }

 return 0;
}
