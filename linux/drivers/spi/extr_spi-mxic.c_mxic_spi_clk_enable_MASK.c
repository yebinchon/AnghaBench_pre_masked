
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mxic_spi {int send_clk; int send_dly_clk; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct mxic_spi *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_1(VAR_0->send_clk);
 if (VAR_1)
  return VAR_1;

 VAR_1 = FUNC_1(VAR_0->send_dly_clk);
 if (VAR_1)
  goto err_send_dly_clk;

 return VAR_1;

err_send_dly_clk:
 FUNC_0(VAR_0->send_clk);

 return VAR_1;
}
