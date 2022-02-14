
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct orion_mdio_dev {scalar_t__ err_interrupt; int * clk; scalar_t__ regs; } ;
struct mii_bus {struct orion_mdio_dev* priv; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct mii_bus*) ;
 struct mii_bus* FUNC_5 (struct platform_device*) ;
 int FUNC_6 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_1)
{
 struct mii_bus *VAR_2 = FUNC_5(VAR_1);
 struct orion_mdio_dev *VAR_3 = VAR_2->priv;
 int VAR_4;

 if (VAR_3->err_interrupt > 0)
  FUNC_6(0, VAR_3->regs + VAR_0);
 FUNC_4(VAR_2);

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_3->clk); VAR_4++) {
  if (FUNC_1(VAR_3->clk[VAR_4]))
   break;
  FUNC_2(VAR_3->clk[VAR_4]);
  FUNC_3(VAR_3->clk[VAR_4]);
 }

 return 0;
}
