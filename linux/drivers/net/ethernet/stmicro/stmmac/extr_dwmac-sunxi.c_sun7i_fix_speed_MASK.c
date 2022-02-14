
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sunxi_priv_data {scalar_t__ interface; int clk_enabled; int tx_clk; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(void *VAR_3, unsigned int VAR_4)
{
 struct sunxi_priv_data *VAR_5 = VAR_3;


 if (VAR_5->interface != VAR_0)
  return;

 if (VAR_5->clk_enabled) {
  FUNC_0(VAR_5->tx_clk);
  VAR_5->clk_enabled = 0;
 }
 FUNC_4(VAR_5->tx_clk);

 if (VAR_4 == 1000) {
  FUNC_3(VAR_5->tx_clk, VAR_1);
  FUNC_2(VAR_5->tx_clk);
  VAR_5->clk_enabled = 1;
 } else {
  FUNC_3(VAR_5->tx_clk, VAR_2);
  FUNC_1(VAR_5->tx_clk);
 }
}
