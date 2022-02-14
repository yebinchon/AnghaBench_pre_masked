
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mxic_spi {int send_dly_clk; int send_clk; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (struct mxic_spi*,int) ;

__attribute__((used)) static int FUNC_3(struct mxic_spi *VAR_0, unsigned long VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_1(VAR_0->send_clk, VAR_1);
 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_1(VAR_0->send_dly_clk, VAR_1);
 if (VAR_2)
  return VAR_2;





 FUNC_2(VAR_0, 0xf);
 VAR_2 = FUNC_0(VAR_0->send_dly_clk, 9 * VAR_1 / 25000000);
 if (VAR_2)
  return VAR_2;

 return 0;
}
