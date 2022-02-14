
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sunxi_priv_data {scalar_t__ interface; int clk_enabled; int tx_clk; scalar_t__ regulator; } ;
struct platform_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_3, void *VAR_4)
{
 struct sunxi_priv_data *VAR_5 = VAR_4;
 int VAR_6;

 if (VAR_5->regulator) {
  VAR_6 = FUNC_3(VAR_5->regulator);
  if (VAR_6)
   return VAR_6;
 }







 if (VAR_5->interface == VAR_0) {
  FUNC_2(VAR_5->tx_clk, VAR_1);
  FUNC_1(VAR_5->tx_clk);
  VAR_5->clk_enabled = 1;
 } else {
  FUNC_2(VAR_5->tx_clk, VAR_2);
  VAR_6 = FUNC_0(VAR_5->tx_clk);
  if (VAR_6)
   return VAR_6;
 }

 return 0;
}
